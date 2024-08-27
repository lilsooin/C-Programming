```c
/* minion.h */
#ifndef MINION_H
#define MINION_H

void go_berserk(void);
void add_gold(unsigned int gold);

#endif /* MINION_H */
```


```c
/* minion.c */
#include "minion.h"

unsigned int g_hp = 100u;
unsigned int g_strength = 10u;
unsigned int g_gold = 15u;

void go_berserk(void)
{
    g_hp += 50u;
    g_strength += 20u;
}

void add_gold(unsigned int gold)
{
    g_gold += gold;
}
```


```c
/* main.c */
#include <stdio.h>
#include "minion.h"

extern unsigned int g_hp;
extern unsigned int g_strength;

int main(void)
{
    printf("Normal minion:\n");
    printf("hp: %u\n", g_hp); /* 100 */
    printf("strength: %u\n", g_strength); /* 10*/

    /* this does not compile */
    /* printf("gold: %u\n", g_gold); */

    printf("\n");

    go_berserk();
    add_gold(10u);

    printf("Berserk minion:\n");
    prtinf("hp: %u\n", g_hp); /* 150 */

    printf("strength: %u\n", g_strength); /* 30 */

    /* this does not compile */
    /* printf("gold: %u\n", g_gold) */ /* 25 */
    
    return 0;
}
```

