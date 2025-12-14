/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (((((1316290657 + var_1) - (arr_1 [i_0]))) - (((-170 ? (max((arr_1 [i_0]), 2317481998)) : 32767)))));
                    arr_6 [i_0] = ((max(2995338424, -19)));
                    var_18 = var_7;
                }
            }
        }
    }
    var_19 = ((((max(1739042379, var_10))) ? (((-1437 ? 1739042379 : var_3))) : var_13));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_20 = ((var_10 & (arr_12 [i_3])));
                    arr_17 [i_5] [i_5] = (((arr_14 [i_3]) * ((2147483647 ? 8941209970491520410 : (arr_14 [i_3])))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_24 [11] [i_5] [i_5] [i_4] [i_7] [i_5] = 3;
                                var_21 = (((arr_20 [i_6] [i_7 - 1] [i_6] [i_7 + 1]) && (arr_11 [i_6 + 1] [i_6 + 1])));
                                arr_25 [i_5] [i_4] [i_4] [i_6 - 1] [i_6 - 1] = 45157;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
