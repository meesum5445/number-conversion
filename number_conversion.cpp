#include<iostream>
using namespace std;
int reverse(int number)
{
    int reversed_num=0;
    int digit;
    while (number>0)
    {
        digit=number%10;
        reversed_num=(reversed_num*10)+digit;
        number/=10;
    }
    return reversed_num;
}
int dec_to_bin(int decimal)
{
    int decimal2=decimal;
    int len_of_array=0;
    while(decimal2>0)
    {
        decimal2/=2;
        len_of_array++;
    }
    
    int binary[len_of_array]={};
    int i=0;
    while(i<len_of_array)
    {
        binary[i]=decimal%2;
        decimal/=2;
        i++;
    }
    for (int j = len_of_array-1; j >=0 ; j--) 
    {
    cout << binary[j];
    }
    
    return 0;
}
int dec_to_oct(int decimal_number)
{
    int octal_number;
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
    int decimal_number;
    cout<<"NUMBER CONVERSIONS";
    cout<<"\n____________________________________________\n";
    cout<<"Decimal to binary\n";
    cout<<"Enter any decimal number : ";
    cin>>decimal_number;
    dec_to_bin(decimal_number);
    
    cout<<"\nDecimal to binary\n";
    cout<<"Enter any decimal number : ";
    cin>>decimal_number;
    cout<<dec_to_oct(decimal_number);
    
}
