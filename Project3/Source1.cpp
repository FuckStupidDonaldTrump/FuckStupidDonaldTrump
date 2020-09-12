#include <iostream>
#include "id_verify.h"
using namespace std;
int main()
{
    ios::sync_with_stdio;
    cin.tie(0);
	cout.tie(0);
	cout << is_id_ok("F131930100") << endl;
    long long unsigned i=1, n, res=1; 
    while (cin >> n) 
    {
        cout << stairlayer(n) << endl;
    }
}
