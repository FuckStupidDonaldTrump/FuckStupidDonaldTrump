#pragma once
//階乘 計算
///產生N組自動生成的id,  verify它
/// 寫一個學生 的 struct ,  裏頭 id 由 id_gen
///  name, id, age, se
////寫一個班級的struct 支援可以加入學生到這個struct
/// void PrintAllStudent();
/// 
/// 

#include <string>
#include<iostream>

int char_to_int(char const& input);
bool is_id_ok(std::string const& id);

int stairlayer(int n)
{
    int i, res;
    if (n == 0)
        return 0;
    i = 1;
    res = 1;
    while (i <= n)
    {
        res *= i;
        ++i;
    }
    return res;
}