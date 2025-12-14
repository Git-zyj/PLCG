/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0 - 1] = (((arr_1 [i_0 - 1]) ? (((max(0, var_12)))) : (arr_1 [i_0 - 1])));
        var_16 ^= (max((arr_0 [i_0]), (((arr_2 [i_0 - 1] [i_0 - 1]) - (arr_2 [i_0 - 1] [i_0 - 1])))));
        var_17 ^= (arr_1 [i_0]);
        var_18 = (min(var_18, (arr_1 [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_19 = -2854176000296727326;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_2] [i_3] [i_3] [i_4] [i_5] = ((~(max(var_11, (arr_1 [i_2])))));
                                arr_17 [i_5] [i_2] [i_3] [i_4] [i_5] = (((((((arr_11 [i_1] [i_3] [i_4]) + 9223372036854775807)) << (var_5 - 230))) > var_2));
                            }
                        }
                    }
                }
            }
        }
        var_20 = (((((arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) + 2147483647)) << (1 - 1)));
    }
    var_21 = ((var_5 || var_7) ? ((2854176000296727326 | (!1))) : (var_9 > var_2));
    var_22 = (min(var_0, ((((0 ^ 2854176000296727326) ? var_9 : var_1)))));
    var_23 = (((var_10 - var_6) * (((((var_11 >> (var_2 - 74)))) ? var_15 : (1 > var_1)))));
    #pragma endscop
}
