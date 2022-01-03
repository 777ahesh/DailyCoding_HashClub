<h1 align =center> DailyCoding_HashClub </h1>

#### Day-1

####  Problem Link: https://leetcode.com/problems/find-the-town-judge/
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
