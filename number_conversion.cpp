#include<iostream>
using namespace std;
int reverse(int number)
{
    int reversed_num=0,digit;
    while (number>0)
    {
        digit=number%10;
        number/=10;
        reversed_num=(reversed_num*10)+digit;
    }
    return reversed_num;
}
int dec_to_bin(int decimal_number)
{
    int binary_number,dig;
    binary_number=1;
    while(decimal_number>0)
    {
        dig=decimal_number%2;
        binary_number=(binary_number*10)+dig;
        decimal_number/=2;
    }
    binary_number=(reverse(binary_number))/10;
    return binary_number;
}
int dec_to_oct(int decimal_number)
{
    int octal_number,dig;
    octal_number=1;
    while(decimal_number>0)
    {
        dig=decimal_number%8;
        octal_number=(octal_number*10)+dig;
        decimal_number/=8;
    }
    octal_number=(reverse(octal_number))/10;
    return octal_number;
}
int main()
{
    int decimal_number,binary_number,a;
    cout<<"NUMBER CONVERSIONS";
    cout<<"\n____________________________________________\n";
    cout<<"Decimal to binary\n";
    cout<<"Enter any decimal number : ";
    cin>>decimal_number;
    cout<<dec_to_bin(decimal_number);
    
    cout<<"\nDecimal to binary\n";
    cout<<"Enter any decimal number : ";
    cin>>decimal_number;
    cout<<dec_to_oct(decimal_number);
    
}
