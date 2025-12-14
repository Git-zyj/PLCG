/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1 + 2] [i_1] [i_0] = ((var_14 ? 65535 : ((max((var_14 <= 1), (max((arr_2 [i_0]), 0)))))));
                var_17 ^= ((-((min((arr_1 [i_1 + 1] [i_1 + 1]), 0)))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_18 = (max(var_18, 127));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_0] [i_2] [i_0] [i_0] = (((((arr_6 [i_0] [i_1] [i_1 + 2]) ? 65535 : 65409)) & 127));
                        var_19 -= ((!((max((((arr_10 [i_1] [i_1 - 1] [i_1] [i_1]) ? var_15 : var_2)), var_1)))));
                        var_20 = (max((((((var_11 ? 65534 : 0))) + 7469195772786345111)), ((((arr_7 [i_0] [i_1] [i_0] [i_3]) ? ((-(arr_9 [i_0] [i_3]))) : (((max(var_11, 180)))))))));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_21 = (min(var_21, (arr_4 [i_1 + 1])));
                            arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = var_15;
                            arr_15 [i_0] [i_0] [i_0] = var_0;
                            arr_16 [i_0] [i_1] [i_2] [i_1] [i_0] = 0;
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_2] [i_3] [i_5] [i_2] = ((-(max(65409, (min(var_11, (arr_18 [i_1] [i_1])))))));
                            var_22 = var_11;
                            arr_20 [i_0] [i_0] [i_2] [i_0] [i_5] [i_2] [i_0] = var_8;
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            var_23 = (max(var_13, (((arr_21 [i_0] [i_1] [9] [i_0] [i_0] [i_3] [i_6]) ? var_15 : (arr_10 [i_0] [2] [i_0] [2])))));
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_1] &= 31;
                        }
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_24 ^= var_16;
                        var_25 = (((max((arr_27 [i_7] [i_1] [i_2]), (arr_25 [i_0] [i_1] [i_1 + 2] [8] [i_7] [i_7]))) | var_12));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_26 = 475063093;
                                var_27 *= arr_29 [i_0];
                                var_28 = (min(var_28, (min(646022597, 65534))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (max(var_29, 65));
    var_30 = (~0);
    #pragma endscop
}
