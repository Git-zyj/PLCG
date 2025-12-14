/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_2));
    var_13 -= (var_5 + var_2);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, (((arr_11 [i_3 - 1] [i_0 - 1] [i_2]) ? var_9 : (((1 == (arr_7 [i_3] [i_2] [i_2] [i_0]))))))));
                        var_15 = (i_0 % 2 == 0) ? ((((arr_7 [i_3 - 3] [i_0] [i_3 - 1] [i_3 + 1]) || ((((arr_7 [i_3] [i_0] [i_0] [i_0]) >> (var_3 - 8381))))))) : ((((arr_7 [i_3 - 3] [i_0] [i_3 - 1] [i_3 + 1]) || ((((((arr_7 [i_3] [i_0] [i_0] [i_0]) + 2147483647)) >> (var_3 - 8381)))))));
                        var_16 = (min(var_16, (arr_3 [i_1])));
                    }
                }
            }
            var_17 += (arr_10 [i_0 + 1] [i_1] [i_0 - 1] [i_0 + 1]);
            arr_12 [i_0] [i_0] [i_1] = (arr_8 [i_0] [i_0]);
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_18 = (((arr_13 [i_0 - 1] [i_0 + 1]) ? 1 : var_0));

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_19 += (var_4 >= var_0);
                    var_20 = (16128 != var_7);
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_21 = (max(var_21, -1));
                    arr_22 [i_0] [i_5] [i_0] [i_0] = (((arr_0 [i_0 + 2] [i_0 - 1]) != (arr_0 [i_0 + 1] [i_0 + 1])));
                }
            }
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_22 = (1 ^ 1);
                            var_23 = var_11;
                            arr_30 [i_0] = (arr_15 [i_0 - 1] [i_0]);
                            var_24 = 1;
                            var_25 = (((arr_27 [i_8] [i_9] [i_8] [i_4] [i_0]) ? (arr_9 [i_0] [i_0]) : (1 && var_6)));
                        }
                    }
                }
                var_26 = ((((((var_3 == (arr_24 [i_8] [i_4]))))) > (arr_0 [i_0 + 2] [i_0 + 1])));
            }
            var_27 = ((1 == (arr_17 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0])));
        }
        arr_31 [i_0] = (1 == var_7);
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        var_28 ^= 1;
        arr_35 [i_11] = (((arr_33 [i_11] [i_11]) ? (arr_33 [i_11] [i_11]) : (arr_33 [i_11] [i_11])));
        var_29 ^= ((arr_34 [i_11] [i_11]) - (arr_34 [i_11] [i_11]));
        arr_36 [i_11] [i_11] = (((1 ? 1 : 1)) >= (arr_33 [i_11] [i_11]));
        var_30 = ((!(825432661 | 1)));
    }
    var_31 = -var_7;
    #pragma endscop
}
