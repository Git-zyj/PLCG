/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_13 &= arr_1 [8];
                var_14 = (max(var_14, ((((((min(13945, 51598)))) + (((((var_9 ? (arr_0 [i_0]) : (arr_1 [i_1]))) != (arr_3 [7])))))))));
            }
        }
    }
    var_15 = (max(var_15, (var_4 < -9223372036854775802)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                arr_11 [8] [8] |= ((((((((var_0 ? 53580 : (arr_10 [i_2])))) ? var_3 : ((min(-4391, var_1)))))) ? (((8378 != (arr_5 [2])))) : ((var_1 ? var_3 : -19788))));
                arr_12 [4] &= ((arr_8 [14]) ? ((19788 ? (min(9223372036854775807, (arr_6 [i_2]))) : (((-3142067959630934503 ? var_5 : 10140))))) : (((((((var_5 ? var_2 : var_8))) < ((var_5 ? var_10 : (arr_2 [i_2]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_16 = (((arr_4 [i_6] [i_5] [i_4]) ? 27573 : (!9049)));
                        arr_25 [i_4] [12] [i_6] &= (((arr_15 [i_5] [i_6 - 1] [i_7]) & (arr_13 [i_4] [i_6])));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_17 = (((arr_15 [i_4 + 1] [i_4 + 1] [i_4 - 1]) ? var_7 : (arr_15 [i_4 - 2] [i_4 - 1] [i_4 - 1])));

                        for (int i_9 = 2; i_9 < 11;i_9 += 1)
                        {
                            var_18 = 6636;
                            var_19 = ((arr_1 [i_4 - 1]) ? (arr_1 [i_8]) : (arr_1 [i_8]));
                            arr_30 [i_5] [i_5] = (((arr_6 [i_4 - 1]) ? 4285383383326709888 : (arr_6 [i_4 + 1])));
                        }

                        for (int i_10 = 1; i_10 < 12;i_10 += 1)
                        {
                            var_20 &= (arr_31 [11] [i_10] [2] [2] [i_8] [i_6 + 1]);
                            arr_33 [i_4] [i_4] [i_6] [1] [i_5] = ((!(arr_28 [i_5] [i_5])));
                        }
                        for (int i_11 = 4; i_11 < 13;i_11 += 1)
                        {
                            var_21 = (max(var_21, (8218713203186128228 + -8218713203186128232)));
                            arr_38 [i_11] [i_5] [i_8] [i_8] [i_6] [i_5] [i_4] = ((47743 ? ((-13841 ? 4285383383326709860 : var_11)) : -3153677473061900582));
                            var_22 = var_6;
                            arr_39 [i_4] [i_5] [11] [i_5] [i_11] [7] [7] = var_6;
                            arr_40 [i_4] [i_4] [i_4] [i_4 - 2] [i_5] = ((arr_22 [i_5]) ^ (arr_36 [i_4] [i_4 - 2] [i_8] [i_11] [i_11]));
                        }
                        var_23 = (((-(arr_26 [i_6] [i_6 + 1] [7]))));
                    }
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        var_24 = (arr_29 [i_4] [13] [i_6] [i_6] [3] [i_4] [i_4]);
                        arr_44 [i_4] [i_4] [i_4] [i_5] = (min(var_4, (arr_10 [i_4])));
                        arr_45 [i_5] [1] [i_5] [i_12] = ((!(2900 & 19520)));
                    }
                    arr_46 [i_5] [8] [i_5] = (((!218) & -30008));
                }
            }
        }
    }
    #pragma endscop
}
