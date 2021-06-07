#include<iostream>
using namespace std;
int main(){
    int n ; 
    cin >> n ;
    int ori= n ;
    int number = 0 ;
    int temp;
    while (n> 0 ){
        temp = n %10 ;
        number = number+  temp*temp*temp ; 
        n = n /10;
    }
    cout<< "number is "<< number ;
    if ( ori == number ){
        cout <<" ARMSTRONG"<< endl ;

    }
    else {
        cout << " NOT ARMSTRONG"<<endl;
    }
}