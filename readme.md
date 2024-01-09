# Code logs

## One liner solutions / Ideas / Approaches

- 300 Longest Increasing Subsequence : 
    Subsequence problem, thus skip/take element approach, we can skip an element only
    when it cannot be included in the current subsequence.
    After that, simple DP and memoization.

- 1235 Maximizing Profit by Job Scheduling :
    DP with binary search after sorting the arrays based on startTime.
    DP from maximizing, binary search to figure out the next possible element in the sequence.

- 446 Arithmetic Slices II - Subsequence :
    DP with maintaining a map to store the length of previous subsequences and their differences and to quickly search if the current element can be added to those subsequences at every i.

- 938 Range Sum of BST :
    Recursive solution, easy algorithm and implementation.

- 872 Leaf-Similar Trees:
    Easy, compile leaf nodes using dfs and compare them.

