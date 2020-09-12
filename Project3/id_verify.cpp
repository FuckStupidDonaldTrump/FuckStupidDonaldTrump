#include<iostream>
#include <sstream>
#include <ctime>
#include <cstdlib>
using namespace std;
int CHAR_TO_ID[] = { 10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33 };
int char_to_int(char const& input)
{
    int tmp = static_cast<int>(input);
    return tmp - static_cast<int>('0');
}
bool is_id_ok(std::string const& id)
{
    if (sizeof(CHAR_TO_ID) / sizeof(int) != 26)
    {
        cout << "TABLE failed!!!" << endl;
        return false;
    }
    unsigned long long a = 0, b, c, happy = 0, sad = 0, angry = 0;
    char s, n;
    s = id[0];
    n = id[1];
    if (s >= 'A' && s <= 'Z')
    {
        if (n == '1' || n == '2')
        {
            a = CHAR_TO_ID[s - 'A'];
            b = a / 10;
            c = a % 10;
            for (int i = 1, j = 8; i <= 8, j >= 1; ++i, --j)
                happy += char_to_int(id[i]) * j;
            sad = (b + c * 9 + happy) % 10; 
            if (10 - sad == char_to_int(id[9]))
                angry = 1;
            else if (sad == 0 && char_to_int(id[9] == 0))
                angry = 1;
            if (angry == 1)
                cout << "GOOD!!!!" << endl;
            else cout << "Bad!!!" << endl;
        }
    }
    return false;
}
