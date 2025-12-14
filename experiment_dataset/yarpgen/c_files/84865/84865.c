/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [1] [i_0] = var_0;

        /* vectorizable */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_15 = ((255 || (arr_7 [i_0] [i_2 + 1] [i_1 - 3])));
                        arr_12 [i_0] [i_1] [i_2 + 2] [i_0] [i_0] [i_0] = (arr_8 [i_0] [i_0] [i_2]);
                        arr_13 [i_3] [i_2 - 1] [i_2] [13] [i_0] [i_0] = (arr_11 [i_0] [i_1] [i_1] [8]);
                        arr_14 [i_0] [6] [6] [i_3] [i_0] = (((!var_9) >> (((((arr_8 [i_3] [i_1] [i_0]) ? 156 : var_3)) - 151))));
                    }
                }
            }
            var_16 = (~254);

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                arr_17 [i_1] [i_1] [i_1] = (~-69);
                var_17 = ((var_11 * var_11) ^ (((var_0 != (arr_6 [16] [i_0])))));
                var_18 = (max(var_18, var_13));
                arr_18 [i_4] = ((((arr_0 [i_0]) + 2147483647)) >> (-2820834609155648107 - 1327912331));
                arr_19 [i_0] [i_1] = 85;
            }
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                var_19 = (arr_20 [i_5 - 1] [i_1 - 2] [i_1 + 1]);
                var_20 = (!var_4);
            }
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                arr_25 [i_0] [i_1] [1] [i_6] = (arr_21 [i_0] [i_1] [i_1] [i_1]);
                var_21 *= (((arr_10 [i_6 + 2]) / (arr_21 [i_1] [i_1] [i_6 - 3] [9])));
            }
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 16;i_8 += 1)
                {
                    {
                        var_22 = (min(var_22, var_4));

                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            arr_33 [i_9] [1] [3] [16] [i_1] [i_9] = -var_4;
                            var_23 = (i_9 % 2 == zero) ? ((((((~var_0) + 2147483647)) << (arr_31 [i_1] [i_9] [i_1 - 1] [i_1] [i_7] [i_8 - 3] [i_8])))) : ((((((~var_0) + 2147483647)) << (((arr_31 [i_1] [i_9] [i_1 - 1] [i_1] [i_7] [i_8 - 3] [i_8]) - 1)))));
                            var_24 = (max(var_24, (arr_1 [i_8 - 1])));
                        }
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_25 ^= ((67 ? var_0 : ((var_9 * (arr_21 [i_0] [i_7 + 1] [i_8] [i_0])))));
                            var_26 = (((arr_27 [i_0] [i_1 - 3] [i_7 + 1]) ? var_7 : (arr_27 [i_0] [i_0] [i_7 + 3])));
                        }
                        for (int i_11 = 1; i_11 < 14;i_11 += 1)
                        {
                            arr_39 [i_11] = ((~(arr_8 [i_0] [i_1] [i_7 + 2])));
                            arr_40 [i_11] = (((var_8 ^ (arr_1 [i_0]))));
                            var_27 = (min(var_27, (arr_29 [11] [i_11] [i_11 - 1] [11])));
                        }
                    }
                }
            }
        }
        arr_41 [i_0] [5] = (((-var_0 && var_11) % var_6));
        var_28 = ((255 % (((var_9 < (arr_34 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (int i_12 = 3; i_12 < 11;i_12 += 1)
    {
        var_29 &= (max(var_5, var_13));
        arr_44 [i_12] = (((var_6 ? (arr_11 [i_12] [i_12] [i_12 - 1] [i_12]) : (arr_11 [i_12] [15] [i_12 + 1] [i_12]))));
        arr_45 [i_12 - 3] = ((((((63 < (arr_42 [i_12 + 1]))))) > (((arr_42 [i_12 - 1]) ? (arr_42 [i_12 + 1]) : 70))));
        var_30 = (((((!(arr_26 [3] [i_12 - 3] [i_12 - 2] [i_12])))) >> (((arr_5 [i_12 + 1] [i_12 + 1] [i_12 + 1]) - 6245701007659363964))));
        arr_46 [i_12] = 8191;
    }
    var_31 += var_9;
    #pragma endscop
}
