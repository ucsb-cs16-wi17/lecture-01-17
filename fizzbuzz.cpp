//fizzbuzz.cpp
//Author: Diba Mirza
//Created: 01-17
//Program to implement fizzbuzz, inputs given to executable 
//

#include <iostream>
#include <string>
#include <cstdlib>

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

    if(argc !=2){
        cerr<<"Usage : "<<argv[0]<< " <number>"<<endl;
        exit(2); //Failed 
    }
    fizzbuzz(stoi(argv[1]));
    return 0;
}

