#include <string>
#include <vector>
#include <set>
#include <iostream>
using namespace std;

class Solution {
public:
	string* Morse = new string[26]{".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
	const string Alphabet = "abcdefghijklmnopqrstuvwxyz";
	int uniqueMorseRepresentations(vector<string>& words) {
		set<string> uniqueWords;
		for (int i = 0; i < words.size(); i++)
		{
			string convertedWord;
			for (int j = 0; j < words[i].size(); j++)
			{
				convertedWord += Morse[Alphabet.find(words[i][j])];
			}
			uniqueWords.insert(convertedWord);
		}
		return uniqueWords.size();
	}
};

int main() {

	vector<string> words;
	words.push_back("gin");
	words.push_back("zen");
	words.push_back("gig");
	words.push_back("msg");
	
	Solution s = Solution();
	cout << s.uniqueMorseRepresentations(words);


	return 0;
}