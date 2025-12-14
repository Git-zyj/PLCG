/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = var_7;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_8 [i_0] [i_0] [i_1] = var_6;
            var_16 ^= ((var_12 / (arr_7 [i_0] [i_1])));
        }
        arr_9 [i_0] [i_0] = ((var_1 / (arr_3 [i_0])));
        var_17 = (arr_0 [i_0]);
    }
    var_18 += 8787503087616;
    var_19 = (max(var_13, (max((~var_3), (max(var_0, var_8))))));
    var_20 = ((((((min(var_5, var_7))) ? (!var_10) : 47))) ? (max(var_3, 1357586997)) : ((((max(var_14, -2739444717362378986)) >= ((var_2 ? var_2 : var_14))))));
    #pragma endscop
}
