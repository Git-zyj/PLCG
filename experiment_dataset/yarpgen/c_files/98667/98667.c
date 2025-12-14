/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = ((((1 ? 628485195691904179 : 1)) & -7806813194657099810));
                                var_21 = (!var_8);
                                arr_15 [i_0] [i_1] [i_0] [i_3] [i_4 - 1] [i_1] [i_2] = (((arr_10 [i_4 - 1] [i_4 - 1] [13] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? ((((var_16 || var_17) ? ((((arr_1 [i_2] [i_1]) ? (arr_0 [i_4] [i_2]) : var_14))) : var_9))) : -var_16));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_2] [i_1] = var_17;
                }
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    var_22 = (+-1272060118);
                    var_23 = var_4;
                }
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    arr_23 [i_6] [i_1] = ((var_17 ? 1312631780444905468 : var_4));
                    var_24 ^= (arr_2 [i_1]);
                    arr_24 [i_0] [i_6] = (arr_2 [i_6 + 1]);
                    var_25 = var_8;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_31 [i_0] [i_0] [9] [i_6] [i_6] [i_8] [i_8 + 1] = (((((arr_26 [i_8 + 3] [i_7] [i_7] [i_7] [i_6 - 1]) ? (arr_26 [i_8 + 1] [i_8] [i_8] [i_8 + 3] [i_6 - 1]) : (arr_26 [i_8 - 3] [i_6] [2] [i_6 - 1] [i_6 - 1]))) | (~1)));
                                var_26 = (min(var_26, ((max(-var_4, var_12)))));
                                var_27 = ((-(((arr_18 [i_6 - 1] [i_6 - 1] [i_0]) / 1272060110))));
                                arr_32 [i_0] [i_1] [i_6] [i_7] [i_6] = (((((2158 ? 12043630473566586275 : -1))) ? (arr_9 [i_0] [i_1] [i_0]) : ((var_8 ? (arr_3 [i_7] [i_7]) : (arr_7 [i_6 - 1] [i_8 + 2])))));
                            }
                        }
                    }
                }
                var_28 = var_1;
                var_29 ^= var_18;
            }
        }
    }
    var_30 = var_11;
    #pragma endscop
}
