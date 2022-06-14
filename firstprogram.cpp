//Word Counter in C++:
//first program
#include <iostream>
using namespace std;
int main()
{
    char str[1000];
    int count = 0, i;
    cout << "Enter a string : ";
    gets(str);
    for (i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ')
            count++;
    }
    cout << "Number of words in the string are: " << count + 1; //coz of no space after last word
    return 0;
}
