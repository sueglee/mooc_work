#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int n,a,b,c,d;
    cout<<"please enter n which <=100\n";
    cin>>n;
    if(n<=100)
    {
        for(a=2; a<n;a++)
        {
            for(b=2; b<a; b++)
            {
                for(c=b; c<a; c++)
                {
                    for(d=c; d<a; d++)
                    {
                        if(a*a*a==b*b*b+c*c*c+d*d*d)
                        {
                            cout<<"Cube="<<a<<",Triple=("<<b<<","<<c<<","<<d<<")\n";
                        }
                    }
                }
            }
        }
    }
    return 0;
}
