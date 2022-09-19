#include<iostream>
using namespace std;
int reverse(long int number)
{
    long int reversed_num=0;
    int digit;
    while (number>0)
    {
        digit=number%10;
        reversed_num=(reversed_num*10)+digit;
        number/=10;
    }
    return reversed_num;
}
int dec_to_bin(long int decimal_number)
{
    long int binary_number;
    int dig;
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
int dec_to_oct(long int decimal_number)
{
    long octal_number;
    int dig;
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
    long int decimal_number;
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
