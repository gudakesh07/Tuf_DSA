// Given an age,
// if age >= 18,print "adult"
// if age < 18 and age >=10 print "Teen"
// else print child

#include <bits/stdc++.h>

using namespace std;

int main(){
    int age;
    cin >> age;
    if(age >= 18){
        cout << "adult" << endl;
    }
    else if(age < 18 && age >= 10){
        cout << "Teen";
    }
    else{
        cout << "Child";
    }
    return 0;
}