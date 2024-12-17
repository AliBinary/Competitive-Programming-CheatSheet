# Competitive Programming C++ Dynamic Programming Cheat Sheet

---

## 1. Fibonacci Sequence (Memoization)

-   Explanation: This algorithm calculates the nth Fibonacci number using memoization to store previously computed results, avoiding redundant calculations.
-   When to Use: When you need to compute Fibonacci numbers for large values of `n` efficiently (i.e., for recursive problems that involve overlapping subproblems).

---

## 2. 0/1 Knapsack Problem

-   Explanation: Given a set of items with weights and values, the goal is to determine the maximum value that can be obtained by putting items in a knapsack without exceeding the weight capacity.
-   When to Use: In optimization problems where you need to maximize profit or value while respecting constraints (e.g., weight, space).

---

## 3. Longest Common Subsequence (LCS)

-   Explanation: This algorithm finds the longest subsequence common to two sequences (strings, arrays, etc.). It uses a dynamic programming table to store intermediate results.
-   When to Use: When comparing two sequences (e.g., DNA sequences, text comparison, diff tools) and need the longest subsequence they share.

---

## 4. Edit Distance (Levenshtein Distance)

-   Explanation: This algorithm calculates the minimum number of operations (insertions, deletions, substitutions) needed to convert one string into another.
-   When to Use: When you need to compare two strings and find the minimum edit operations required (e.g., spell checkers, natural language processing).

---

## 5. Longest Increasing Subsequence (LIS)

-   Explanation: This algorithm finds the length of the longest increasing subsequence in a sequence of numbers. The subsequence need not be contiguous.
-   When to Use: When you need to find the longest increasing subsequence in a sequence of numbers (e.g., stock price prediction, finding trends).

---

## 6. Matrix Chain Multiplication

-   Explanation: This algorithm calculates the most efficient way to multiply a chain of matrices by minimizing the number of scalar multiplications.
-   When to Use: When multiplying multiple matrices and you need to minimize the cost of multiplication (e.g., in computer graphics, optimization problems).

---

## 7. Rod Cutting Problem

-   Explanation: This algorithm finds the maximum profit you can obtain by cutting a rod of length `n` into smaller pieces and selling them, based on the prices for each length.
-   When to Use: When you need to solve problems related to cutting materials into pieces to maximize profit (e.g., resource allocation, profit optimization).

---

## 8. Subset Sum Problem

-   Explanation: This algorithm checks if there is a subset of a given set of numbers that adds up to a target sum. It uses dynamic programming to keep track of achievable sums.
-   When to Use: When you need to check whether a subset exists with a given sum (e.g., partitioning problems, subset analysis).

---

## 9. Egg Dropping Problem

-   Explanation: This algorithm determines the minimum number of attempts required to find the highest floor from which an egg can be dropped without breaking, given `k` eggs and `n` floors.
-   When to Use: In optimization problems where you need to minimize the number of trials in a worst-case scenario (e.g., testing, fault tolerance, hardware).

---

## 10. Partition Problem

-   Explanation: This algorithm checks whether a given set can be partitioned into two subsets such that their sums are equal. It uses dynamic programming to check for subset sums.
-   When to Use: When dividing a set of numbers into two equal subsets (e.g., load balancing, resource allocation).

---

## 11. Longest Palindromic Subsequence (LPS)

-   Explanation: This algorithm finds the longest subsequence within a string that is a palindrome. It uses dynamic programming to build a table based on matching characters.
-   When to Use: When you need to find the longest palindromic subsequence in a string (e.g., text processing, bioinformatics).

---

## 12. Word Break Problem

-   Explanation: This algorithm checks if a string can be segmented into a space-separated sequence of words from a dictionary. It uses dynamic programming to store results for substrings.
-   When to Use: When you need to determine whether a string can be split into valid words (e.g., for tokenizing sentences, text segmentation).
