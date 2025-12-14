/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (!var_4);
    var_19 = var_4;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_20 = var_2;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_21 ^= -var_6;
                        arr_12 [i_2] [20] [i_1] [i_2] = (arr_3 [i_0 + 1] [i_0 - 1]);
                        arr_13 [i_2] [i_2] = (!var_9);
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_22 = (!1);
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_26 [i_5] [i_0] [18] [i_0] [i_5] = ((411578594034655240 & (arr_5 [i_5] [i_6 - 2] [i_7] [i_7])));
                            arr_27 [i_7] [18] [i_7] [i_4] &= var_0;
                            var_23 = (~var_7);
                            var_24 += (((arr_8 [10] [i_0 + 2] [i_6 + 2] [i_0 + 2]) >> (((arr_5 [i_0 + 2] [i_0 + 1] [i_6 + 1] [i_6]) - 2356401247))));
                        }
                    }
                }
            }

            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                var_25 = (~1);

                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_26 *= ((var_9 ? (arr_3 [4] [i_4]) : (arr_3 [i_0] [i_9])));

                    for (int i_10 = 3; i_10 < 21;i_10 += 1)
                    {
                        var_27 ^= var_9;
                        var_28 = (min(var_28, var_9));
                        arr_36 [i_9] [i_4] [i_4] [1] = (0 % 2848445736854247333);
                    }

                    for (int i_11 = 1; i_11 < 20;i_11 += 1) /* same iter space */
                    {
                        var_29 += ((-(arr_38 [i_0] [i_0 + 2] [i_4] [i_0] [1] [i_0] [9])));
                        var_30 ^= ((var_12 ? ((var_17 ? 32745 : 1)) : var_1));
                        var_31 = (~var_0);
                        var_32 += (!(arr_9 [i_0 + 1] [i_0 + 1] [i_11 + 1] [i_11 + 1]));
                    }
                    for (int i_12 = 1; i_12 < 20;i_12 += 1) /* same iter space */
                    {
                        var_33 = (arr_37 [i_0 + 2] [i_4] [i_8] [i_9] [i_12]);
                        var_34 = var_10;
                    }
                }
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    arr_46 [15] [i_4] [i_4] [i_4] [i_4] = (var_0 ? var_1 : (arr_7 [i_0 + 1] [i_4] [i_4] [i_0 - 1]));
                    var_35 ^= (((arr_20 [2] [i_4] [i_4] [i_8] [i_13] [i_13]) / (arr_20 [i_0] [i_4] [i_4] [i_4] [19] [i_13])));
                }
            }
        }
        var_36 = ((((1 ? 0 : 1)) % (arr_33 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 2] [4] [5])));
    }
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        arr_50 [i_14] = ((var_4 && ((((169 ? var_4 : 55866))))));
        var_37 = ((((((!(arr_49 [i_14] [i_14]))))) > ((var_5 & (arr_49 [i_14] [i_14])))));
    }
    #pragma endscop
}
