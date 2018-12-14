#include<iostream>
using namespace std;
int main()
{
    int a=0;
    cout<<"=======PROGRAM CONTINUE======="<<endl;
    while(a<=5)
    {
        a++;
        if(a==3)continue;
        cout<< a <<endl;
    }
    return 0;
}
