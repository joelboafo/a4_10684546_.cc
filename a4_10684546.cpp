#include <iostream>

using namespace std;
  int gcd (int a, int b)
{
 int ans;
 ans=b%a;
 if (ans==0)
    {
        return b; 
    }
  else
   {
    a=b;
    b=ans;
    gcd(b,a);
   }
}
int main()
{
cout<<"Calculation of the GCF of two numbers"<<endl;
int large;
int small;
int result;
cout<<"enter the large number"<<endl;
cin>>large;
cout<<"enter the small number"<<endl;
cin>>small;
result=gcd(large,small);
cout<<result<<endl;

system ("PAUSE");
       return 0;
}