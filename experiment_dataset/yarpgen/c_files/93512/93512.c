/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (min(3674071197, 47303));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_3] = (((var_5 / 192) ? ((min((-32767 - 1), (arr_10 [i_0] [i_1] [i_2 + 1] [i_1])))) : (var_14 ^ var_11)));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            var_18 = (((arr_7 [i_3 - 1] [i_2] [i_2 - 2]) && (arr_4 [i_3 - 1] [i_2 - 1] [i_2 - 1])));
                            var_19 = 0;
                            var_20 += (((arr_13 [i_4 - 2] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4]) ? var_0 : ((((arr_1 [i_0] [i_0]) && (arr_13 [14] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            {
                var_21 += (((((1 << (((-2147483647 - 1) / -9223372036854775801))))) ? var_11 : (((!((((arr_12 [i_5] [12] [i_5] [i_5 + 1] [i_5] [i_5 + 1]) - var_3))))))));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    arr_22 [i_5] = (32765 - 229);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_29 [i_5] [i_6] [i_7] [i_6] = (-(arr_7 [i_5] [i_6 + 1] [i_6 - 1]));
                                arr_30 [i_5] [i_8] [i_7] [i_6 + 3] [i_5] = (((((var_3 ? (arr_20 [i_5]) : 20701))) * (7762809172981451271 ^ var_13)));
                                arr_31 [i_5] [i_5] [i_7] [i_8] [i_9] = ((var_16 / (arr_10 [i_6] [i_7] [i_8] [i_9])));
                                arr_32 [i_5] [i_6] [i_7] [i_8] [i_9] = (((-32767 - 1) ? 49629 : 12));
                            }
                        }
                    }
                    var_22 = 0;
                }
                arr_33 [i_5] [i_5] [i_5] = var_0;
                arr_34 [i_5] = (arr_24 [i_5] [6] [i_6 + 2] [i_5]);
                var_23 = (i_5 % 2 == zero) ? ((((((arr_12 [i_6 + 1] [i_5] [i_5] [i_5] [i_5] [i_5 - 1]) + 9223372036854775807)) << (((((arr_20 [i_5]) + 31633)) - 17))))) : ((((((arr_12 [i_6 + 1] [i_5] [i_5] [i_5] [i_5] [i_5 - 1]) + 9223372036854775807)) << (((((((arr_20 [i_5]) + 31633)) - 17)) - 12675)))));
            }
        }
    }
    var_24 = var_13;
    var_25 = var_16;
    #pragma endscop
}
