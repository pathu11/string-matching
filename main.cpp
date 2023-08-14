#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

bool matchPattern(string& text, int posOfText, string& pattern, int posOfPattern) {
	
	//if charatctor of text file is matching to charactor of pattern file
	
    if (posOfPattern== pattern.length()) {
        return true;
    }
    //matching any character in place of the dot(wild card)
    
    if (posOfText < text.length() && (text[posOfText] == pattern[posOfPattern] || pattern[posOfPattern] == '.')) {
        return matchPattern(text, posOfText+ 1, pattern, posOfPattern+ 1);
    }
	
	else if (pattern[posOfPattern] == '^' && posOfText == 0) {
	    return matchPattern(text, posOfText, pattern, posOfPattern + 1);
	}
	//Optional Character ('?') Matching
    else if(posOfPattern+1 <pattern.length() && pattern[posOfPattern+1] =='?'){
    	return matchPattern(text,posOfText,pattern,posOfPattern+2);
    	
	}
	//End of Line ('$') Matching
	else if (posOfPattern < pattern.length() && pattern[posOfPattern] == '$') {
    if (posOfPattern == pattern.length() - 1) {
        return posOfText == text.length();
    } else if (pattern[posOfPattern + 1] == '.') {
        return true;
    }
}

return false;
}

//find pattern using naive string algorithm
void findPattern(string& text, string& pattern, ofstream& outputFile) {
    bool found = false;
    for (int i = 0; i < text.length(); i++) {
        if (matchPattern(text, i, pattern, 0)) {
            found = true;
            outputFile << "Pattern found at position: " << i << endl;
        }
    }
    if (!found) {
        outputFile << "Pattern not found in the text." << endl;
    }
}


int main() {


	int noOfTestFiles;
	cout << "Enter the number of test files: ";
	cin >> noOfTestFiles;
	
	for (int i = 1; i <= noOfTestFiles; i++){
		ifstream textFile("text" +to_string(i) +".txt");
		ifstream patternFile("pattern" +to_string(i) +".txt");
		ofstream outputFile("output" + to_string(i) + ".txt");
		
		// Check if files are successfully opened
		if (!textFile.is_open()) {
        cout << "Error opening text file." << endl;
        return 1;
    }

	    if (!patternFile.is_open()) {
	        cout << "Error opening pattern file." << endl;
	        return 1;
    }
    	string text, pattern;
    	
    	// Read text and pattern from the input file
    	getline(textFile, text);
    	getline(patternFile, pattern);

		findPattern(text, pattern, outputFile);
		
		// Close the input and output files	
		textFile.close();
		patternFile.close();
		outputFile.close();

		    }
	
    return 0;
}

    

