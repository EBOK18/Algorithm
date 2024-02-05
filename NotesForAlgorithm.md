# NOTES FOR ALGORITHM
-----

I created this so I can review any parts of algorithm.
The code that will be use to represent an algorithm is either Bash, Python, or C, but I will mostly use Psuedocode.

## Introduction to Algorithm
+ Algorithm is like a recipe or a set of steps to perform/solve a particular task/problem efficiently.
+ The steps or instructions must be clear, unambiguous, and efficient.
+ For example, you want to turn on your television. You have to perform certain steps to achieve your goal.
1. Plug the Television.
2. Look for the remote.
3. Press the "Power" button.

+ Before diving in algorithm, we have to understand what algorithmic problem is.
### Algorithmic Problem
+ It is specified by describing the complete set of instances of a problem it must work on and its output.
+ For instance, the problem is "Sorting" and the input is a sequence of *n* keys, a-1, a-2, ..., a-n; And the output should be the sequence of input in order arrangement.

### Key Components of Algorithm
+ An algorithm should have these 5 Keys:
1. **Input:** Algorithm must take input/data that it will be working on. This data can be an array, image, texts, numbers, etc.
2. **Output:** After processing the input, an algorithm shall produce results.
3. **Definiteness:** The instructions or steps of an algorihtm must be clear, precise, and well-defined.
4. **Finiteness:** The algorithm must end eventually and produce a result from the computation or process.
5. **Effectiveness:** The instructions of an algorithm must be effective and basic enough for a person or computer to understand and process.
+ For example, a simple "Fizz Buzz".
+ It is common in job interviews.
+ From a sequence of *n* numbers, 
+ if *n* is visible by 3, it is substituted with *"fizz"*; 
+ if *n* is visible by 5, it is substituted with *"buzz"*; 
+ if *n* is simultaneously visible by 3 and 5, it is substituted by *"fizz buzz"*.
```pseudocode
let numbers = [1, 2, 3, 4, 5, 6, 7, 8, 10];

for n in numbers:
if (n % 15) == 0:
	print("fizz buzz");
elif (n % 3) == 0:
	print("fizz");
elif (n % 5) == 0:
	print("buzz");
else:
	print(number);
```

### Why Algorithm Matters?
1. **Problem-Solving:** Algorithms help us to solve a problem systematically by breaking them down into clear steps.
2. **Efficiency:** Algorithms should be good and effecient, meaning it can handle a huge amount of data and produce results in a reasonable time.
3. **Automation:** Algorithms are the backbone of computer programs, enabling automation and efficient processing of data.



## Algorithm Analysis
+ Analyzing an algorithm are based on its *Time* and *Space* Complexities.
### Time Complexity
+ This measures the run time of an algorithm based on the size of data.
### Space Complexity
+ This measures the resource that is needed for an algorithm to execute based on the size of data.

### For Example:
+ The **Bubble Sort**(Ascending Order)  Algorithm.
```psuedocode
let arr = [2,4,0,1,3];

for (i = 0; i < arr.length - 1; i++):
	if arr[i] > arr[i + 1]:
		val_hold = arr[i];
		arr[i] = arr[i + 1];
		arr[i + 1] = val_hold;
```

#### Algorithm Analysis:
1. Time Complexity:
+ For bubble sort, it involves comparing and swapping elements. The time it takes is proportional to the square of the number of elements in the list (n^2).
2. Space Complexity:
+ Bubble sort doesn't need much extra memory, so its space complexity is considered to be constant (O(1)).
