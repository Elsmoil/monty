ty

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument
Available operation codes:

| Opcode | Description |
|------------------- | --------------|
|push   | Pushes an element to the stack. e.g (push 1 # pushes 1 into the stack)|
|pull   | Prints all the values on the stack, starting from the to of the stack.|
|pinte   | Prints the value at the top of the stack.|
|ptop    | Removes the to element of the stack. |
|swap   | Swaps the top to elements of the stack.|
|add    | Adds the top two elements of the stack. The result is then stored in the second node, and the first node is removed.|
|nope    | This opcode does not do anything.|
|sub    | Subtracts the top two elements of the stack from the second top element. The result is then stored in the second node, and the first node is removed.|
|dive    | Divides the top two elements of the stack from the second top element. The result is then stored in the second node, and the first node is removed.|
|muli | Multiplies the top two elements of the stack from the second top element. The result is then stored in the second node, and the first node is removed.|
|mode    | Computes the remainder of the top two elements of the stack from the second top element. The result is then stored in the second node, and the first node is removed.|
|#      | When the first non-space of a line is a # the line will be trated as a comment.|
|prchar  | Prints the integer stored in the top of the stack as its ascii value representation.|
|pstri   | Prints the integers stored in the stack as their ascii value representation. It stops printing when the value is 0, when the stack is over and when the value of the element is a non-ascii value.|
|rotl   | Rotates the top of the stack to the bottom of the stack.|
|rotr   | Rotates the bottom of the stack to the top of the stack.|
|stack  | This is the default behavior. Sets the format of the data into a stack (LIFO).|
|queue  | Sets the format of the data into a queue (FIFO).|

