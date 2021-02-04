#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int d,a,FacA;

    cout<<"podaj liczbe przypadkow: \n";
    cin>>d;

    for(int i=0;i<d;i++)
    {
        cin>>a;
        FacA=1;
        for(int j=1;j<=a;j++)
        {
            FacA*=j;
        }

        cout<<FacA/10<<" "<<FacA%10<<endl;
    }
}
