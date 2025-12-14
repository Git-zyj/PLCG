/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(var_11 * 0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (min((max(var_7, (((arr_4 [i_1] [i_0] [i_0]) ? var_9 : (arr_3 [i_1] [i_1] [i_1]))))), (((((((arr_0 [i_0] [i_0]) | 18446744073709551615))) ? ((0 ? (-32767 - 1) : var_4)) : (arr_2 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_21 *= (max((((~(arr_6 [i_2 + 1] [i_3 - 1])))), (max(((17915987537953390818 ? var_1 : 0)), ((((arr_0 [i_2] [i_0]) ? (arr_9 [i_3] [i_3] [i_3]) : (arr_6 [i_1] [i_1]))))))));

                            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                            {
                                arr_13 [i_2] [i_1] = ((((((arr_8 [i_1]) * ((((!(arr_9 [i_0] [i_0] [i_0])))))))) ? (((((((arr_3 [i_3] [i_1] [i_0]) ? var_16 : var_13))) ? (arr_3 [i_0] [i_2] [i_4]) : (arr_3 [i_2 + 1] [i_2 + 1] [i_3 + 1])))) : ((((arr_8 [i_4]) == (arr_10 [i_4] [i_3 + 1] [i_2] [i_1]))))));
                                arr_14 [i_2] [i_3] [i_2] [i_1] [i_2] = ((((((arr_12 [i_0] [i_1] [i_2] [i_2] [i_2]) < (arr_7 [i_1] [i_2] [i_3] [i_2])))) ? ((((arr_4 [i_0] [i_1] [i_4]) ? (arr_11 [i_0]) : var_17))) : (((1619491608 + var_7) ? (arr_6 [i_3 + 2] [i_2 + 1]) : (arr_3 [i_4] [i_2] [i_1])))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [6] [i_3] [i_4] = (!var_18);
                                var_22 = (((max(36, (arr_8 [i_0]))) == ((((!((max(var_12, 0)))))))));
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                            {
                                arr_19 [1] [i_1] [i_1] [i_1] [i_2] [i_1] = var_15;
                                arr_20 [i_0] [i_0] [i_1] [3] [i_2] [i_3] [i_2] = -var_4;
                                arr_21 [i_0] [i_1] [i_2] [i_2] [16] = (arr_0 [i_5] [i_1]);
                                arr_22 [i_2] [i_1] [i_1] = var_8;
                                arr_23 [i_5] [i_3 + 2] [i_3 - 1] [i_2] [i_2] [i_1] [i_0] = 17915987537953390830;
                            }
                            var_23 |= ((((((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_1] [i_2] [i_3]) : var_11))) ? (((arr_3 [4] [i_1] [i_1]) ? var_4 : (arr_9 [i_3 + 1] [1] [5]))) : var_12))) ? (arr_11 [i_2]) : (min((((var_16 ? 27174 : (arr_2 [i_0] [i_1])))), (((arr_4 [i_3] [i_3 + 1] [i_3]) ? var_8 : (arr_4 [i_0] [i_1] [i_3]))))));
                            arr_24 [i_0] [i_0] [i_2] [7] [i_0] [i_0] = ((+((+((((arr_7 [i_0] [i_1] [i_2] [i_2]) < (arr_9 [i_0] [i_0] [i_0]))))))));
                            arr_25 [i_0] [i_2] [i_1] [i_0] &= var_16;
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_24 -= var_6;
                    var_25 = (arr_31 [i_8] [i_8] [i_7] [i_6]);
                    var_26 *= (((arr_33 [i_7] [i_8]) ? var_5 : -34));
                    var_27 *= var_9;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    arr_38 [i_6] [i_10] [20] [i_9] = (i_9 % 2 == 0) ? ((((((((arr_29 [i_9] [i_6]) + 2147483647)) >> (((arr_28 [i_10] [i_6]) - 17221021331372148771)))) << (((((arr_34 [i_9]) - (arr_33 [i_10] [i_6]))) + 47458))))) : ((((((((arr_29 [i_9] [i_6]) + 2147483647)) >> (((arr_28 [i_10] [i_6]) - 17221021331372148771)))) << (((((((arr_34 [i_9]) - (arr_33 [i_10] [i_6]))) + 47458)) + 42)))));
                    arr_39 [i_9] = (((10785 ? var_5 : (arr_31 [i_10] [i_9] [i_10] [i_6]))));
                    var_28 &= 7;
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        arr_42 [i_11] = ((-38 ? (((((((arr_29 [i_11] [i_11]) + (arr_36 [i_11] [i_11]))) + 9223372036854775807)) << (109 - 109))) : var_4));
        var_29 = (((((((var_14 + 2147483647) << (var_11 - 4397))) == 1)) ? (min(((((arr_40 [0] [i_11]) ? var_11 : var_1))), (max(1, var_3)))) : (arr_40 [i_11] [i_11])));
        var_30 = (max((arr_36 [i_11] [i_11]), (~-23030)));
    }
    #pragma endscop
}
