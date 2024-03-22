#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, gcd, i;
    cout<<"HCF CALCULATOR || BY ARINDAM SAMANTA\n";
    cout<<"Enter the first value:\n";
    cin>>a;
    cout<<"Enter the second value:\n";
    cin>>b;
    for ( i = 1; i <= a; i++)
    {
        if(a%i == 0 && b%i == 0){
            gcd = i;
        }
    }
    cout<<"The HCF of "<<a<<" & "<<b<<" is "<<gcd<<".\n";

    return 0;
}