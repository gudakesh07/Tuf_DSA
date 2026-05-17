/*
You are given three integers a,b and c,
print which of these integers is the largest.
If two or more integers are equal and are the largest,
the program should indicate that as well.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if(num1 >= num2 && num1 >= num3){
        cout << num1 << " is the largest" << endl;
    } else if(num2 >= num1 && num2 >= num3){
        cout << num2 << " is the largest" << endl;
    }
    else{
        cout << num3 << " is the largest" << endl;
    }
}