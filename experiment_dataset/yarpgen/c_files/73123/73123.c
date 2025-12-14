/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1 - 2] = ((arr_1 [i_0] [i_0]) ? ((-97 ? (arr_5 [8] [i_1]) : ((var_7 ? var_1 : var_5)))) : -var_8);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, (~var_3)));
                                var_14 = (max(var_14, ((((min(-5364829817739392934, -5364829817739392934)) | (min((((arr_2 [i_3]) & var_3)), var_10)))))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((((((68719476735 ? (((arr_0 [i_0]) ^ 1522809409)) : 127))) ? 0 : 15759272952001692736)))));
                                var_16 = (max(var_16, (((-(((((10030769278145214417 ? 1522809392 : 1522809404))) | (max(var_3, var_12)))))))));
                                var_17 = ((var_2 ^ (((arr_3 [i_0] [18]) ? (var_10 ^ 3289445501) : var_6))));
                            }
                        }
                    }
                    arr_21 [i_0] = (((!((((arr_20 [i_0] [i_1] [i_5] [2] [1]) ? var_2 : 147038017))))));

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {

                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 22;i_9 += 1)
                        {
                            arr_29 [i_1] [i_1] [i_0] [i_0] [i_9 + 1] [i_9] [i_1] = (arr_23 [i_1]);
                            var_18 = var_4;
                        }
                        arr_30 [i_8] [i_0] [i_0] [i_0] = (((526409623590767548 ? 362468599 : -33)));
                        var_19 -= (~(arr_12 [i_8] [i_1] [11] [i_8] [i_8] [11]));
                    }
                    for (int i_10 = 2; i_10 < 22;i_10 += 1)
                    {
                        var_20 -= ((var_11 < ((var_5 + (arr_13 [i_0] [i_0] [i_0] [i_0])))));
                        arr_33 [i_0] [i_0] [i_5] [i_10] = ((arr_28 [i_0] [i_10 - 2] [i_0] [i_1 + 2] [i_10 - 1] [i_1 - 2]) ? (((var_11 / (arr_4 [i_0])))) : var_6);
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    arr_37 [i_0] [i_0] [i_1] = ((-((var_6 ? var_2 : var_6))));
                    arr_38 [i_0] = ((arr_35 [i_0] [7] [7] [7]) + (92 | 3296933021671666627));
                    var_21 ^= -1723073858;
                }
            }
        }
    }
    var_22 -= (((-(var_3 / var_8))) % (var_11 % var_1));
    var_23 = (~var_7);
    var_24 = (max(var_24, ((~(-var_2 && -var_7)))));
    #pragma endscop
}
