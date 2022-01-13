<h1 align =center> DailyCoding_HashClub </h1>

<img align=right width=250px src="https://user-images.githubusercontent.com/91421427/148388054-65a9a123-a20f-43a3-aa1d-5f461b92d651.png"/>
<br/><br/><br/><br/>

###  About I2IT Hash Club
The Hash Club is a special interest group initiated under ACM Student Chapter I²IT lead by a group of enthusiastic and motivated coders with an aim to bring fun in learning DSA.🙌🏻

<h3 style="text-decoration: none;">Hash Club I2IT Website: https://varshitha1707.github.io/the-hash-club/ </h3>
<hr/>

###  Coding Platform - <a href="https://leetcode.com/777ahesh/"><img src="https://img.shields.io/badge/-LeetCode-FFA116?style=for-the-badge&logo=LeetCode&logoColor=black&style=flat-square"/></a>

#### Day-1

####  Problem Link: https://leetcode.com/problems/minimum-index-sum-of-two-lists/
##### Solution:
<pre>Using a unordered_map to store the first list. 
1)So, as the unordered_map contains (string, int) as the 
parameters we can store the name as well as the index in the 
unordered_map.
2) Then, iterate over the another list and check if any value( name )
that is present in list 2 and if it is there check the sum of the index
is minimum or not and display the name with minimum sum of index. 
</pre> 

#### Day-2

####  Problem Link: https://leetcode.com/problems/find-the-town-judge/
##### Solution:
<pre>1. The town judge trusts nobody.
2. Everybody (except for the town judge) trusts the town judge.
3. There is exactly one person(Town Judge) that satisfies properties 1 and 2.
So, as a nested vector is given with its each inner vector of size 2.
We can simply iterate over the outer vector and using indexing check the trust of everybody in the town.
And hence return the town judge if present else -1
</pre> 

#### Day-3

####  Problem Link: https://leetcode.com/problems/unique-email-addresses/
##### Solution:
<pre>1. Local name and Domain name is seperated by '@'
2. If there is a period '.' in local name it would be ignored.
3. If there is a plus '+' in the local name the further local name should not be considered.

So, Create a function for the above validation. loop over the characters in the string till
the '@' or '+' is reached and store it in temporary string.
Ignore the '.' using if condition and at the end return 
the appended temporary string with @ and the remaning Original string (email).
I have used an unordered_set so that no duplicate values are stored.
</pre> 

#### Day-4

####  Problem Link: https://leetcode.com/problems/maximum-subarray/

<pre>Simply initiale the First element of the vector(array) to currSum, maxSum.
And then just iterate over array and return the sum of the subarray which gives maximum sum
using max function.
</pre> 

#### Day-5

####  Problem Link: https://leetcode.com/problems/shuffle-string/

<pre>1. Create a new string and initialize to the given string.
2. In this new string(duplicate) just try to reinitialize according t0 ordered indices.
For this iterate over the size of the given indices vector and use the below to reinitialize
the string characters 
        Resultant_string[indices[i]] = Original_String[i]
</pre>

#### Day-6

####  Problem Link: https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/

<pre>1. Concatenate all the characters in the given strings one and  two and store it in two
different temporary string.
2. Check for the equivalence and return the boolean value.
</pre> 

#### Day-7

####  Problem Link: https://leetcode.com/problems/trapping-rain-water/

<pre>1. Create two arrays for storing maximum height from left and right
2. And the answer for whether the particular block can store water can be calculated using 
the formula minimum of(leftMax[At_that_index],rightMax[At_that index]) - heights[At_that_index].
3. Sum up all the blocks using a loop and the above formula and return the answer
</pre> 

#### Day-8

####  Problem Link: https://leetcode.com/problems/intersection-of-two-arrays/

<pre>Create Hastable for the given vectors and and simply 
compare the hash values of the two hash tables and the
common values.
</pre>

#### Day-9

####  Problem Link: https://leetcode.com/problems/binary-search/

<pre>Binary Search Algorithm:
1. Compare x with the middle element.
2. If x matches with the middle element, we return the mid index.
3. Else If x is greater than the mid element, then x can only lie in the right half subarray after the mid element. So we recur for the right half.
4. Else (x is smaller) recur for the left half.
</pre> 
