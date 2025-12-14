/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_20 = (min(var_20, ((min((arr_0 [i_0]), (((((((arr_0 [i_1]) - (arr_5 [i_0] [i_0] [i_0])))) ? (arr_0 [i_1]) : (((arr_0 [i_0 - 2]) + -24725))))))))));
            var_21 = (min(var_21, -14));
        }
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            var_22 *= 1;
            arr_10 [i_0] [i_0 + 4] = (min((arr_6 [i_0] [i_2]), (((var_6 ? var_17 : var_18)))));
        }
        var_23 -= 620153886;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_24 |= (arr_7 [i_0] [i_0 - 2]);
            arr_14 [12] [i_3] [12] = var_6;
            var_25 = (arr_13 [i_0 + 2] [i_3]);
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_24 [i_0] [i_0] [20] [5] = (arr_3 [i_0] [i_4]);
                    var_26 -= (max(var_4, ((-(((arr_5 [i_0] [i_0] [i_0]) / 1))))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_27 = (((var_3 * var_12) & -22));
                    var_28 ^= (arr_3 [i_0] [i_0]);
                }
                arr_27 [9] [i_4] = (arr_16 [i_5] [i_0] [i_0]);
                var_29 -= (((((min(1, var_16)) ^ var_3))) + (min((~var_8), (1 - var_10))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_30 = (min((arr_29 [i_9 - 1] [i_9 - 2] [1] [1] [i_9 - 4]), 44));
                            arr_35 [i_0] [i_0] [i_9] [12] [i_8] [i_9] = ((~(arr_34 [i_0] [i_0])));
                            var_31 = (min(var_31, (~57342)));
                        }
                    }
                }
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_38 [i_0 + 2] = var_19;
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            var_32 += (max(var_6, (arr_7 [i_0 - 1] [i_11 + 1])));
                            arr_46 [i_0] [i_4] [20] [i_0] [i_11] [i_11] = ((-((8193 ? (((arr_3 [i_0] [11]) - var_18)) : (min((arr_21 [i_11] [i_4] [i_10]), var_3))))));
                        }
                    }
                }
            }
            var_33 = var_19;
            arr_47 [i_0] [1] [i_4] = (max((min((arr_34 [i_0 + 4] [i_0]), (!11452693319088415751))), (var_0 | -var_18)));

            for (int i_13 = 1; i_13 < 19;i_13 += 1)
            {
                var_34 += var_0;
                arr_50 [13] [1] [i_0 + 4] [13] |= (((((31555 / 1) ? 11452693319088415751 : (!-1596))) / (((~(arr_40 [i_13] [i_13 + 2] [i_4] [i_0 + 4]))))));
            }
            arr_51 [i_0] [i_4] = (!(((arr_48 [i_4] [i_0 + 1]) < (arr_17 [i_0] [i_0 + 4] [i_0 - 2]))));
        }
        for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
        {
            var_35 = (((arr_26 [14] [i_0] [i_14] [i_0 + 1] [i_0]) / ((var_14 ? (arr_53 [i_0]) : (arr_37 [i_0] [i_0] [i_0] [i_14])))));
            var_36 = var_11;
        }
        for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
        {
            arr_56 [i_0] |= (!var_3);
            arr_57 [i_0 + 4] |= (((~var_2) ^ ((var_1 ? var_5 : (arr_32 [i_0 + 1] [i_0] [i_0])))));
            var_37 |= (((((((-(arr_40 [i_0] [i_15] [i_0 + 4] [i_0 - 2])))) ? var_9 : (arr_28 [i_0] [8] [i_0 + 1] [i_15] [i_0]))) >> (((min(((var_2 ? 11452693319088415751 : (arr_26 [i_15] [i_15] [i_15] [i_15] [i_15]))), ((max((arr_44 [i_0 + 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0]), var_18))))) - 43943))));
        }
    }
    var_38 = var_2;
    var_39 -= var_6;
    #pragma endscop
}
