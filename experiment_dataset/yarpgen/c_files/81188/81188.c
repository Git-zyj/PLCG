/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!var_6);
    var_19 = var_17;
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (arr_3 [i_1 - 4] [i_1 + 1] [i_1 + 1]);

                /* vectorizable */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_1] [i_0] = var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_22 = var_13;
                                var_23 = ((-var_6 ? var_17 : var_14));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_20 [22] [i_0] [17] [i_2 - 1] [i_2] [i_5] [17] = 3764;
                                var_24 = (arr_5 [i_0] [i_1] [i_2 - 1] [i_6]);
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_25 [i_7] [1] [i_7] [i_1] = (((((arr_21 [23] [i_1 - 3] [17] [i_1 - 1]) ? (arr_21 [i_1 - 4] [i_1 - 4] [14] [i_1 + 1]) : (arr_21 [i_0] [i_1 - 2] [i_1] [i_1 - 1])))) < ((min(55, var_2))));
                    var_25 = (max(var_25, (max(((var_17 ? ((var_17 ? var_4 : var_14)) : var_4)), (((arr_3 [i_0] [7] [19]) ? (arr_12 [i_0] [i_1] [i_0] [i_0] [i_0]) : var_11))))));
                    arr_26 [0] [i_1] = (!31457280);
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    var_26 = ((((((549755797504 ^ (arr_12 [i_8] [i_1] [i_1] [i_1] [i_0]))))) ? ((((((arr_21 [i_0] [i_1] [i_0] [i_8]) ? var_13 : (arr_12 [i_0] [i_1] [i_8] [i_0] [i_1])))) ^ var_1)) : (((((246 ? (arr_14 [i_0] [i_0] [1] [i_1 - 2] [i_8]) : 549755797504))) ? (~var_10) : (max((arr_5 [i_0] [i_1] [i_1] [1]), var_0))))));
                    var_27 = (arr_13 [i_0] [i_1] [i_1 - 2] [i_1] [i_8]);
                    var_28 = 549755797504;
                }
            }
        }
    }
    #pragma endscop
}
