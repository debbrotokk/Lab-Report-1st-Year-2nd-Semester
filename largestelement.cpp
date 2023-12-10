
#include <bits/stdc++.h>

using namespace std;

int main()
{
int i,j=0;
cout<<"Emter Your Array Size : ";
cin>>i;
j=i;
int k[i];
while(i--){

cin>>k[i];
}

sort(k,k+j,greater<int>());
cout<<"Largest Element is : "<<k[0]<<endl;


    return 0;
}

