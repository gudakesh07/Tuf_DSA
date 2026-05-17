#include <bits/stdc++.h>
using namespace std;

int explainpassbyvaluenadreference(int &x){
    x = x + 10;
    return x;
}

int main(){
    int num = 5;
    explainpassbyvaluenadreference(num);
    cout << num;
    return 0;
}