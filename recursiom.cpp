#include<iostream>
using namespace std;

int factroial (int n)
{
    if(n==0){
        return 1;
    }
    return n*factroial(n-1);


} 


int main(){

   cout<<factroial(5)<< endl;


    return 0;
}
