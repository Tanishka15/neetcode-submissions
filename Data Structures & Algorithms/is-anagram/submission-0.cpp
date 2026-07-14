class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) //Anagrams must contain exactly the same number of characters.
            return false;

        int freq[26] = {0}; //Create an array of size 26.

        for (int i = 0; i < s.length(); i++) { //Traverse both strings together.
            freq[s[i] - 'a']++; //Increase the frequency of char "a-z"
            freq[t[i] - 'a']--; //Decrease the frequency of char "a-z"
        }

        for (int count : freq) { //This is a range-based for loop. for(int i=0;i<26;i++)
            if (count != 0)
            //If even one frequency is not zero. 
            //then one character appeared more times in one string than the other
                return false;
                //then one character appeared more times in one string than the other.
        }

        return true;
        //If every frequency is zero, 
        //both strings contain exactly the same letters with exactly the same frequency.
        //Hence, they are anagrams.
    }
};