#include <iostream>
using namespace std;
/*Mohit Rajesh Fulfagar
9067674787*/

int main()  
{  
    //Using For Loop
    cout<<"Using For Loop :"<<endl;
    int i,j,count=1,b=0;
    cout<<"First Ten Prime Numbers Are\n";
    for(i=2;i>0;++i)
    {
    for(j=2;j<=i/2;++j)
    {
    if(i%j==0){
    b=1;
    break;
    }
    }
    if(b==0)
    {
    cout<<"\n"<<i;
    count++;
    }
    b=0;
    if(count==11)
    break;
    }
  
    //While Loop
    cout<<endl<<endl<<"Using While Loop :"<<endl;
    cout<<"First Ten Prime Numbers Are\n";
    int ct=0,n=0,i1=1,j1=1;  
    while(n<10)  
    {  
        j1=1;  
        ct=0;  
        while(j1<=i1)  
        {  
            if(i1%j1==0)  
            ct++;  
            j1++;   
        }  
        if(ct==2)  
        {  
            cout<<i1<<endl;  
            n++;  
        }  
        i1++;  
}  
}  
