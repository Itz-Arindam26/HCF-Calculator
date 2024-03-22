#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, gcd, i;
    cout<<"HCF CALCULATOR || BY ARINDAM SAMANTA\n";
    cout<<"Enter the first value:\n";
    cin>>a;
    cout<<"Enter the second value:\n";
    cin>>b;
    cout<<"Enter the third value:\n";
    cin>>c;
    for ( i = 1; i <= a; i++)
    {
        if(a%i == 0 && b%i == 0 && c%i == 0){
            gcd = i;
        }
    }
    cout<<"The HCF of "<<a<<", "<<b<<" & "<<c<<" is "<<gcd<<".\n";

    return 0;
}