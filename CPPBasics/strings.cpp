#include <iostream>

using namespace std;

int main(){
    string str = "tufplus";
    // string str("tufplus") -> you can also initialize a variable with an string!!

    // string is an character array!! means that tufplus is stored in an array!!
    // the size of that array is 7+1!!

    // the +1 is an null which tells the compiler that the string has ended!!

    int length = str.size();
    for(int i = 0; i <= length-1; i++){
        cout << str[i];
    }
    return 0;
}