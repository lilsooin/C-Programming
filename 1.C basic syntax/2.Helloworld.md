
main(void) function

```C
int main(void)
{
    return 0;
}
```
- main() function(not void in parenthesis) doesn't mean it doesn't have parameters 
- It means getting parameters but don't know how many paramters are and what data types are
- Shoul use void when there is no parameter!

main(void) function: (void) example
```C
int sum(void); /* function declaration: no parameter */
int sum();     /* function declaration: there are parameters, don't know yet */

int sum(void)  /* function definition: no parameter */
{
  /* code */
}

int sum()      /* function definition: no parameter */
{
  /* code */
}

int sum(const int num1, const int num2) /* function definition: 2 parameters */
{
  /* code */
}

```