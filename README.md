01.Problem: Stupid Passwords Generator
Write a program that enters two integers n and l and generates in alphabetical order all possible
"stupid" passwords that consist of the following 5 characters:
• Character 1: digit from 1 to n.
• Character 2: digit from 1 to n.
• Character 3: small letter among the first l letters of the Latin alphabet.
• Character 4: small letter among the first l letters of the Latin alphabet.
• Character 5: digit from 1 to n, bigger than first 2 digits.
Sample Input and Output
Input Output 
2
4
      11aa2 11ab2 11ac2 11ad2 11ba2 11bb2 11bc2 11bd2 
      11ca2 11cb2 11cc2 11cd2 11da2 11db2 11dc2 11dd2
Input Output 
3
1
      11aa2 11aa3 12aa3 
      21aa3 22aa3
      Input Output 
4
2
      11aa2 11aa3 11aa4 11ab2 11ab3 11ab4 11ba2 11ba3 
      11ba4 11bb2 11bb3 11bb4 12aa3 12aa4 12ab3 12ab4 
      12ba3 12ba4 12bb3 12bb4 13aa4 13ab4 13ba4 13bb4 
      21aa3 21aa4 21ab3 21ab4 21ba3 21ba4 21bb3 21bb4 
      22aa3 22aa4 22ab3 22ab4 22ba3 22ba4 22bb3 22bb4 
      23aa4 23ab4 23ba4 23bb4 31aa4 31ab4 31ba4 31bb4 
      32aa4 32ab4 32ba4 32bb4 33aa4 33ab4 33ba4 33bb4
Input Output 
3
2
      11aa2 11aa3 11ab2 
      11ab3 11ba2 11ba3 
      11bb2 11bb3 12aa3 
      12ab3 12ba3 12bb3 
      21aa3 21ab3 21ba3 
      21bb3 22aa3 22ab3 
      22ba3 22bb3
Input Data
The input is read from the console and consists of two integers: n and l within the range [1 … 9].
Output Data
Print on the console all "stupid" passwords in alphabetical order, separated by space.
Hints and Guidelines
We can split the solution of the problem into 3 parts:
• Reading the input – in the current problem this includes reading two numbers n and l, each on 
a single line.
• Processing the input data – using of nested loops to iterate through every possible symbol for 
each of the five password symbols.
• Printing the output – printing every "stupid" password that meets the requirements.
