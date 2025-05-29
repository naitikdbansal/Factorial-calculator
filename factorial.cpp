#include <iostream>
using namespace std;

int main(){

long long a;
long long b=1;

cout<<"Enter number : ";
cin>>a;

for( int i = 1 ; i<=a ; i++){

b*=i;

}

cout<<"Your factorial is : "<<b<<endl;
return 0;

}