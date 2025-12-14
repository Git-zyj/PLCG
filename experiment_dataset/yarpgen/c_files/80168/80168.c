/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_4));
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    arr_10 [i_1] [i_2] = (var_2 ? -var_5 : (arr_1 [i_0 - 1] [i_1 + 1]));
                    var_21 &= ((((arr_4 [9] [9]) + 9223372036854775807)) >> ((((((arr_7 [i_0] [i_0 - 1] [i_0] [i_0 + 1]) * var_11))) / (((arr_7 [i_0] [i_0] [i_0 - 1] [i_0]) ? var_2 : (arr_0 [i_0] [i_0]))))));
                    var_22 |= (((var_12 | var_2) + (var_6 / var_8)));

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_23 = ((((var_17 != (((arr_2 [i_2] [i_2]) ? (arr_7 [i_3 + 3] [i_1] [i_1] [i_0]) : (arr_7 [3] [i_1 + 1] [i_2] [i_3]))))) ? var_18 : var_8));
                        var_24 = ((((+(((arr_2 [i_2 + 2] [i_0 + 1]) + var_15)))) << (var_1 - 608130352)));
                        var_25 = (max(var_25, ((((arr_1 [i_0 + 1] [i_0 - 1]) + ((((((var_1 ? var_1 : var_9))) ? var_18 : var_10))))))));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_26 = (var_4 + var_10);
                            var_27 = ((((var_0 ? (arr_4 [i_0 + 1] [i_1 - 1]) : var_10)) != ((-(arr_4 [i_0 + 1] [i_1 + 1])))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_28 ^= var_4;
                            var_29 = var_8;
                            var_30 = var_15;
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_31 = ((-((-(arr_13 [i_0] [i_1 - 1] [i_2] [i_3 - 1])))));
                            arr_19 [i_0] [i_1 - 1] [i_3] [i_2 + 1] [i_3] [i_3] [i_6] = ((-(arr_5 [i_2])));
                        }
                    }
                }
                arr_20 [i_0] [1] [i_1] = var_6;
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_32 = (arr_11 [i_0] [i_1] [i_1 + 1] [i_7] [i_8]);
                            var_33 *= (!var_12);
                            arr_26 [i_0] [i_1 + 1] = (var_9 ? (var_12 / var_3) : var_6);
                            var_34 &= ((-((((arr_4 [i_1 + 1] [i_0 - 1]) <= ((-(arr_4 [i_1] [i_7]))))))));
                            var_35 = ((((((~(((((arr_4 [10] [i_1]) + 9223372036854775807)) >> (((arr_5 [i_8]) - 1218934287)))))) + 9223372036854775807)) << (((((arr_23 [i_0] [i_1] [i_7 + 1]) + 64342691648058217)) - 45))));
                        }
                    }
                }
                arr_27 [13] [i_1] [i_1] = ((-((-(arr_17 [i_0 - 1] [i_1 + 1])))));
            }
        }
    }
    #pragma endscop
}
