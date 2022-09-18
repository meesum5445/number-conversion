#include<iostream>
using namespace std;
int reverse(int number)
{
    int reversed_num=0,digit;
    digit=number%10;
    number/=10;
    reversed_num=(reversed_num*10)+digit;
    return reversed_num;
}
int dec_to_bin(int decimal_number)
{
    int binary_number,dig;
    binary_number=1;
    while(decimal_number>0)
    {
        dig=decimal_number%2;
        decimal_number/2;
        binary_number=(binary_number*10)+dig;
    }
    cout<<"HELLO WORLD";
    return binary_number;
}
int main()
{
    int decimal_number,binary_number,a;
    cout<<"NUMBER CONVERSIONS";
    cout<<"\n____________________________________________\n";
    cout<<"Decimal to binary\n";
    cout<<"Enter any decimal number : ";
    decimal_number=55;
    binary_number=dec_to_bin(55);
    cout<<binary_number;
    
}