#include <iostream>
#include <limits>

using namespace std;

int main(){
    int val, sum = 0;

    cout << "Enter a list of integers seperated by spaces: ";

    int* num = new int;

    while(true){
        while(cin >> val){
            if(cin.good()){
                *num = val;
                sum+=*num;
            }
            if(cin.peek() == '\n'){
                cout << "\nEnter more values or type a string to end input: ";
            }
        }
        if(cin.fail()){
            cin.clear();
            cout << "\nERROR: A value was not a number, ending...";
            break;
            cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            cin.clear();
        }
    }

    delete num;

    cout << "\n\nThe sum of all the inputs is " << sum << ".";

    return 0;
}