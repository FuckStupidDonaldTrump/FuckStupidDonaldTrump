#include <iostream>
#include "id_verify.h"
#include <stdlib.h>
#include <time.h>    
using namespace std;
int main()
{
    ios::sync_with_stdio;
    cin.tie(0);
	cout.tie(0);
	cout << is_id_ok("F131930100") << endl;
    long long unsigned i=1, n, res=1; 
       // cout << stairlayer(n) << endl;
    srand(time(NULL));
    for (int i = 0; i < 9; ++i)
        printf("Random number: %d\n", rand() % 10);d
    system("pause");
    return 0;
}
