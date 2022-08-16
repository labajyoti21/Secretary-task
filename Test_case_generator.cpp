#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;
  
int main()
{
    int t;
    cin >> t;
    //input the required number of test cases
    srand(time(0));
  
    for (int i = 0; i < t; i++)
        cout << rand()%100 << endl;
  
    return 0;
}