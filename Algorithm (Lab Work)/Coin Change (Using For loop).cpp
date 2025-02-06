#include<iostream>
using namespace std;

struct Product
{
    string no;
    double weight;
    double profit;
    double value;
};

int main()
{
   int n;
   cout << "How many Product? ";
   cin >> n;
   Product product[n];

    for(int i=0; i<n; i++)
   {
        cout << "Enter Product "<< (i+1) << " Details- " << endl;
        cout << "Enter Product No: ";
        cin >> product[i].no;
        cout << "Enter Product Weight: ";
        cin >> product[i].weight;
        cout << "Enter Product Profit: ";
        cin >> product[i].profit;
        cout << endl;
   }

   for(int i=0; i<n; i++)
   {
        product[i].value = (product[i].profit) / (product[i].weight);
        cout << "Value of " << (product[i].no) << " : " << product[i].value << endl;
   }
   cout << endl << endl;

   Product temp;
   for (int j=0; j<n-1; j++)
   {
     for(int i=0; i<n-j-1; i++)
     {
        if(product[i].value < product[i+1].value)
        {
            temp = product[i];
            product[i]= product[i+1];
            product[i+1] = temp;
        }
     }
   }
    cout << "-----Descending Order Sorted Value-----" << endl << endl;
    for(int i=0; i<n; i++)
    {
        cout << "Product No: " << product[i].no << endl;
        cout << "Product Weight: " << product[i].weight << endl;
        cout << "Product Profit: " << product[i].profit << endl;
        cout << "Product Value: " << product[i].value << endl;
        cout << endl;
    }

    double weight_need, sum = 0;
    cout << "Enter Maximum Weight Store: ";
    cin >> weight_need;

    for(int i=0; i<n; i++)
    {
        if (product[i].weight <= weight_need)
        {
            weight_need = weight_need - product[i].weight;
            sum = sum + product[i].value;
            cout << "Product No: " << product[i].no << endl;
            cout << "Product Value: " << product[i].value << endl;
        }
        else
        {
            cout << "\n---Weight Need: " << weight_need << endl;
            double percentage =  (weight_need / product[i].weight);
            cout << "Product No: " << product[i].no << endl;
            cout << "Product's Fraction Value: " << percentage << endl;
            sum = sum + (product[i].value * percentage);
            break;
        }

    }
            cout << "Total Value in Knapsack: " << sum << endl;
}
