#include <iostream>
#include <limits>

using namespace std;

int main(){
    int val;

    cout << "Enter two values seperated by a space: ";
    while(cin >> val){
        if(cin.good())input.push_back(val);
        if(input.size()>=2)break;
    }
    if(cin.fail()){
        cin.clear();
        cout << "\nERROR: A value was not accepted, try again: ";
        input.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        cin.clear();
    }

    return 0;
}
