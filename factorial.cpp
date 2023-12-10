#include <bits/stdc++.h>

using namespace std;


int Factorial(int i){

if(i==1)
    return 1;

return i*Factorial(i-1);
}
int main()
{

int i,j;
cout<<"Enter your Number : ";
cin>>i;
cout<<"Factorial is : "<<Factorial(i)<<endl;


    return 0;
}


