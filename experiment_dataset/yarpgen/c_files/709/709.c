/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_8 < (!-var_7)));
    var_14 &= (((!1398470128) ? ((max(var_1, var_11))) : var_1));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_15 = var_9;
                        arr_14 [i_1] [1] [2] = ((1834967460 != -114) && 2147483647);
                        var_16 = (arr_4 [i_0]);
                        arr_15 [i_0] [i_1] [7] [i_0] = (arr_3 [i_0] [1]);
                    }
                    for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_17 = ((!(((~((((arr_7 [i_0 - 2] [i_0] [i_0]) == var_3))))))));
                        var_18 ^= arr_13 [i_0] [3] [i_4 - 2] [i_4];
                        arr_18 [i_0 + 1] [i_1] [i_2] [i_4] [i_1] [i_1] = ((+(((arr_3 [i_0] [i_0 + 1]) ? (arr_3 [8] [i_0 + 1]) : (arr_3 [i_0] [i_0 - 1])))));
                        arr_19 [i_0 - 1] [i_1] [i_0] [6] &= arr_12 [i_4] [i_0] [i_1] [i_0] [i_0 + 1];
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_19 -= ((-(arr_20 [i_6] [i_5] [i_2] [6] [i_1] [i_6])));
                                var_20 = (max((((~1) ? var_1 : var_7)), (!var_10)));
                                arr_25 [i_1] [i_0 + 1] [i_0 + 1] [i_1] [i_2] [i_5] [10] = (arr_16 [i_5] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
