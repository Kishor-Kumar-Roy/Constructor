#include<iostream>
using namespace std;
class factorial{

    int i,n,fact=1;
    public:
    factorial(){
        cout<<"enter a number:  ";
        cin>>n;
        // cout<<"Default constructor is called."<<endl;
        // cout<<"Your facorial is:  ";
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
        //cout<<fact<<endl;

    }
    factorial(const factorial &obj){
        cout<<"Copy constructor is called. "<<endl;
        fact=obj.fact;
        cout<<"factorial is="<<fact<<endl;
    }
      ~factorial(){
        cout<<"Destructor is called."<<endl;
      }
};
int main(){
   factorial obj;
   factorial obj2(obj);
   return 0;
}