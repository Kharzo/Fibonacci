#include <iostream>
#include <unordered_map>
#include <iterator>

using namespace std;

unordered_map<int, long int> fibSequence;
unordered_map<int,long int>::iterator iter;

int fib(int n){
    iter = fibSequence.find(n);
    if(iter != fibSequence.end()){return iter->second;}
    if(n <= 2){return 1;}
    
    fibSequence[n] = fib(n-1) + fib(n-2);
    iter = fibSequence.find(n);
    
    return iter->second;
}

int main(){


    int n;
    bool keepRunning = true;

    do{

    
        cout << "Enter an index in the fibonnaci squence: ";
        cin >> n;

        if(n <= 0){keepRunning = false;}
        else{
            cout << "The number at position " << n << " is " << fib(n) << endl;
        }

    
    }while (keepRunning);

    return 0;
}