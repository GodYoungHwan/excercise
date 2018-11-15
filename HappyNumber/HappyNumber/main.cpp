//
//  main.cpp
//  HappyNumber
//
//  Created by 신영환 on 2018. 11. 15..
//  Copyright © 2018년 신영환. All rights reserved.
//

#include <iostream>

using namespace std;

int sol(int n)
{
    int sum=0;
    while (n != 0) {
        sum += (n%10)*(n%10);
        n /= 10;
    }
    return sum;
}
    
int main(void) {
    int testcase;
    cin >> testcase;
    int ans =0;
    while (testcase--) {
        int n = 0;
        cin >> n;

        ans = sol(n);
//        cout << ans << endl;
        int count =0;
        while(ans != 1)
        {
            count++;
            ans = sol(ans);
            
//            cout << ans << endl;
            if(count ==10)
            {
                cout << "UNHAPPY" <<endl;
                break;
            }
            
        }
        if(ans == 1)
        {
            cout << "HAPPY" << endl;

        }
        
    }
    
}
