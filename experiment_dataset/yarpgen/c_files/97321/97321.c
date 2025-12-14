/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((16 ? ((-4547443403333605531 ? 11 : -4)) : 1))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_17 = (max(var_17, (arr_8 [i_2] [12] [i_2] [12])));
                        var_18 |= (-9223372036854775807 - 1);
                        var_19 = (((((65535 < 1) || 0)) ? ((-var_6 ? (!3) : (((arr_7 [i_3] [i_2] [i_1 - 1] [14]) ? 5184198236416965758 : -12)))) : (((18 ? ((0 ? 3260142656 : -11)) : var_14)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_20 = ((-(1542955340 / 65535)));
                        arr_12 [i_2] &= var_8;
                    }
                    for (int i_5 = 3; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0 - 2] [i_1] [i_2] &= ((var_8 ? var_1 : (((var_13 > var_5) / (((arr_9 [i_0] [i_0] [i_0] [i_0]) ? 51824 : (arr_6 [i_0] [i_0 + 2] [i_2] [i_0])))))));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_2] [i_5 + 2] [i_5 + 2] = (arr_11 [i_1] [i_2] [i_6]);
                            var_21 = 1152921367167893504;
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_22 = (max(var_22, (((((((!0) ? (((var_13 ? var_2 : (arr_9 [13] [i_5 - 3] [i_2] [14])))) : (max(20, var_12))))) ? ((max((~var_2), 1))) : (max((575527214 + 0), ((17293822706541658111 ? var_9 : var_15)))))))));
                            var_23 = (i_0 % 2 == zero) ? (((((max(((50894 >> (((arr_19 [i_1 - 1] [i_1]) - 1205484593)))), var_14))) ? (((((~22) + 2147483647)) >> ((((var_7 ? var_13 : (arr_5 [i_0] [i_0] [i_1] [i_0]))) - 5223)))) : 17))) : (((((max(((50894 >> (((arr_19 [i_1 - 1] [i_1]) - 1205484593)))), var_14))) ? (((((~22) + 2147483647)) >> ((((((var_7 ? var_13 : (arr_5 [i_0] [i_0] [i_1] [i_0]))) - 5223)) - 6064)))) : 17)));
                        }
                        var_24 |= ((((max(var_7, (((arr_4 [i_0] [i_2]) | (arr_13 [i_2] [i_2] [i_2] [i_5])))))) ? ((max((((arr_3 [i_0] [i_0]) == 8539945779413364986)), (max(1, (arr_0 [i_2])))))) : var_7));

                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            arr_26 [i_0 + 2] [i_0] [i_2] [i_0] [i_8] = (arr_13 [i_0] [i_1] [i_2] [i_5]);
                            var_25 = (max(var_25, ((max(-9, (arr_9 [i_0 - 2] [i_1 - 1] [i_5 + 2] [i_5 + 1]))))));
                            var_26 = 1;
                            arr_27 [i_2] [i_1 + 1] [i_5 - 1] [i_2] [14] [i_1 + 1] [i_2] |= ((((-((var_11 * (arr_6 [i_8] [i_2] [i_2] [6]))))) * (max(4, 2147483647))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_2] [10] [i_9] [i_0] = arr_25 [i_1] [i_2] [i_9];
                            var_27 = (((~27562) ? (~0) : ((~(arr_4 [i_0] [i_0])))));
                        }
                        var_28 = 16777216;
                    }
                    arr_31 [i_0] [i_1] [i_2] = (((arr_25 [i_0] [i_0 - 2] [i_0 - 2]) / ((1 ? 17 : (arr_7 [i_0 - 3] [i_1 - 1] [i_2] [i_1 - 1])))));
                    arr_32 [i_0] = (((0 + 65) ? ((((max(var_7, var_15))) ? ((24465 ? var_3 : var_15)) : var_7)) : (arr_19 [i_1] [i_0])));
                    arr_33 [i_0] [i_1] [i_0] [i_2] &= (((max(0, (var_15 + var_7)))) ? (((729974856 ? var_7 : (arr_19 [i_0 + 2] [i_1])))) : (((((8 ? (arr_23 [14] [i_1] [i_2]) : -61))) ? (max(var_6, (arr_24 [i_0] [i_0 - 1] [i_1] [i_1] [i_0] [i_2]))) : (arr_8 [i_2] [4] [i_2] [i_2]))));
                }
            }
        }
    }
    var_29 = (max(var_9, (max(var_4, -var_2))));
    var_30 = var_14;
    #pragma endscop
}
