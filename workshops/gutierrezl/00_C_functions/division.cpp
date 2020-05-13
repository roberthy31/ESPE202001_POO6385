//GUTIERREZ LIMBER fUNCION-CALCULO
#include<stdlib.h>
#include<iostream>
#include<fstream>

using namespace std;

float compute_division(float number1, float number2);
float limit_division(float number2);


int main(){
float number1,number2;
cout<<"THE DIVISION"<<endl;
cout<<endl;
cout<<"Enter the numerator "<<endl;
cin>>number1;
cout<<"Enter the denominator "<<endl;
cin>>number2;
compute_division(number1,number2);


return 0;
}

float compute_division(float number1, float number2){
    float division_two_number;
    division_two_number=(number1/number2);
    limit_division(number2);
    cout<<"The division is: "<<division_two_number;


    return division_two_number;
}

float limit_division(float number2){
    if(number2==0){
        cout<<"there is not division for 0"<<endl;
    }
}
