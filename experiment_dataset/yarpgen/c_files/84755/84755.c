/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    var_10 = ((((!(arr_0 [i_1]))) ? (arr_3 [i_2] [3] [i_0]) : (((!(arr_0 [i_0 - 1]))))));
                    var_11 = ((((((((164 >> (((arr_6 [i_0] [i_0] [i_0] [i_0]) + 6294))))) ? (((arr_1 [i_0]) ? (arr_0 [i_2]) : (arr_1 [i_0]))) : (!var_0)))) ? ((65535 % ((~(arr_1 [i_0]))))) : ((max((arr_0 [i_2]), (((var_1 + 2147483647) << (((arr_4 [i_0 - 4] [i_1] [i_2]) - 78)))))))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            arr_10 [i_0] [i_0 - 3] = (max(((((max((arr_2 [i_0] [4] [8]), (arr_3 [i_0] [i_0] [i_3])))) ? (((-(arr_1 [i_0])))) : (arr_9 [i_0] [i_0] [i_0]))), (arr_8 [2] [i_3] [i_3])));
            var_12 = (((((arr_3 [i_0] [i_0] [i_3]) ? (arr_5 [i_0] [i_0] [i_0 - 1] [i_0]) : var_0))) ? (min((~var_4), (arr_5 [i_0] [i_3] [i_3] [i_3]))) : -16281313108672358747);
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_13 = ((((((!3) * ((var_0 % (arr_11 [i_0] [i_0] [i_0 - 2])))))) ? 14 : (((-4 ? 114 : (arr_12 [i_0 - 3]))))));
            var_14 = ((((((((133 ? 4516821737854294582 : (arr_1 [i_0])))) ? ((min((arr_14 [i_4] [i_0]), (arr_14 [i_0] [i_0])))) : (((arr_3 [1] [i_4] [i_4]) / (arr_0 [i_0])))))) ? 133 : (arr_4 [i_0 - 3] [i_0 - 3] [i_0 - 2])));
            var_15 = (max((max(114, 13528624306884389564)), (((98 ? -37 : 65535)))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        var_16 ^= -173;

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_17 = 2147483622;
                            arr_23 [i_5] [i_7] [i_7] [i_7] [i_5] = ((0 ? 76 : -2038574407));
                            var_18 = (~var_0);
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            arr_27 [i_8] = (((arr_0 [i_0]) ? (arr_5 [i_8] [i_5] [i_4] [i_0]) : var_5));
                            arr_28 [2] [i_4] [2] [i_4] [i_4] [i_4] [i_8] = (((arr_18 [i_0] [i_0 - 2] [i_0] [i_0] [i_0]) + (arr_20 [i_0 + 1])));
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 9;i_9 += 1)
                        {
                            var_19 -= (-12442474025512693420 ? (arr_6 [i_0 + 1] [i_9 - 2] [i_9] [i_9]) : (arr_25 [i_0 + 1] [i_6]));
                            var_20 = (((arr_1 [i_0 - 3]) || (((13935110340329693861 % (arr_12 [i_0]))))));
                            var_21 = (max(var_21, (((-3543647115258063016 ? (((arr_26 [i_0] [i_4] [i_5] [i_0] [i_9]) ^ var_3)) : (arr_24 [i_0] [i_4] [i_5] [i_0] [i_0] [i_9 - 2] [i_5]))))));
                            var_22 = ((-27811 ? var_4 : ((-(arr_14 [i_0] [i_4])))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_23 = (13913004151483357806 * 1640082576);
            var_24 = ((-(((!(arr_7 [i_0 - 3] [i_0 - 3] [i_0 - 1]))))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    {
                        var_25 = (max(var_25, (((5 ? 0 : 4605)))));
                        var_26 = (max(var_26, ((((-(arr_20 [i_0])))))));
                        var_27 = (min((min(((195 ? (arr_12 [i_10]) : 108)), ((((arr_35 [i_10]) == 3))))), (-122 % 120)));
                    }
                }
            }
            var_28 = (((((min(((-(arr_5 [i_0 - 4] [i_0] [i_10] [i_10]))), (~114))) + 9223372036854775807)) >> ((((-(((arr_26 [i_0] [i_0] [i_10] [i_0] [i_10]) ? var_9 : (arr_2 [i_0] [2] [i_0]))))) - 18446744073709537442))));
        }
        var_29 = (arr_34 [i_0 - 2]);
        var_30 = (arr_20 [i_0]);
    }
    var_31 = 1556922545;
    #pragma endscop
}
