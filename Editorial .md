This problem is to generate all the possible partitions of a given number.
This question is a good example of  a problem involving recursion . Using recursion makes this problem much easier .
We simply remove numbers starting from 1 to n by using a for loop and then set the base case to when the number reaches 0 or negative. 
We use an array to store all the numbers that we remove and then print appropriately when base case n==0.
if after removing any number it comes negative then we dont do anything and the recursion terminates.