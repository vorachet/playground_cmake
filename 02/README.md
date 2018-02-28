The following program reads a sequence of integers from standard input, uses Boost.Lambda to multiply each number by three, and writes them to standard output.

Ref: http://www.boost.org/doc/libs/1_66_0/more/getting_started/unix-variants.html#build-a-simple-program-using-boost



```
1: $ mkdir build
2: $ cd build
3: $ cmake ../src
4: $ make
```

Output


```
$ echo 1 2 3 | ./myboost

3 6 9

```