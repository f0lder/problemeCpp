#include <iostream>
using namespace std;

bool has_suffix(char word[], char suffix[])
{
    int suffix_length = strlen(suffix);
    int word_length = strlen(word);
    if (suffix_length > word_length)
    {
        return false;
    }
    for (int i = 0; i < suffix_length; i++)
    {
        if (word[word_length - suffix_length + i] != suffix[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    char **s;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }

    char suf[20] = "";

    strcpy(suf, s[1]);

    for (int i = 1; i <= n; i++)
    {
        if (has_suffix(s[i], suf))
        {
            cout << s[i] << " ";
        }
    }
    return 0;
}
//neterminat