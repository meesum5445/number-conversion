#include<iostream>
#include<cmath>  
using namespace std;
long int reverse(long int number)
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
int dec_to_bin(int decimal_number)
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
    cout<<(reverse(binary_number))/10;
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
    cout<<(reverse(octal_number))/10;
    
}
int dec_to_hex(int decimal)
{
    int decimal2=decimal;
    int len_of_array=0;
    while(decimal2>0)
    {
        decimal2/=16;
        len_of_array++;
    }
    
    int binary[len_of_array]={};
    int i=0;
    while(i<len_of_array)
    {
        binary[i]=decimal%16;
        decimal/=16;
        i++;
    }
    for (int j = len_of_array-1; j >=0 ; j--) 
    {
        if (binary[j]>9)
        {
            if (binary[j]==10)
            {
                cout<<"A";
            }
            else if(binary[j]==11)
            {
                cout<<"B";
            }
            else if(binary[j]==12)
            {
                cout<<"C";
            }
            else if(binary[j]==13)
            {
                cout<<"D";
            }
            else if(binary[j]==14)
            {
                cout<<"E";
            }
            else
            {
                cout<<"F";
            }
        }
        else
        {
            cout << binary[j];
        }
    }
    
    return 0;
}
int bin_to_dec(long int binary)
{
    int i=0,decimal=0;
    while(binary>0)
    {
        decimal+=(binary%10)*pow(2,i);
        binary/=10;
        i++;
    }
    cout<<decimal;
    return 0;
}
int oct_to_dec(long int octal)
{
    int i=0,decimal=0;
    while(octal>0)
    {
        decimal+=(octal%10)*pow(8,i);
        octal/=10;
        i++;
    }
    cout<<decimal;
    return 0;
}
int main()
{
    int decimal_number,Octal_number;
    long int binary_number;
    cout<<"NUMBER CONVERSIONS";
    cout<<"\n____________________________________________\n";
    cout<<"Decimal to binary\n";
    cout<<"Enter any decimal number : ";
    cin>>decimal_number;
    dec_to_bin(decimal_number);
    cout<<"\n____________________________________________\n";
    cout<<"\nDecimal to octal\n";
    cout<<"Enter any decimal number : ";
    cin>>decimal_number;
    dec_to_oct(decimal_number);
    cout<<"\n____________________________________________\n";
    cout<<"\nDecimal to hexadecimal\n";
    cout<<"Enter any decimal number : ";
    cin>>decimal_number;
    dec_to_hex(decimal_number);
    cout<<"\n____________________________________________\n";
    cout<<"\nBinary to decimal\n";
    cout<<"Enter any binary number : ";
    cin>>binary_number;
    bin_to_dec(binary_number);
    cout<<"\n____________________________________________\n";
    cout<<"\nOctal to decimal\n";
    cout<<"Enter any Octal number : ";
    cin>>Octal_number;
    oct_to_dec(Octal_number);
}
