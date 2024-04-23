class Product{
    int id;
    int name;
    int price;

    public:
    Product(int id , int name , int price){
        this->id = id;
        this->name = name;
        this->price = price;
    }
    Product(){}
    void setId(int id){
        this->id = id;
    }
    void setName(int name){
        this->name = name;
    }
    void setPrice(int price){
        this->price = price;
    }
    int getId(){
        return id;
    }
    int getName(){
        return name;
    }
    int getPrice(){
        return price;
    }
    void displayProduct(){
        cout<< "Product Id: "<<id<<endl;
        cout<< "Product Name: "<<name<<endl;
        cout<< "Product Price: "<<price<<endl;
    }
};