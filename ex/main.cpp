#include "iostream"

using namespace std;
void cinsert(int data[], int size, int value)
{
    if (size == 0)
        data[size] = value;
    else
    {
        if (data[size-1] < value)
            data[size] = value;
        else
        {
            data[size] = data[size-1];
            cinsert(data, size-1, value);
        }
    }
}

int main(void)
{
    int data[10] = {1,3,4,2,6,5,7,0,9,8};
    
    for(int i = 0; i<10; i++)
    {
        cout << data[i];
    }
    
    cout << endl;
    
    cinsert(data , 10 , 4);
    
    for(int i = 0; i<10; i++)
    {
        cout << data[i];
    }
    
    
}

