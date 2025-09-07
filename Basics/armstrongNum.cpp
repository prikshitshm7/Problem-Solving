#include <bits/stdc++.h> 
bool isArmstrong(int num) {
    // Write your code here
    int copy =num;
    int digits = log10(num) + 1;
    int ans =0;
    while(num>0){
        int lastNum = num % 10;
        ans += pow(lastNum,digits);
        num = num/10;
    }
    if(ans!=copy){
        return false;
    }
    return true;
}
