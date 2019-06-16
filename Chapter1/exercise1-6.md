Put the following code
```c
#include <stdio.h>

int main(void)
{
    int n = 1;
    printf("%d %d\n", n++, n++);
}
```
into the `test.c` file. On macOS, if
```shell
clang test.c && ./a.out
```
is run, the output is
```
test.c:6:24: warning: multiple unsequenced modifications to 'n' [-Wunsequenced]
    printf("%d %d\n", n++, n++);
                       ^    ~~
1 warning generated.
1 2
```
