# stack_and_queue_related_problem
<!-----

Yay, no errors, warnings, or alerts!

Conversion time: 0.656 seconds.


Using this Markdown file:

1. Paste this output into your source file.
2. See the notes and action items below regarding this conversion run.
3. Check the rendered output (headings, lists, code blocks, tables) for proper
   formatting and use a linkchecker before you publish this page.

Conversion notes:

* Docs to Markdown version 1.0β33
* Mon Aug 22 2022 14:18:27 GMT-0700 (PDT)
* Source doc: Untitled document
* Tables are currently converted to HTML tables.
----->



    **<span style="text-decoration:underline;">Module 26.5 Practice Problem Set</span>**



1. Write a program to check for balanced brackets in an expression.. Balanced brackets are the pairs and the orders of “{“, “}”, “(“, “)”, “[“, “]” are correct in the given expression.

    **For example**: [()]{}{[()()]()} is a balanced bracket. 


    	          [({}]) is not a balanced bracket


    You will be given a string, you need to check if the brackets are balanced or not. If they are balanced, print “YES”, otherwise print “NO”.


    **Expected time complexity**: O(N)


<table>
  <tr>
   <td>
<strong>Sample Input</strong>
   </td>
   <td><strong>Sample output</strong>
   </td>
  </tr>
  <tr>
   <td>({(())[{}])
   </td>
   <td>NO
   </td>
  </tr>
  <tr>
   <td>({(())[{}]})
   </td>
   <td>YES
   </td>
  </tr>
</table>



    **Reference**: [https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/](https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression/) 



2. Given N integers, the task is to insert those elements in the queue. Also, given M integers,your task is to find the frequency of each number of M in the Queue.

    **Expected time complexity**: O(N)


<table>
  <tr>
   <td>
<strong>Sample Input</strong>
   </td>
   <td><strong>Sample output</strong>
   </td>
  </tr>
  <tr>
   <td rowspan="2" >8
<p>
1 2 3 4 5 2 3 1
<p>
5
<p>
1 3 2 9 10
   </td>
   <td rowspan="2" >2
<p>
2
<p>
2
<p>
-1
<p>
-1
   </td>
  </tr>
  <tr>
  </tr>
</table>



    **Explanation: **Frequency of 1 is 2. Frequency of 3 is 2. Frequency of 2 is 2. Frequency of 9 is -1 and Frequency of 10 is  -1 (since 9 and 10 are not there in the queue).


    **Reference**: [GFG-Queue Operations](https://practice.geeksforgeeks.org/problems/queue-operations/1?page=2&category[]=Queue&sortBy=submissions) 



3. Write a program to sort a stack of integers. 

    You will be given a size N, and N integer values. You need to insert those values in a stack, and sort that stack and print it.


    **Expected time complexity**: O(N*N)


<table>
  <tr>
   <td>
<strong>Sample Input</strong>
   </td>
   <td><strong>Sample output</strong>
   </td>
  </tr>
  <tr>
   <td>5
<p>
1 8 5 4 2
   </td>
   <td>1 2 4 5 8
   </td>
  </tr>
  <tr>
   <td>8
<p>
5 1 4 7 9 2 5 4
   </td>
   <td>1 2 4 4 5 5 7 9
   </td>
  </tr>
</table>



    **Reference**: [https://www.geeksforgeeks.org/sort-stack-using-temporary-stack/](https://www.geeksforgeeks.org/sort-stack-using-temporary-stack/) 



4. Write a program to reverse a queue of integers. 

    You will be given a size N, and N integer values. You need to insert those values in a queue, and reverse that queue and print it.


    **Expected time complexity**: O(N)


<table>
  <tr>
   <td>
<strong>Sample Input</strong>
   </td>
   <td><strong>Sample output</strong>
   </td>
  </tr>
  <tr>
   <td>5
<p>
5 4 1 3 7
   </td>
   <td>7 3 1 4 5
   </td>
  </tr>
  <tr>
   <td>7
<p>
1 4 5 1 2 7 4
   </td>
   <td>4 7 2 1 5 4 1
   </td>
  </tr>
</table>



    **Reference**: [https://www.geeksforgeeks.org/reversing-a-queue/](https://www.geeksforgeeks.org/reversing-a-queue/) 



5. Given a number N. The task is to generate and print all binary representations of decimal values from 1 to N.

    **Expected time complexity**: O(N*log2(N))


<table>
  <tr>
   <td>
<strong>Sample Input</strong>
   </td>
   <td><strong>Sample output</strong>
   </td>
  </tr>
  <tr>
   <td>2
   </td>
   <td>1 10
   </td>
  </tr>
  <tr>
   <td>5 
   </td>
   <td>1 10 11 100 101
   </td>
  </tr>
</table>



    **Reference**: [https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/](https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1?page=1&difficulty[]=-2&difficulty[]=-1&category[]=Queue&sortBy=submissions)



6. Write a program to reverse the first K elements of a queue.

    You will be given a size N and K. In the next line you will be given N integer values. You need to insert those values in a queue, and reverse the first K elements of that queue and print it.


    **Expected time complexity**: O(N+K)


<table>
  <tr>
   <td>
<strong>Sample Input</strong>
   </td>
   <td><strong>Sample output</strong>
   </td>
  </tr>
  <tr>
   <td>10 5
<p>
10 20 30 40 50 60 70 80 90 100
   </td>
   <td>50 40 30 20 10 60 70 80 90 100
   </td>
  </tr>
  <tr>
   <td>7 4
<p>
1 2 3 4 5 6 7
   </td>
   <td>4 3 2 1 5 6 7
   </td>
  </tr>
</table>



    **Reference**: [https://www.geeksforgeeks.org/reversing-first-k-elements-queue/](https://www.geeksforgeeks.org/reversing-first-k-elements-queue/) 



7. Given a String. Reverse each word in it where the words are separated by dots.

    **Expected Time Complexity:** O(N).


<table>
  <tr>
   <td>
<strong>Sample Input</strong>
   </td>
   <td><strong>Sample output</strong>
   </td>
  </tr>
  <tr>
   <td>i.like.this.program.very.much
   </td>
   <td>i.ekil.siht.margorp.yrev.hcum
   </td>
  </tr>
  <tr>
   <td>pqr.mno
   </td>
   <td>rqp.onm
   </td>
  </tr>
</table>



    **Reference**: [https://practice.geeksforgeeks.org/problems/reverse-each-word-in-a-given-string1001](https://practice.geeksforgeeks.org/problems/reverse-each-word-in-a-given-string1001/1?page=2&category[]=Stack&sortBy=submissions)



8. You are given an array A of size N. You need to first push the elements of the array into a stack and then print the current minimum present in the stack at each pop until the stack becomes empty.

    **Expected Time Complexity:** O(N).


<table>
  <tr>
   <td>
<strong>Sample Input</strong>
   </td>
   <td><strong>Sample output</strong>
   </td>
  </tr>
  <tr>
   <td>5
<p>
1 2 3 4 5
   </td>
   <td>1 1 1 1 1
   </td>
  </tr>
  <tr>
   <td>7
<p>
1 6 43 1 2 0 5
   </td>
   <td>0 0 1 1 1 1 1
   </td>
  </tr>
</table>



    **Explanation 1:**


    After pushing elements to the stack, 


    the stack will be "top -> 5, 4, 3, 2, 1" 


    Now, start popping elements from the stack:


    popping 5: current min in the stack is 1.


    popping 4: current  min in the stack is 1.


    popping 3: current  min in the stack is 1. 


    popping 2: current  min in the stack is 1. 


    popping 1: current  min in the stack is 1. 


    **Explanation 2:**


    After pushing the elements to the stack, 


    the stack will be “top -> 5->0->2->1->43->6->1”


    Now, popping the elements from the stack:


    popping 5: current min in the stack is 0. 


    popping 0: current min in the stack is 0. 


    popping 2: current min in the stack is 1.


    popping 1: current  min in the stack is 1. 


    popping 43: current  min in the stack is 1. 


    popping 6: current  min in the stack is 1. 


    popping 1: current  min in the stack is 1. 


    **Reference**: [https://practice.geeksforgeeks.org/problems/get-min-at-pop](https://practice.geeksforgeeks.org/problems/get-min-at-pop/1?page=2&category[]=Stack&sortBy=submissions)


    **এক্সট্রা কিছু প্রবলেম (এগুলো অপশনাল যারা এক্সট্রা আরো প্রবলেম সল্ভ করতে চাও তাদের জন্য) -**


    [https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/](https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/)


    [https://www.cs.princeton.edu/courses/archive/spr01/cs126/exercises/adt.html](https://www.cs.princeton.edu/courses/archive/spr01/cs126/exercises/adt.html)
