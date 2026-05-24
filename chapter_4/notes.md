### chapter 4

expressions, c89 and c99 truncating difference mentioned, implementation-defined behaviour should to be documented, assigment is an operation that differentiates c from other languages where assigment is a statement (*1). Operators and side effects.

(*1)-> for example, 'intVariable = 124.98f' == 124' is a true logical expression. '=' operator discards the digits after decimal point to match the types, then uses variable name for reaching the memory address and assigns the calculated expression. Then only the calculated expression left on the statement. In other words, evaluating the expression 'intVariable = 124.98f' produced the result 124. And as a side effect, 124 is assigned to the variable. '=' only accepts _lvalues_ as its left operand, an _lvalue_ is not a constant but a variable or an object? on memory.

*[lvalue = left value] -> has a memory address, [rvalue = right value] -> for calculating purpose, to be discarded.

