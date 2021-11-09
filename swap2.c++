#include"iostream"
#include"string"
using namespace std;
class sw
{
public : 
int i;
void swa(int x,int y)
{int temp;
   temp=x;
   x=y;
   y=temp;
    cout<<x<<endl<<y<<endl;   
    }  
 void swa(char e,char f)
{char temp;
   temp=e;
   e=f;
   f=temp;
    cout<<e<<endl<<f<<endl;   
    } 
  void swa(char a[10],char b[10])
{
char temp[10];
for(i=0;i<10;i++)
{
temp[i]=a[i];
a[i]=b[i];
b[i]=temp[i];
}
cout<<a<<endl;

cout<<b<<endl; 
 
    }   


};
int main()
{
    int x,y,i;
    char e,f;
    char a[10],b[10];
    sw ob;
    cout<<"enter the integers to be swapped"<<endl;
    cin>>x>>y;
    ob.swa(x,y);#include"iostream"
#include"string"
using namespace std;
class sw
{
public : 
int i;
void swa(int x,int y)
{int temp;
   temp=x;
   x=y;
   y=temp;
    cout<<x<<endl<<y<<endl;   
    }  
 void swa(char e,char f)
{char temp;
   temp=e;
   e=f;
   f=temp;
    cout<<e<<endl<<f<<endl;   
    } 
  void swa(char a[10],char b[10])
{
char temp[10];
for(i=0;i<10;i++)
{
temp[i]=a[i];
a[i]=b[i];
b[i]=temp[i];
}
cout<<a<<endl;

cout<<b<<endl; 
 
    }   


};
int main()
{
    int x,y,i;
    char e,f;
    char a[10],b[10];
    sw ob;
    cout<<"enter the integers to be swapped"<<endl;
    cin>>x>>y;
    ob.swa(x,y);
    cout<<"enter the characters to be swapped"<<endl;
    cin>>e>>f;
    ob.swa(e,f);
    cout<<"enter the arrays to be swapped"<<endl;
    cin>>a>>b;
/*   for(i=0;i<7;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
    cin>>b[i];
    } */
    ob.swa(a,b);
    
    return 0;
}


    cout<<"enter the characters to be swapped"<<endl;
    cin>>e>>f;
    ob.swa(e,f);
    cout<<"enter the arrays to be swapped"<<endl;
    cin>>a>>b;
/*   for(i=0;i<7;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
    cin>>b[i];
    } */
    ob.swa(a,b);
    
    return 0;
}

