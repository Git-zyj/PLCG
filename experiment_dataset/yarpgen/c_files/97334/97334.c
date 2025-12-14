/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((((var_4 ? var_8 : ((max(126, var_9)))))) ? (((((var_4 ? var_8 : var_9))) ? (min(14529345524894633521, 6997)) : (~var_3))) : var_9)))));
    var_16 = var_14;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 = (min(var_17, ((((((max(2147483647, 58524)))) * (!var_0))))));
        arr_2 [i_0] = 331659796;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_18 = (max(var_18, (~var_13)));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_19 = (((arr_3 [i_1]) * (arr_3 [i_1])));
                        arr_12 [i_4] [20] [i_4] |= ((43 ? (arr_3 [i_2]) : (arr_3 [i_4])));
                        var_20 ^= (((-2499921397634139586 ? var_11 : var_7)));
                    }
                }
            }
            var_21 = (max(var_21, (!var_12)));
        }
    }
    var_22 = var_6;
    #pragma endscop
}
