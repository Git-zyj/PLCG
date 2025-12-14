/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 22;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = 234;
        var_12 = ((22 && (((2044 ? 234 : 5210831401642364313)))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1 + 2] [i_1] = ((var_10 ? 19 : (arr_5 [i_2] [i_1])));

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_17 [i_1] [i_1] [i_3] [i_3] [i_1] = var_1;
                            arr_18 [i_1] = 9223372036854775807;
                        }
                        arr_19 [i_1] [i_1] [i_1] [i_1] [i_4] = (-9223372036854775807 - 1);

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_13 = (max(var_13, 9223372036854775807));
                            var_14 = -8928;
                            arr_23 [i_1] [i_2] [i_2] [i_1] [i_3] [i_1] [i_6] = var_7;
                            arr_24 [i_1] [i_1] [i_3] [i_4] [i_1] [i_1] = 1676324813961050298;
                        }
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            arr_27 [i_1] [i_1] [i_7] = ((-((var_10 ? 3536965884 : 120))));
                            arr_28 [i_1] [i_3] [i_3] [i_7 - 1] = var_0;
                            var_15 = 3678656259;
                        }
                    }
                }
            }
        }
        var_16 = (arr_10 [i_1 + 1] [i_1]);
        arr_29 [i_1] = (((arr_15 [i_1 + 2] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_15 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1]) : (arr_15 [i_1 + 2] [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    for (int i_8 = 2; i_8 < 17;i_8 += 1)
    {
        arr_33 [i_8] = (max(-107, -104));
        arr_34 [i_8] [i_8] = (arr_3 [i_8 - 1] [i_8 - 2]);
    }
    var_17 = var_9;
    var_18 = (max(var_18, ((min((((var_2 != ((43561 ? -1161625571 : var_0))))), var_4)))));
    var_19 = var_0;
    #pragma endscop
}
