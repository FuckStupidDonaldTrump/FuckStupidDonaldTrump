#pragma once
//���� �p��
///����N�զ۰ʥͦ���id,  verify��
/// �g�@�Ӿǥ� �� struct ,  ���Y id �� id_gen
///  name, id, age, se
////�g�@�ӯZ�Ū�struct �䴩�i�H�[�J�ǥͨ�o��struct
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