#include<iostream>
using namespace std;
class Vehicle
{   protected:
    int mileage;
    int price;
    public:
    void getdata()
    {   cout<<"Enter mileage and price:";
        cin>>mileage>>price;
    }
    void putdata()
    {   cout<<"Mileage:"<<mileage<<endl;
        cout<<"Price:"<<price<<endl;
    }
    friend class Car;
    friend class Bike;

};     

class car:public Vehicle
{   protected:
    int ownership_cost;
    int warranty;
    int seating_capacity;
    char fuel_type[10];
    public:
    void getdata()
    {   Vehicle::getdata();
        cout<<"Enter ownership cost,warranty,seating capacity and fuel type:";
        cin>>ownership_cost>>warranty>>seating_capacity>>fuel_type;
    }
    void putdata()
    {   Vehicle::putdata();
        cout<<"Ownership cost:"<<ownership_cost<<endl;
        cout<<"Warranty:"<<warranty<<endl;
        cout<<"Seating capacity:"<<seating_capacity<<endl;
        cout<<"Fuel type:"<<fuel_type<<endl;
    }
    friend class audi;
    friend class ford;
};

class bike:public Vehicle
{   protected:
    int no_of_cylinders;
    int no_of_gears;
    char cooling_type[10];
    char wheel_type[10];
    int fuel_tank_size;
    public:
    void getdata()
    {   Vehicle::getdata();
        cout<<"Enter no of cylinders,no of gears,cooling type,wheel type and fuel tank size:";
        cin>>no_of_cylinders>>no_of_gears>>cooling_type>>wheel_type>>fuel_tank_size;
    }
    void putdata()
    {   Vehicle::putdata();
        cout<<"No of cylinders:"<<no_of_cylinders<<endl;
        cout<<"No of gears:"<<no_of_gears<<endl;
        cout<<"Cooling type:"<<cooling_type<<endl;
        cout<<"Wheel type:"<<wheel_type<<endl;
        cout<<"Fuel tank size:"<<fuel_tank_size<<endl;
    }
    friend class bajaj;
    friend class tvs;
};

class audi:public car
{   protected:
    char model_type[10];
    public:
    void getdata()
    {   car::getdata();
        cout<<"Enter model type:";
        cin>>model_type;
    }
    void putdata()
    {   car::putdata();
        cout<<"Model type:"<<model_type<<endl;
    }
};
class ford:public car
{   protected:
    char model_type[10];
    public:
    void getdata()
    {   car::getdata();
        cout<<"Enter model type:";
        cin>>model_type;
    }
    void putdata()
    {   car::putdata();
        cout<<"Model type:"<<model_type<<endl;
    }
};
class tvs:public bike
{   protected:
    char make_type[10];
    public:
    void getdata()
    {   bike::getdata();
        cout<<"Enter make type:";
        cin>>make_type;
    }
    void putdata()
    {   bike::putdata();
        cout<<"Make type:"<<make_type<<endl;
    }
};
class bajaj:public bike
{   protected:
    char make_type[10];
    public:
    void getdata()
    {   bike::getdata();
        cout<<"Enter make type:";
        cin>>make_type;
    }
    void putdata()
    {   bike::putdata();
        cout<<"Make type:"<<make_type<<endl;
    }
};
int main()
{   audi a;
    ford f;
    tvs t;
    bajaj b;
    cout<<"Enter details of audi car:"<<endl;
    a.getdata();
    cout<<"Enter details of ford car:"<<endl;
    f.getdata();
    cout<<"Enter details of tvs bike:"<<endl;
    t.getdata();
    cout<<"Enter details of bajaj bike:"<<endl;
    b.getdata();
    cout<<"Details of audi car:"<<endl;
    a.putdata();
    cout<<"Details of ford car:"<<endl;
    f.putdata();
    cout<<"Details of tvs bike:"<<endl;
    t.putdata();
    cout<<"Details of bajaj bike:"<<endl;
    b.putdata();
}