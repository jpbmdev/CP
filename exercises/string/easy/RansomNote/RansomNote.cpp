#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

bool solution(string ransomNote, string magazine)
{
    /*
    God tier constant space solution
    int r[26] = {0};
    int m[26] = {0};

    for(auto c : ransomNote)    r[c - 'a']++;
    for(auto c : magazine)      m[c - 'a']++;
    for(int i = 0; i < 26; i++) if(r[i] > m[i]) return false;
    return true;

    get the ascii of a char
    cout << int('a') << endl;
    */
    unordered_map<char, int> umap;
    for (int i = 0; i < magazine.length(); i++)
    {
        umap[magazine[i]]++;
    }

    for (int i = 0; i < ransomNote.length(); i++)
    {
        if (umap[ransomNote[i]] != 0)
        {
            umap[ransomNote[i]]--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << solution("aa", "aba");
}