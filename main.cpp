#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int p,e,i,d,k=21252;
    cin>>p>>e>>i>>d;
    for(k=d+1; k<21252+1; k++)
    {
        if((k-p)%23==0)
        {
            for(; k<21252+1; k+=23)
            {
                if((k-e)%28==0)
                {
                    for(; k<21252+1; k+=23*28)
                    {
                        if((k-i)%33==0)
                        {
                            cout<<k-d;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
/*
int p,e,i,d,caseno = 0;
while(cin>>p>>e>>i>>d&&p!=-1)
{
    ++caseno;
    int k;
    for(k = d+1; (k-d)%23; ++k);
    for(; (k-e)%28; K+=23);
    for(; (k-i)%33; K+=23*28);
    cout<<k-d;
}*/