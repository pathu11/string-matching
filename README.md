Pattern Matching Program 

This program is designed to perform pattern matching using a naive string algorithm. It matches 
a given pattern against a text file and produces an output file indicating the positions where the 
pattern is found in the text. The program is written in C++.
Contents:
    1. Compilable Source Files
    2. How to Run the Program
    3. Test Data and Instructions
    4. Example Test Run
1. Compilable Source Files:
    ▪ main.cpp: The main source file containing the pattern matching algorithm and file 
    operations.
    ▪ text i.txt (i=1,2, 3...) : A sample text file for testing purposes.
    ▪ pattern i.txt (i=1,2, 3...) : A sample pattern file for testing purposes.
    ▪ output i.txt (i=1,2, 3...) : Output file for the above test case.
2. How to Run the Program:
    ▪ Ensure you have a C++ compiler installed (e.g., g++).
    ▪ Open a terminal/command prompt and navigate to the directory containing the source 
    files.
    ▪ Compile the program: g++ main.cpp -o pattern_matching OR g++ main.cpp
    ▪ Run the program: .\pattern_matching OR a.exe(Default output )
    ▪ Follow the prompts to input the number of test files and provide the necessary input 
    files.
     
3. Test Data and Instructions:
    ▪ Place your test text and pattern files in the same directory as the source files.
    ▪ Naming convention: patternX.txt (e.g., pattern1.txt), textX.txt (e.g., text1.txt).
    ▪ Run the program as described in the "How to Run the Program" section.
    ▪ The program will generate outputX.txt files containing the pattern matching results.
4.Example Test Run:
    1. Compile the program: g++ -std=c++11 main.cpp -o pattern_matching
    2. Run the program: ./pattern_matching
    3. Enter the number of test files: 1
    4. Input text from text1.txt and pattern from pattern1.txt.
    5. Check the output1.txt file for pattern matching results.
