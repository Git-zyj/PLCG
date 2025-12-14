/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 == var_2) > (-9223372036854775807 - 1));
    var_12 = (min(var_12, ((-((2220155021 ? 2074812274 : 1056964608))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_13 = (((!var_7) > var_6));
        var_14 = (2220155005 < 70);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        arr_10 [i_3] [i_1] [i_0] [1] [i_1] [i_0] = (arr_2 [i_0]);
                        var_15 += (((arr_8 [i_3 + 2] [i_3] [i_3 - 1] [16]) ? (arr_6 [i_1]) : -var_1));
                    }

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_13 [i_0] [15] [i_1] [15] [1] = var_6;
                        var_16 -= 1;
                        var_17 = (((arr_8 [i_0] [i_2 - 1] [i_2] [i_1]) ^ 1));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_18 *= -1505823133;
                        var_19 = ((!(((1 ? var_4 : var_7)))));
                    }
                }
            }
        }
        var_20 |= ((127 ? ((127 << (arr_8 [i_0] [i_0] [i_0] [14]))) : 1));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        arr_19 [i_6] [i_6] = (((arr_4 [i_6]) ? (arr_8 [i_6] [i_6] [11] [i_6]) : (arr_18 [8])));
        arr_20 [i_6] = (!1);
        arr_21 [i_6] = var_1;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        arr_25 [i_7] [2] = (((arr_16 [i_7] [2]) ? var_6 : (arr_16 [i_7] [4])));
        arr_26 [9] [5] = var_10;
    }
    #pragma endscop
}
