/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_18 = (((((arr_2 [i_0]) < var_10)) ? (((96 ? 0 : 19801))) : 2113929216));
        var_19 = (((var_9 != var_9) ? ((268435440 ? var_7 : 742618773)) : var_17));
        arr_4 [i_0] = -var_8;
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_20 = ((((((var_4 ? var_13 : var_2))) ? 1939802393 : (min((arr_1 [i_1]), var_10)))));
        arr_7 [i_1] [i_1] = -100;
    }
    #pragma endscop
}
