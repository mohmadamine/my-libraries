#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

namespace generation_lib
{

    int random(int from, int To)
    {

        int random = rand() % (To - from + 1) + from;
        return random;
    }

    enum entype_of_symbols
    {
        small_letters = 1,
        capital_letters,
        special_characters,
        digit_numbers
    };

    char random_of_all_symbols(entype_of_symbols symbol)
    {
        switch (symbol)
        {
        case entype_of_symbols::small_letters:
            return char(random(97, 122));
            break;
        case entype_of_symbols::capital_letters:
            return char(random(65, 90));
            break;
        case entype_of_symbols::special_characters:
            return char(random(33, 47));
            break;
        case entype_of_symbols::digit_numbers:
            return random(48, 57);
            break;

        default:
            return '\0';
        }
    }

    string generate_word(entype_of_symbols symbol, short length)
{
    string word = "";
    for (int i = 1; i <= length; i++)
    {
        word = word + generation_lib::random_of_all_symbols(symbol);
    }
    return word;
}
string generate_key()
{
    string key = "";
    key += generate_word(entype_of_symbols::capital_letters, 4) + "-";
    key += generate_word(entype_of_symbols::capital_letters, 4) + "-";
    key += generate_word(entype_of_symbols::capital_letters, 4) + "-";
    key += generate_word(entype_of_symbols::capital_letters, 4);
    return key;
}

}
