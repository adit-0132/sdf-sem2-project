#include<iostream>
#include<cstring>
using namespace std;

// for product

class product
{
public:
    int price,id;
    string name,dom,comp_name,doe;
    void getdata(void)
    {
        cout<<"enter product name: " << endl;
        cin>>name;
        cout<<"enter company's name: " << endl;
        cin>> comp_name;
        cout<<"enter product ID: " << endl;
        cin>>id;
        cout<<"enter product price: " << endl;
        cin>>price;
        cout<<"enter product date of manufacturing: " << endl;
        cin>>dom;
        cout<<"enter product's expiry date: " << endl;
        cin>>doe;
    }
    void display1(void)
    {
        cout<<"product name: " << name << endl;
        cout<<"company's name: " << comp_name << endl;
        cout<<"product ID: " << id << endl;
        cout<<"product price: " << price << endl;
        cout<<"date of manufacturing: " << dom << endl;
        cout<<"date of expiry: " << doe << endl;
    }
};

int main()
{
    int n,i;
    cout<<"enter number of products: " << endl;
    cin>>n;
    product p1[n];
    for(i=0; i<n; i++)
   {
      p1[i].getdata();
   }
   for(i=0; i<n; i++)
   {
      p1[i].display1();
   }
    return 0;
}
