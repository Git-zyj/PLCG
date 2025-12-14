/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = ((((var_1 ? var_7 : var_19)) >= -var_3));
            var_20 = ((!(((var_17 ? var_6 : (arr_2 [i_1]))))));
            arr_8 [i_0] = -1964403812;
        }
        var_21 = (max((((((((arr_2 [i_0]) ? var_18 : var_1))) >= (arr_0 [i_0 - 1] [i_0 + 1])))), (((arr_3 [i_0]) * (arr_3 [i_0])))));
        arr_9 [i_0] = (((((((arr_5 [i_0]) ? (arr_2 [i_0]) : var_13))) ? var_10 : ((var_18 ? (arr_5 [i_0]) : var_16)))));
        arr_10 [i_0] [i_0 + 1] = ((max(var_18, var_9)) > (((max((max(var_15, (arr_4 [i_0 + 1]))), (!var_5))))));
    }
    var_22 = ((-(((~63578) ? -1 : (22 || 6)))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_23 = (((((var_2 / (83 < 2860154849)))) ? (((arr_13 [i_2] [i_3] [i_2]) ? -var_17 : var_12)) : var_15));
                    var_24 ^= var_13;
                }
            }
        }
    }
    var_25 = var_19;
    #pragma endscop
}
