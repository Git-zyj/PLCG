/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (0 >> 2);
        var_19 |= ((2297343530977969055 ? (((arr_1 [4]) ? (arr_2 [10]) : 2297343530977969055)) : (arr_2 [14])));
        arr_3 [i_0] = 760196734;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_20 += 760196740;
        arr_6 [i_1] = ((arr_1 [i_1]) != 16149400542731582537);
    }
    var_21 = (min(var_21, (((((((!(1 && var_17))))) & (((((var_9 ? -760196748 : var_16))) ? (~var_13) : ((var_0 ? var_8 : var_14)))))))));
    var_22 = var_7;
    #pragma endscop
}
