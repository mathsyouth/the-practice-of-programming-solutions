# The Practice of Programming Solutions
Provide high quality solutions to the exercises in "The Practice of Programming" by Kernighan and Pike, also referred to as "tpop".


## Table of Contents

* [Chapter 1. Style](#chapter-1-style)


## Chapter 1. Style

* Exercise 1-2. Improve this function:
```c
?    int smaller(char *s, char *t) {
?        if (strcmp(s, t) < 1)
?            return 1;
?        else
?            return 0;
?    }
```
[solution](Chapter1/exercise1-2.c)
* Exercise 1-4. Improve each of these fragments:
```c
?    if ( !(c == 'y' || c == 'Y') )
?        return;

?    length = (length < BUFSIZE) ? length : BUFSIZE;

?    flag = flag ? 0 : 1;

?    quote = (*line == '"') ? 1: 0;

?    if (val & 1)
?        bit = 1;
?    else
?        bit = 0;
```
[solution](Chapter1/exercise1-4.c)
* Exercise 1-5. What is wrong with this excerpt?
```c
?    int read(int *ip) {
?        scanf("%d", ip);
?        return *ip;
?    }

?    insert(&graph[vert], read(&val), read(&ch));
```
[solution](Chapter1/exercise1-5.md)
* Exercise 1-6. List all the different outputs this could produce with various orders of evaluation:
```c
?    n = 1;
?    printf("%d, %d\n", n++, n++);
```
Try it on as many compilers as you can, to see what happens in practice. [solution](exercise1-6.md)
