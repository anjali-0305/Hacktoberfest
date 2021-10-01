#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[20],i,j,temp,ele,flag=0,pos;
    cout<<"Enter the number of elements:";
    cin>>n;
    
    cout<<"\nEnter your Elements:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<"Enter the element you want to search:";
    cin>>ele;

    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            flag=1;
            pos=i;
            break;
        }
    }
    
    if(flag==1)
        cout<<"Congratulations!! Element"<<ele<<"is found at "<<pos<<"th position...";
    else
       cout<<"Oops!! Element "<<ele<<" is not found";
        
return 0;
}



