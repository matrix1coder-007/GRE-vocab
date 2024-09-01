// 1.cpp
#include <iostream>

using namespace std;
int gcd(int a,int b){
    if(a==0)return b;
    if(b==1)return 1;

    return gcd(b,a%b);
}

int main()
{
    cout<<gcd(25,10);
    return 0;
}
