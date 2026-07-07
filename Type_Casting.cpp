#include<iostream>
using namespace std;
int main(){
    //inplicit type casting
    /*
    char grade='A';
    int value=grade;
    cout<<value<<endl;
    */
   //explicit type casting
    double price=100.98;
    int final_price=(int)price;
    cout<<final_price<<endl;
    return 0;
}