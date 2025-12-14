/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
        arr_4 [1] = (min(((min(-79, (arr_1 [i_0] [7]))), var_8)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = var_8;
        var_11 = (min(-84, (((arr_1 [i_1] [i_1]) ? 1 : 21))));
        arr_9 [i_1] &= var_5;
    }
    var_12 -= (((((-31927 ? var_9 : ((29 >> (65518 - 65512)))))) ? (((var_7 / 2149191146) ? var_6 : (min(var_10, var_0)))) : var_3));
    #pragma endscop
}
