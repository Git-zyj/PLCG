/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (2199023255551 / var_5);
        var_17 = (arr_2 [i_0]);
    }

    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        var_18 ^= -8461422800020863184;
        var_19 = 0;
        arr_8 [12] |= (arr_5 [i_1 - 2]);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = 0;
        arr_13 [i_2] [i_2] = 0;
    }
    var_20 = (min(var_20, (((var_10 ? ((-(!var_2))) : 34084860461056)))));
    #pragma endscop
}
