#pragma once
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <cctype>
#include <locale>
#include <codecvt>
class Scrambler
{
    int kluch; // кол-во столбцов 
public:
    Scrambler()=delete; // запрет конструктора без параметров
    Scrambler(const int& key) :kluch(key) {}; 
    std::wstring encrypt(const std::wstring& open_text); // зашифрование
    std::wstring decrypt(const std::wstring& cipher_text); // расшифрование
};