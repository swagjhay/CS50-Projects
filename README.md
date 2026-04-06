# CS50-Projects
Projects completed as part of Harvard CS50 course, focus on problem-solving, algorithms, and programming in C

1. Mario (More & Less)

Programs: mario-more.c and mario-less.c

Overview

These programs print half-pyramids of a user-specified height, inspired by Super Mario.

mario-less.c prints a half-pyramid aligned to the left.
mario-more.c prints a full pyramid with spaces and hashes.
Features
Prompts user for pyramid height (1–8).
Uses loops (for) to construct pyramids.
Validates user input to ensure height is within range.

2. Caesar Cipher

This program encrypts text using the Caesar cipher technique by shifting letters based on a provided key.


Features
Accepts a numeric key as input
Encrypts plaintext by shifting characters
Preserves case and ignores non-alphabetical characters

3.Plurality (plurality.c)
Overview

Simulates a plurality voting system, where voters cast votes for one candidate and the candidate with the most votes wins. Handles ties.

Features
Candidate names via command-line arguments.
Interactive voting with input validation.
Prints winner(s) of the election.

4. Readability
Overview

Analyzes text and calculates its reading grade level using the Coleman-Liau index.

Features
Counts letters, words, and sentences in input text.
Computes grade level for readability.
Prints results in “Grade X” format.

5. Runoff (runoff.c)
Overview

Implements a runoff voting system. Voters rank candidates by preference; the candidate with the least votes is eliminated in rounds until a winner emerges.

Features
Candidate names via command-line arguments.
Allows voter rankings.
Eliminates candidates with the fewest votes in each round.
Handles ties properly.

6. Scrabble (scrabble.c)
Overview

Calculates Scrabble scores for words input by two players and determines the winner.

Features
Assigns point values for each letter.
Accepts case-insensitive word input.
Compares scores of two words to determine winner or tie.
