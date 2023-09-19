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

02.Problem: Magic Numbers
Write a program that enters a single integer magic number and produces all possible 6-digit numbers
for which the product of their digits is equal to the magical number.
Example: "Magic number" → 2
• 111112 → 1 * 1 * 1 * 1 * 1 * 2 = 2
• 111121 → 1 * 1 * 1 * 1 * 2 * 1 = 2
• 111211 → 1 * 1 * 1 * 2 * 1 * 1 = 2
• 112111 → 1 * 1 * 2 * 1 * 1 * 1 = 2
• 121111 → 1 * 2 * 1 * 1 * 1 * 1 = 2
• 211111 → 2 * 1 * 1 * 1 * 1 * 1 = 2
Input Data
The input is read from the console and consists of one integer within the range [1 … 600 000].
Output Data
Print on the console all magic numbers, separated by space.
Sample Input and Output
Input 2 
Output 111112 111121 111211 112111 121111 211111

Input 8
Output 
111118 111124 111142 111181 111214 111222 111241 111412 111421 111811 
112114 112122 112141 112212 112221 112411 114112 114121 114211 118111 
121114 121122 121141 121212 121221 121411 122112 122121 122211 124111 
141112 141121 141211 142111 181111 211114 211122 211141 211212 211221 
211411 212112 212121 212211 214111 221112 221121 221211 222111 241111 
411112 411121 411211 412111 421111 811111

Input 531441
Output 999999

03.Problem: Stop Number
Write a program that prints on the console all numbers from N to M, that are divisible by 2 and 3 
without reminder, in reversed order. We will read one more "stop" number from the console – S. If 
any of the numbers divisible by 2 and 3 is equal to the stop number, it should not be printed, and the 
program should end. Otherwise print all numbers up to N, that meet the condition.
Input Data
Read from the console 3 numbers, each on a single line:
• N – integer number: 0 ≤ N < M.
• M – integer number: N < M ≤ 10000.
• S – integer number: N ≤ S ≤ M.
Output Data
Print on the console on a single line all numbers, that meet the condition, separated by space.
Sample Input and Output
Input Output          Comments 
1     30 24 18 12 6   Numbers from 30 to 1, that are divisible at the same time by 2 and 
30                    without reminder are: 30, 24, 18, 12 and 6. The number 15 is not 
15                    equal to any, so the sequence continues.

Input Output           Comments 
1     36 30 24 18      Numbers from 36 to 1, that are divisible at the same time by 2 and 3 
36                     without reminder are: 36, 30, 24, 18, 12 and 6. The number 12 is 
12                     equal to the stop number, so we stop by 18.
Hints and Guidelines
The problem can be divided into four logical parts:
• Reading the input.
• Checking all numbers in the given range, and then running a loop.
• Checking the conditions of the problem according to every number in the given range.
• Printing the numbers.
First part is ordinary – we read three integer numbers from the console, so we will use int.
We have already seen examples of the second part – initialization of the for loop. It is a bit tricky –
the explanation mentions that the numbers have to be printed in reversed order. This means that the
initial value of the variable i will be bigger, and from the examples we can see that it is M. Thus, the
final value of i should be N. The fact that we will print the results in reversed order and the values of
i, suggests that the step would be decreased by 1.
for (int i = m; i >= n; i--)
After we have initialized the for loop, it is time for the third part of the problem – checking the 
condition if the given number is divisible both by 2 and 3 without reminder. We will do this using one 
simple if condition that we will leave to the reader to do by themselves.
Another tricky part of this problem is that apart from the above check we need to do another one –
whether the number is equal to the "stop" number entered from the console on the third line. To do 
this check, the previous one has to be passed. For this reason, we will add another if statement that 
we will nest in the previous one. If the condition is true, we need to stop the program from printing. 
We can do this using a break operator, and it will lead us out of the for loop.
If the condition that checks whether the number is equal with "stop" number returns a false result, 
our program should continue to print. This covers the fourth and last part of our program.

04.Problem: Special Numbers
Write a program that reads one integer number N and generates all possible special numbers from
1111 to 9999. To be considered special, a number must correspond to the following condition:
• N to be divisible by each of its digits without reminder.
Example: upon N = 16, 2418 is a special number:
• 16 / 2 = 8 without reminder
• 16 / 4 = 4 without reminder
• 16 / 1 = 16 without reminder
• 16 / 8 = 2 without reminder
Input Data
The input is read from the console and consists of one integer within the range [1 … 600 000].
Output Data
Print on the console all special numbers, separated by space.
Sample Input and Output
Input  Output                                       Comments 
3                                                   3 / 1 = 3 without reminder
      1111 1113 1131 1133 1311 1313 1331 1333 3111  3 / 3 = 1 without reminder
      3113 3131 3133 3311 3313 3331 3333            3 / 3 = 1 without reminder

Hints and Guidelines
Solve the problem by yourself using what you learned from the previous two problems. Keep in mind 
the difference between operators for integer division / and division with reminder % in C++.
.
05.Problem: Digits
Write a program that reads from the console an integer within the range [100 … 999], and then prints 
it a predefined number of times – modifying it before each print, as follows:
• If the number is divisible by 5 without reminder, subtract from it its first digit.
• If the number is divisible by 3 without reminder, subtract from it its second digit
• If none of the above-mentioned conditions is valid, add to it its third digit.
Print on the console N lines, and each line has M numbers, that are result of the above actions.
• N = sum of the first and second digit of the number.
• M = sum of the first and third digit of the number.
Input Data
The input is read from the console and is an integer within the range [100 … 999].
Output Data
Print on the console all integer numbers, result of the above-mentioned calculations in the respective 
number of rows and columns as in the examples.
Sample Input and Output
Input Output                                Comments 
376                                         10 lines with 9 numbers in each
      382 388 394 400 397 403 409 415 412   Input number 376 → neither 5, 
      418 424 430 427 433 439 445 442 448   nor 3 → 376 + 6 → = 382 → neither 5, 
      454 460 457 463 469 475 472 478 484   nor 3 → 382 + 6 = 388 + 6 = 394 + 6 =
      490 487 493 499 505 502 508 514 520   400 → division by 5 → 400 - 3 = 397
      517 523 529 535 532 538 544 550 547
      553 559 565 562 568 574 580 577 583
      589 595 592 598 604 610 607 613 619
      625 622 628 634 640 637 643 649 655
      652 658 664 670 667 673 679 685 682
      688 694 700 697 703 709 715 712 718
Input Output       Comments 
132                (1 + 3) = 4 and (1 + 2) = 3 → 4 lines with 3 numbers in each
      129 126 123  Input number 132 → division by 3 → 132 - 3 =
      120 119 121  = 129 → division by 3 → 129 - 3 = 
      123 120 119  = 126 → division by 3 → 126 - 3 = 
      121 123 120  = 123 → division by 3 → 123 - 3 =
                   = 120 → division by 5 → 120 - 1 = 
                   ..... 121 → neither by 5, nor 3 → 121 + 2 = 123
Hints and Guidelines
Solve the problem by yourself, using what you learned from the previous ones. Remember that you 
will need to define different variables for each digit of the input number.


