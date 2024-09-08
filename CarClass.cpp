#include<iostream>
using namespace std;

class Car{
    public:
    string name;
    int price;
    int seats;
};
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<endl;
}
int main(){
    Car c1;
    c1.name ="Marsidis";
    c1.price=1000000;
    c1.seats=5;

    Car c2;                                                                      ;
    c2.name ="Suzuki";
    c2.price=2000000;
    c2.seats=5;

    print(c1);
    print(c2);

    return 0;


}
