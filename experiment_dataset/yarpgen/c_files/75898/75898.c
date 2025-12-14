/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_13 = (max(var_13, (((((min(-19264, 15954))) ? -9043 : var_0)))));
                        var_14 = ((+((((((arr_5 [i_0] [i_0] [i_0]) ? var_2 : (arr_6 [2] [i_1] [0])))) ? ((var_4 ? 9018 : var_3)) : (((((arr_3 [1] [11] [i_0]) < 0))))))));
                        arr_9 [i_0] [13] [i_2] [i_2] = min(((9223372036854775807 ? var_0 : (min(-15944, var_9)))), (((var_12 <= (((((arr_3 [i_0] [i_0] [i_0]) && var_6))))))));

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_15 = ((((3 << (-15955 + 15963)))) ? -9043 : var_8);
                            arr_12 [i_1] [i_2] [i_4] [14] &= (((arr_6 [i_0] [i_0] [i_0]) || var_3));
                            var_16 = var_1;
                            var_17 = arr_7 [i_0];
                        }
                        for (int i_5 = 3; i_5 < 11;i_5 += 1)
                        {
                            var_18 *= (min(((-9055 ? (arr_13 [i_1 - 1] [i_5 - 1] [i_5] [i_5] [i_5 - 1]) : 176)), -9065));
                            var_19 = (min(var_19, (((((((arr_0 [i_1] [i_1]) != (arr_0 [i_1] [i_1])))) + ((min(var_6, 79))))))));
                            var_20 -= (arr_4 [i_0]);
                        }
                        for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_19 [9] [i_1] [i_0] [i_1] [i_1] [i_1] = var_4;
                            var_21 += (~122);
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_0] [i_1] [2] [i_7] &= 0;
                            arr_23 [i_0] [i_1] [i_2] [i_0] [i_7] = (~(arr_17 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]));
                            arr_24 [2] [i_7] [i_2] [i_3 - 1] [12] [i_7 - 2] [6] |= var_5;
                        }
                        arr_25 [i_0] = (((((var_12 ? 9745757735751005239 : 42)) * (((max((arr_20 [i_0] [12] [i_1] [i_1] [i_2] [i_0] [i_3]), (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_30 [0] [i_1 - 2] [i_2] [i_0] = (((!16955426320807156683) - (max((((var_7 ? 469762048 : 1))), (arr_4 [i_1 - 2])))));
                        var_22 = (max(var_22, (((((((max(-123, (arr_10 [i_0] [i_0] [i_1] [i_2] [i_0]))))) ^ var_3))))));
                        var_23 += (min((((arr_13 [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 1]) * 15)), ((max((arr_13 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 1]), var_6)))));
                        arr_31 [i_0] [14] [i_0] [i_2] [i_2] [i_8] = ((-((9007198717870080 ? (max((arr_28 [i_0] [i_0] [i_2] [i_8] [i_1 - 1] [i_0]), (arr_7 [i_0]))) : var_10))));
                    }
                    for (int i_9 = 4; i_9 < 14;i_9 += 1)
                    {
                        arr_36 [i_0] [i_1 + 1] [5] [i_9] = (-((-var_0 ? (arr_17 [8] [8] [i_1 - 2] [1] [8]) : (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        arr_37 [i_0] [i_1] [i_1] = (arr_8 [i_1]);
                        arr_38 [i_0] [14] [i_2] [i_0] = (((arr_28 [1] [i_0] [i_1 - 2] [i_2] [7] [i_9]) ? (-9043 || 1152921504573292544) : ((53692 / (arr_18 [i_9] [i_9] [i_0] [i_9] [i_0] [5] [i_9 - 1])))));
                        var_24 -= ((arr_21 [i_9 - 1] [i_9] [i_9 - 2] [i_9 + 1] [i_9 - 3]) * (min((((var_1 ? -9007198717870067 : 122))), (((arr_29 [i_0] [i_2] [i_9 - 3]) ? (arr_3 [i_0] [i_2] [i_1]) : (arr_7 [i_1]))))));
                        var_25 &= ((4026531840 ? 670142947 : -var_4));
                    }
                    var_26 = (min(var_26, (arr_16 [i_0] [i_0] [i_1])));
                }
            }
        }
    }
    var_27 = (((min(var_0, (min(var_11, var_7)))) >> (((-83 * 0) * (((var_11 ? 0 : var_8)))))));
    var_28 = (max(var_28, (((var_10 ? (((((15946 ? var_4 : var_10))) ? var_12 : 9055)) : 9055)))));
    var_29 = (max(var_29, var_7));
    #pragma endscop
}
