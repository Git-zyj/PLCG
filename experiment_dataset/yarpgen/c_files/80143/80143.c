/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (min((arr_2 [i_0 + 1]), (min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1])))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_11 -= ((~(min((((arr_7 [24] [24]) ? var_3 : var_10)), var_0))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    {
                        var_12 -= var_4;
                        arr_15 [i_0] [i_0] = var_2;
                    }
                }
            }
        }
    }

    for (int i_4 = 4; i_4 < 8;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_13 -= (arr_24 [i_4 - 4] [i_5] [i_5] [i_7]);
                        var_14 = var_6;
                        var_15 = (((((((arr_7 [i_4] [i_4]) ? (arr_18 [i_4 - 3] [i_4 - 3]) : var_1)) ^ (arr_1 [i_4 + 4]))) ^ (((~(((arr_7 [i_5] [1]) ? var_0 : (arr_0 [i_4 + 4] [i_5]))))))));
                    }
                }
            }
        }
        var_16 = (arr_22 [i_4 + 3] [i_4 - 4] [i_4 + 4] [i_4]);
        var_17 = (arr_8 [i_4] [i_4] [i_4]);
        arr_26 [i_4] [i_4] = (min(((((((arr_5 [18]) ? (arr_21 [i_4] [i_4] [7] [i_4 + 1]) : var_10)) / var_7))), (min(var_3, (arr_13 [i_4 - 4] [i_4 - 4] [i_4 - 3] [i_4 - 4] [i_4] [i_4 - 1])))));
        var_18 = var_5;
    }
    #pragma endscop
}
