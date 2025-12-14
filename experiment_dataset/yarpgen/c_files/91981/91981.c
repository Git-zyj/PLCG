/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_10 ? (var_14 && var_12) : var_2))) ? var_0 : (((-(~var_6))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 -= (arr_0 [i_0 + 2] [i_0 - 1]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_18 = (arr_7 [i_0] [i_1] [i_2] [i_3]);
                        var_19 ^= (var_6 && var_0);
                        var_20 = (max(var_20, (((!(((var_12 ^ (arr_0 [i_2] [i_1])))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 12;i_4 += 1)
                    {
                        arr_14 [i_1] [i_1] [i_2] [i_1] [i_0] [i_1] = (((arr_9 [i_0 + 1]) && (arr_4 [i_0 - 1] [i_0 - 2])));
                        arr_15 [i_0] [i_0] [i_0] [i_4] [i_1] = ((((((arr_13 [i_0 + 1] [i_1] [i_2] [9] [i_4] [i_1]) ^ 127))) ? ((var_8 ? var_9 : var_5)) : (!var_3)));
                        arr_16 [i_1] = -1;
                        var_21 ^= (((arr_13 [i_0] [i_1] [i_0] [4] [i_4 - 4] [i_1]) ? 1 : var_5));
                    }
                    arr_17 [i_0 - 2] [i_1] [i_1] = (((((((var_12 ? (arr_10 [i_2] [i_1] [i_1] [i_0 - 2]) : (arr_13 [i_0] [i_0 + 2] [i_1] [i_1] [i_1] [i_2])))) && (arr_5 [i_0] [i_0] [i_1]))) ? var_2 : ((min((((arr_12 [i_0] [i_1] [i_2] [i_2] [i_2]) ? var_14 : (arr_10 [i_0] [i_1] [i_1] [i_0 + 2]))), -var_0)))));
                    arr_18 [i_1] [i_1] [i_1] [i_1] = ((~(((var_13 | var_9) ^ (((arr_5 [i_0 + 1] [i_0 + 1] [i_1]) ? var_6 : 38))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 4; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_22 = (((((var_14 && (arr_23 [i_6] [i_5]))))));
                    arr_27 [i_6] = (((~(arr_26 [i_5 - 3]))));
                }
            }
        }
    }
    var_23 = ((var_9 && (((-((0 ? 1 : var_9)))))));
    var_24 = (((max(1, (min(1, var_6)))) << (((((((var_15 ? var_11 : var_4))) ? var_2 : ((var_8 ? var_7 : var_2)))) - 3166833865))));
    #pragma endscop
}
