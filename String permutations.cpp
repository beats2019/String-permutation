#include <iostream>
#include <string>
using namespace std;

void exchange(string, int);
string swap(const string&, int, int);


int main()
{
    string example = "ABCDEFGHIJKLMNOPQ";
    exchange(example, 0);
    return 0;
}


/*
    Prints all the permutations of a given string.
    Note: All the characters of the string must be different, otherwise
    there will be duplicate results

    @param characters String to be exchanged
    @param startPosition Start position of the string to be operated

*/
void exchange(string characters, int startPosition)
{
    int longitudcharacters = characters.length();
    if (startPosition == longitudcharacters - 1) // s is the last character
        cout << characters << endl;
    else
        for (int t = startPosition; t <= (longitudcharacters - 1); t++)
        {
            string temporalString = swap(characters, startPosition, t);
            exchange(temporalString, startPosition + 1);
        }
}

/*
    Swap the values of two given positions of a string

    @param cad The string where the characters will be swaped
    @param pos_a , pos_b String positions to be swaped
*/
string swap(const string& cad, int pos_a, int pos_b)
{
    string resutlString = cad;
    char temp = resutlString[pos_a];
    resutlString[pos_a] = resutlString[pos_b];
    resutlString[pos_b] = temp;
    return resutlString;
}