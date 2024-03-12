#include <iostream>
using namespace std;
int main()
{
    int a[100],num, i, j, tmp;
    cout<<"Enter size of an array: ";
    cin>>num;
    cout<<"Enter elements in an array: ";
    for(i=0; i<num; i++)
    {
        cin>>a[i];
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(a[j]<a[i])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    cout<<"Elements of array in sorted ascending order:"<<endl;
    for(i=0;i<num;i++)
    {
        cout<<a[i]<<" " ;
    }
    return 0;
}
