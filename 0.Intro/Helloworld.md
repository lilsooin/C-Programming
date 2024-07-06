```C
#include <stdio.h>
/* program entry point */
int main(void)
{
    printf("Hello Suin!\n");
    return 0;
}
```

### #include 
-  similar to C# using, Java: import
- To allow the use of functions or variables implemented in other files
- `#include`  is one of the preprocessor directives.
-  The preprocessor performs tasks before compilation, such as copying and pasting text.

### #include <>
```C
#include <stdio.h>
```
- stdio.h is file in the disk

### #include mechanism
1.  open header file(*.h) such as **stdio.h** and copy the contents
2. Replace the part written as `#include <stdio.h>` with the content copied.
```C
/* stdio.h codes */
/* functions */
int main(void)
{
    printf("Hello Suin!\n");
    return 0;
}
```

### #include usage
```C
#include <stdio.h> /* compile */
#include 'stdio.h' /* compile error */
#include "stdio.h" /* compile but not recommend */
```

### <stdio.h>
- One of the C standard library(libc)
- Standard Iput and Output in libc
- ex. printf(), scanf(), fopen(), fclose()