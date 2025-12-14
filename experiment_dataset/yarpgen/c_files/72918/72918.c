/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = (arr_1 [i_0]);
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        var_15 ^= 12;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_16 = (~12);
        arr_7 [i_1] = var_13;
        var_17 = ((((var_4 << ((((~(arr_6 [i_1]))) - 3791259422515159541)))) & var_6));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_18 = 138;
            var_19 = (arr_12 [i_2] [i_3] [i_2]);
        }
        var_20 = (max(var_20, ((((var_7 > var_9) || 7168)))));
    }
    var_21 = -24;
    var_22 -= ((-24 ? (((min((min(-14, -23)), (3840641460189896357 || var_3))))) : var_9));
    var_23 = var_7;
    #pragma endscop
}
