/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 2591;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_19 -= var_16;
        var_20 = var_9;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (arr_0 [5] [i_1])));
        var_22 = (arr_5 [1] [i_1]);
    }
    var_23 = var_7;
    var_24 = ((var_1 ? var_2 : 5277611533111237639));
    #pragma endscop
}
