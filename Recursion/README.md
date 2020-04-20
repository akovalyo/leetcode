# Recursion

### Exercise 1

Write a function **num_sum(num)** that computes the arithmetic sum 0 + 1 + 2... + (num-1) + num0+1+2...+(num−1)+num. For example **num_sum(3)** should return **6**. 

<details>
	<summary>Solution</summary>
    def  num_sum(num):
    if num == 0:
        return 0
    else:
        return num + num_sum(num - 1)
 </details>

 ***

 ### Exercise 2

 Write a function **num_of_threes(num)** that returns the number of times the digit **3** appears in the decimal representation of the non-negative integer **num**. For example **num_of_threes(34534)** should return **2**

 <details>
	<summary>Solution</summary>
    def  num_of_threes(num):
    if num == 0:
        return 0
    else:
        digit = num % 10
        rest = num_of_threes(num // 10)
        if digit == 3:
            return rest + 1
        else:
            return rest
 </details>