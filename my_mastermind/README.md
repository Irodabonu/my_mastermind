# Welcome to My Mastermind

## Task
In this project The player has 10 attempts to find the secret code.
After each input, the game indicates to the player the number of well placed pieces and the number of misplaced pieces.
If the player finds the code, he wins, and the game stops.
A misplaced piece is a piece that is present in the secret code but that is not in a good position.
I had to  read the player's input from the standard input.
That is why I had to make scanf function.Cause of using scanf don't permitted
My program will also receive the following parameters:
-c [CODE]: specifies the secret code. If no code is specified, a random code will be generated.
-t [ATTEMPTS]: specifies the number of attempts; by default, the playerhas 10 attempts.
## Description
In order to make this program, I first had to have a first idea about this game, because this game itself was new to me. 
Then I clarified the conditions of the game and how to implement them with codes. 
I wrote down all the functions used for my program, studied them separately and used them in my code. 
For example, I had to enter the secret code in the terminal with -c myself, or if I didn't enter it, 
I had to generate it using the random function. What happened was that I made a scanf function myself. 
That is, to take the input code and load it into a variable to check whether it is correct and to generate wellplaced misslaced, etc. or 
to determine if it is correct code.
If I enter the secret code through agr -c, I load this code into a variable, and then all the attempts entered during the round are compared with this code. 
contains numbers and checks if the numbers are not repeated,
if it is correct, it outputs misplaced and wellplaced, if it is incorrect, it prints wrong input and rounds until the correct input is found does not transfer to the next one.
If the input is the same as the secret code Congratz! You did it! it is necessary to finish the game, that is  break.
By the way, the game consists of 10 rounds.
In the absence of an incorrectly entered or secret code , the game continues up to 10 rounds and misplaced, wellplaced is printed.
## Installation
it depends on the operating system of your computer, if you have a mac or lunix system you can use the makefile without any installations 
if you are on a windows operating system
to run Makefile on Windows, first, it is required to install the make command line tool. 
To do so, follow the below-listed steps on your Windows system. You  have to successfully install GNU 

## Usage
you can use it by commands "make" then "./my_mastermind" || by commands "gcc my_mastermind.c" then "./a.out";
if you want you can add "-c" and "-t" flags;
Meanings : <
-c [CODE]: specifies the secret code. If no code is specified, a random code will be generated.
-t [ATTEMPTS]: specifies the number of attempts; by default, the playerhas 10 attempts. > 

### Qwasar


<span><i>Made at <a href='https://qwasar.io'>Qwasar Silicon Valley</a></i></span>
<span><img alt='Qwasar Silicon Valley Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
