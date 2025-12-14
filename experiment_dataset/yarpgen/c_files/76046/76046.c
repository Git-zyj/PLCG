/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_18 = (arr_1 [i_0]);
                        arr_10 [i_0] [i_1] [i_2 - 1] [i_0] [i_2] [i_3] = -var_5;
                        var_19 *= (!(((-123 ? (arr_7 [i_0] [i_1] [i_2] [i_2 - 1] [i_3]) : 0))));
                        var_20 = -8192;
                        arr_11 [i_0] [i_0] [i_0] [i_3] [i_0] |= ((~(arr_2 [i_2 - 1] [i_1])));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_21 = 3234801931;

                        for (int i_5 = 3; i_5 < 13;i_5 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_3 [i_0] [i_5 + 1]) != 8192));
                            arr_18 [i_0] [i_0] = (arr_8 [i_5 + 1] [i_0] [i_4] [i_2] [i_0] [i_0]);
                            arr_19 [i_0] [i_4] [i_5 - 2] = ((((arr_0 [i_0]) ? (arr_0 [i_1]) : (arr_0 [i_5 + 1]))));
                        }
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_0] [i_6 + 2] = (((max(65535, 0))) ? (max(((((arr_13 [i_1] [i_0] [i_6 - 1]) && -8528))), (arr_2 [i_1] [i_0]))) : (~var_14));
                            arr_23 [i_0] [i_1] [i_0] [i_4] = -var_6;
                            arr_24 [i_0] [i_1] = 11895298695561997532;
                            arr_25 [i_0] [i_1] [i_2 - 1] [i_4] [i_6 - 1] [i_6 - 1] [i_0] = (min(0, (((-7037838361867171395 ? 1 : 1)))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_22 = ((0 ? (((arr_4 [i_1] [i_2 - 1] [i_7]) ? (arr_16 [i_0] [i_0] [i_1] [i_2 - 1] [i_7]) : (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : (~-929753391)));

                        for (int i_8 = 3; i_8 < 11;i_8 += 1)
                        {
                            arr_31 [i_0] [i_1] [i_2 - 1] [i_7] [i_8] = (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            arr_32 [i_0] [i_0] [i_2 - 1] [i_7] [i_8 - 2] = ((((((arr_15 [i_0] [i_1] [i_1] [i_0] [i_7] [i_8 - 2]) ? (((24576 ? 0 : -8189))) : 1438079962))) ? ((~(~var_15))) : ((-(((arr_8 [i_0] [i_1] [i_2] [i_7] [i_0] [i_8]) ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]) : 0))))));
                            var_23 = 0;
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_24 = ((((-2 >= (~0))) ? ((2594907678 % (arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : ((max(-5, (arr_33 [i_0] [i_1] [i_1] [i_0] [i_7] [i_9] [i_9]))))));
                            var_25 = ((-(0 & 11157)));
                            var_26 = (max((arr_21 [i_0] [i_1] [i_2 - 1] [i_0] [i_9]), ((((arr_15 [i_2] [i_1] [i_2 - 1] [i_0] [i_9] [i_2 - 1]) > (~-3952075111922960869))))));
                            var_27 -= ((min((arr_20 [i_2 - 1] [i_0] [i_2 - 1] [i_7] [i_9] [i_9] [i_2 - 1]), (arr_20 [i_9] [i_9] [i_7] [i_7] [i_1] [i_0] [i_0]))));
                            var_28 = (min(var_28, (arr_14 [i_0] [i_1] [i_2 - 1] [i_7] [i_9])));
                        }
                        arr_35 [i_0] [i_0] [i_7] [i_0] &= max((min(-7037838361867171401, -750721584)), (58444 - 2856887332));
                    }
                    var_29 = arr_4 [i_0] [i_1] [i_2 - 1];
                }
            }
        }
    }
    #pragma endscop
}
