#include<iostream>
#include<cstring>
using namespace std;

class product
{
public:

    int price,id;
    string name,dom,comp_name,doe;

    void getdata(void)
    {
        cout<<"enter product name: " << endl;
        cin>>name;

        cout<<endl;

        cout<<"enter company's name: " << endl;
        cin>> comp_name;

        cout<<endl;

        cout<<"enter product ID: " << endl;
        cin>>id;

        cout<<endl;

        cout<<"enter product price: " << endl;
        cin>>price;

        cout<<endl;

        cout<<"enter product date of manufacturing: " << endl;
        cin>>dom;

        cout<<endl;

        cout<<"enter product's expiry date: " << endl;
        cin>>doe;

        cout<<endl;
    }
};
class category1: public product
{

public:

    int review_price1;

    void getprice1(void)
    {
        cout<<endl<<"enter review price for category 1: " << endl;
        cin>>review_price1;
    }

    void display(void)
    {
        cout<<"product name: " << name << endl;
        cout<<"company's name: " << comp_name << endl;
        cout<<"product ID: " << id << endl;
        cout<<"product price: " << price << endl;
        cout<<"date of manufacturing: " << dom << endl;
        cout<<"date of expiry: " << doe << endl;
    }
};

class category2: public product
{

public:

    int review_price2;

    void getprice2(void)
    {
        cout<<endl<<"enter review price for category 2: " << endl;
        cin>>review_price2;
    }

    void display(void)
    {
        cout<<"product name: " << name << endl;
        cout<<"company's name: " << comp_name << endl;
        cout<<"product ID: " << id << endl;
        cout<<"product price: " << price << endl;
        cout<<"date of manufacturing: " << dom << endl;
        cout<<"date of expiry: " << doe << endl;
    }
};

class category3: public product
{

public:

    int review_price3;

    void getprice3(void)
    {
        cout<<endl<<"enter review price for category 3: " << endl;
        cin>>review_price3;
    }

    void display(void)
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
    cout<<"             !!!WELCOME!!!             " << endl;
    cout<<"THE PRODUCTS CAN BE CLASSIFIED UNDER 3 CATEGORIES WHICH ARE: " << endl << "CATEGORY 1" << endl << "CATEGORY 2" << endl << "CATEGORY 3" << endl;
    cout<<"THEREFORE ENTER THE APPROPRIATE PRODUCT UNDER THE APPROPRIATE CATEGORY" << endl<<endl;

    int n1,n2,n3;

    int i;

    cout<<"enter number of products for category 1: " << endl;
    cin>>n1;

    cout<<"enter number of products for category 2: " << endl;
    cin>>n2;

    cout<<"enter number of products for category 3: " << endl;
    cin>>n3;

    category1 obj1[n1];
    category2 obj2[n2];
    category3 obj3[n3];

    for(i=0; i<n1; i++)
    {
        cout<<endl<<"for category: 1 " << endl;
        obj1[i].getdata();
        obj1[i].display();
    }

    cout<<endl;
    obj1[n1].getprice1();

    for(i=0; i<n2; i++)
    {
        cout<<endl<<"for category: 2 " << endl;
        obj2[i].getdata();
        obj2[i].display();
    }

    cout<<endl;
    obj2[n2].getprice2();

    for(i=0; i<n3; i++)
    {
        cout<<endl<<"for category: 3 " << endl;
        obj3[i].getdata();
        obj3[i].display();
    }

    cout<<endl;
    obj3[n3].getprice3();

    return 0;
}
