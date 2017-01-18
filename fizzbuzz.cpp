//fizzbuzz.cpp
//Author: Diba Mirza
//Created: 01-17
//Program to implement fizzbuzz, inputs given to executable 
//

#include <iostream>
#include <string>

using namespace std;

void fizzbuzz(int n){
    if(n%3==0 && n%5 == 0)
        cout<<"Fizzbuzz\n";
    else if(n%3 == 0 )
        cout<<"Fizz"<<endl;
    else if(n%5 ==0)
        cout<<"Buzz"<<endl;
    else
        cout<<n<<endl;
}


int main(int argc, char * argv[]){
    cout<<"Number of arguments to main :"<<argc<<endl;
    for(int x=0;x<argc;x++)
        cout<<"argv :"<< x<< " " <<argv[x]<<endl;

    fizzbuzz(stoi(argv[1]));
    return 0;
}

