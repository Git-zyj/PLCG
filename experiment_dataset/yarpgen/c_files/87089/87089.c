/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((4457 ? ((0 | (arr_1 [i_0]))) : 1));
        var_19 = (arr_1 [i_0]);
        arr_5 [i_0] [i_0 + 1] = 1;
        var_20 += (arr_0 [i_0 - 3]);
        arr_6 [24] &= (arr_3 [i_0 + 1]);
    }
    var_21 = var_11;
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            {
                var_22 = ((!(((0 - (~621046049))))));

                /* vectorizable */
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    arr_13 [i_3] = 24139;
                    var_23 = (~188);
                    var_24 = (min(var_24, ((((arr_8 [i_1 + 2]) / (arr_8 [i_1 + 2]))))));
                    arr_14 [i_1] [i_2] [i_3] = 1;
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_23 [i_1] [i_2] [i_4] [i_4] = ((-((((min((arr_18 [i_1]), (arr_3 [i_6])))) ? (arr_15 [i_1] [i_1 + 2] [i_1 + 2] [i_1]) : (arr_8 [i_2])))));
                                arr_24 [i_1 + 3] [i_2] [10] [i_5] [i_6] = (((arr_17 [6] [i_1 + 2] [i_1] [i_1 + 2]) ? (((((((arr_19 [i_1] [2] [i_1] [i_5] [i_6]) ? (arr_10 [10] [i_2]) : 46401)) <= (arr_1 [2]))))) : ((-8039386113050358494 ? (2789455795 / 6942655773210619243) : -6006969606055144104))));
                            }
                        }
                    }
                    var_25 = 1408425969156296298;
                    arr_25 [i_1 + 3] [i_1 + 3] = 394402901;
                    var_26 = (arr_7 [i_1 - 2]);
                }
            }
        }
    }
    #pragma endscop
}
