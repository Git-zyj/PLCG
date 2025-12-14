/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (min((((0 << var_13) | -1)), 31327));
        var_18 = (max(((1 ? var_1 : (max(-22513, -3026101451329860148)))), ((~(~-770860544606180853)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_19 = 21717;
        var_20 += var_17;
        arr_5 [i_1] [i_1] |= (max(((-(((-9223372036854775807 - 1) + var_1)))), (max((~var_4), ((65525 ? 4209183577583279785 : var_11))))));
        var_21 = (((((((min(52778, 0))) ? (((-4209183577583279762 ? 0 : -22518))) : 770860544606180853))) ? (((32767 == 1) % ((1 ? var_4 : var_9)))) : ((((2693435216512130827 ? 52773 : 0))))));
    }
    var_22 += var_12;
    var_23 = (((!(((var_9 ? var_2 : 10907))))));
    #pragma endscop
}
