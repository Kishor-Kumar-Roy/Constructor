#include<iostream>
using namespace std;
class factorial{
    private:
    int i,n,fact=1;
    public:
    factorial(int n){
        cout<<"enter a number:  ";
        cin>>n;
        cout<<"Copy constructor is called."<<endl;
        cout<<"Your factoral is =";
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
        cout<<fact<<endl;

    }
      ~factorial(){
        cout<<"Destructor is called."<<endl;
      }
};
int main(){
  
    factorial obj(6);
}