//
//  main.cpp
//  farm
//
//  Created by 신영환 on 2018. 11. 5..
//  Copyright © 2018년 신영환. All rights reserved.
//

#include <iostream>

using namespace std;


int main(void) {
    
    int t;
    cin >>t;
    while (t--) {
        int a,b,n,w,x,y,answer_number=0;
    cin >>a>>b>>n>>w;
    int answer_x=0,answer_y =0;
    for(x=1; x<=1000;x++)
    {
        y=n-x;
        if(y<=0) break;
        if(a*x+b*y==w)
            {
                answer_number++;
                answer_x=x;
                answer_y=y;
            }

    }
    
    if(answer_number == 1) cout <<answer_x<<" " <<answer_y <<endl;
    else cout << -1 <<endl;
    }
    return 0;
    
}
