/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_20 = -var_5;
        var_21 += ((-(arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_22 = (min((163 | 56313), 2147483636));
        arr_5 [i_1] [i_1] = ((((-(arr_2 [i_1 - 1]))) << ((((~(((arr_4 [i_1]) ? (arr_0 [i_1]) : (arr_3 [i_1]))))) + 7269513205338539608))));
        arr_6 [i_1] [i_1] = ((var_0 ? ((-(max(var_11, 11629193627390689696)))) : (((-(max((arr_0 [i_1]), 83)))))));
    }
    var_23 = (6563225958040846567 / 11883518115668705047);
    #pragma endscop
}
