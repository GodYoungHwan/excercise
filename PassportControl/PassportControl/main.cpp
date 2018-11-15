#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(void) {
    ifstream inStream;
    int numTestCases;
    
    if (inStream.fail()) {
        cerr << "Input file opening failed.\n";
        exit(1);
    }
    
    inStream >> numTestCases;
    
    for (int i = 0; i < numTestCases; i++) {
        int N, k, num;
        //입국 승객의 수, 여권 심사 창구의 수, 승객
        
        inStream >> N >> k;
        if(inStream.peek()==EOF)break;
        
        int enterance[101] = { 0, };   // 여권 심사 창구
        int chk = 0;   // check가 -1이면 통과 못함
        
        for (int j = 1; j <= N; j++) {
            inStream >> num; // 나가는 사람 순서 값 받음
    
            int m = 1;

            while (m <= k) {
                if (enterance[m] < num) {
                    enterance[m] = num;
                    break;
                }
                else m++;
            }
            if (m > k) chk = -1;
        }
        
        if (chk == -1) cout << "NO" << endl;
        else cout << "YES" << endl;
        
    }
    
    inStream.close();
}
