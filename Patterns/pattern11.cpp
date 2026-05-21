// Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int start = 1;
        if( i % 2 == 0){
            start = 0;
        }
        for( int j = 1; j <= i; j++){
            cout << start;
            if(j != i) {
                cout << " ";
            }

            start = !start;
        }
        cout << endl;
    }
}