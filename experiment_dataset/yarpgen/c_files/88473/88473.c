/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((((((var_11 && var_13) ? var_2 : var_13))) ? var_6 : var_1)))));
    var_20 = (((var_7 | var_14) ? ((((var_12 < ((var_18 ? var_18 : var_4)))))) : ((((max(var_15, var_2))) ? var_10 : ((var_6 ? var_0 : var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = (max((((((min(var_7, (arr_5 [8] [i_1] [i_2])))) ? (var_3 <= var_16) : ((var_16 ? (arr_5 [i_0] [i_1] [i_2]) : var_0))))), (((arr_3 [i_0] [i_0]) ? var_10 : (arr_8 [i_3 - 2] [i_1] [3] [1] [8])))));
                                var_22 -= (min((arr_9 [i_3 + 1] [1] [i_3 + 1] [i_3] [8]), (min((arr_9 [i_3 - 2] [1] [i_3 - 1] [i_3 - 2] [i_3 - 1]), (arr_9 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3] [i_3])))));
                            }
                        }
                    }
                }
                var_23 -= var_16;
                var_24 = (min(var_24, ((max((min((arr_2 [i_0]), var_11)), (arr_5 [i_0] [i_0] [i_0]))))));
                var_25 ^= (((((((max(var_4, var_15))) ? var_6 : var_5))) ? (((var_2 ? (arr_7 [i_0] [i_1] [i_1]) : (((var_14 ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_4)))))) : ((var_1 ? var_16 : (arr_6 [i_0] [i_1])))));
            }
        }
    }
    var_26 = var_14;
    #pragma endscop
}
