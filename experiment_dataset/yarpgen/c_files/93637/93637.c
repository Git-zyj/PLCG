/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_14 = ((!(arr_4 [i_0] [i_0])));
                        var_15 = (((((((-(arr_7 [i_0] [i_0] [i_1 + 1] [i_0])))) ? ((var_6 >> (-1 + 34))) : ((((arr_7 [i_0] [i_1 - 1] [i_2] [i_3]) / -45)))))) ? (arr_4 [i_0 - 2] [i_0]) : var_13);
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0 - 2] [i_0] [i_4] [i_4] [i_4] [i_4] = (arr_6 [i_0]);
                        arr_14 [i_0 + 2] [i_1 + 1] [i_1] [i_2] [i_2] [i_0] = (arr_6 [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        var_16 = (arr_2 [i_0 + 1] [i_0 - 2] [i_0]);
                        arr_17 [i_0] [i_1] [i_0] [i_5] [i_0] [i_1] |= ((113 ? ((((arr_0 [i_1]) ? (arr_0 [i_1]) : var_3))) : var_6));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        arr_21 [i_0] [i_2] = ((((9 ? (arr_6 [i_0]) : 233))));
                        var_17 = ((!((((arr_4 [i_0 - 2] [i_0]) ? ((max((arr_6 [i_0]), (arr_9 [i_0] [6] [i_0] [i_6])))) : var_2)))));
                        var_18 = (arr_5 [i_0] [i_1] [i_6]);
                        var_19 *= min((arr_1 [i_0 + 1]), (min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))));
                    }
                    var_20 = (min(var_20, var_0));
                    var_21 ^= 1403374091;
                    var_22 = (arr_7 [i_1 - 1] [i_1] [i_1 + 1] [i_0]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            {
                var_23 = ((var_5 ? (arr_22 [i_7] [i_7]) : ((((arr_26 [i_7] [i_8 + 2]) ? 61136 : 21214)))));
                arr_27 [i_7] [i_8] = var_6;
            }
        }
    }
    var_24 = var_12;
    #pragma endscop
}
