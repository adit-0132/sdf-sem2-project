    #include <iostream>
    using namespace std;
    class card  
    {
        string acc_no;
        string holder;
        struct doe
        {
            int month,date,year;
        } d1;
        int cvv;
        public:
        void get_card()
        {
            cout<< "ACC no: ";
            cin>>acc_no;
            cout<<endl<< "Card holder's name: ";
            cin>>holder;
            cout<< "Date of Expiry [MM_DD_YYYY]: ";
            cin>>d1.month;
            cin>>d1.date;
            cin>>d1.year;
            cout<<endl<<"CVV : ";
            cin>> cvv;
        }   
        void display_card()
        {
            cout<< "ACC no: "<<acc_no;
            cout<<endl<< "Card holder's name: "<<holder;
            cout<< "Date of Expiry [MM_DD_YYYY]: "<<d1.month<<d1.date<<d1.year;
            cout<<endl<<"CVV : "<<cvv;
        }
    };
    int main()
    {
        card avu;
        avu.get_card();
        avu.display_card();
        return 0;
    }
    
