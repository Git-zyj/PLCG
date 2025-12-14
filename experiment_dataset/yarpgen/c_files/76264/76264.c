/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    arr_10 [6] [i_2] [i_1] = -var_7;
                    var_18 *= (arr_3 [i_0 - 1]);
                    arr_11 [i_0] [4] [i_2] |= ((var_16 < (((!(!11594))))));
                }
            }
        }
        arr_12 [i_0] = ((((((arr_8 [10] [i_0] [i_0] [i_0]) ? (((arr_8 [0] [i_0 + 2] [0] [10]) ? 192 : (arr_4 [i_0 + 1]))) : (~-8076911001716324817)))) && (((-(min(65535, (arr_4 [i_0]))))))));
    }
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        arr_16 [i_3] = ((((min((min((arr_14 [i_3]), -4843117731112952371)), (arr_15 [i_3 - 1])))) / var_13));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        var_19 = (min(((12 ? 2499013704 : 192)), (((var_8 ? (arr_17 [i_3 - 2] [i_4 + 2] [i_5]) : (arr_17 [i_3] [i_4 - 1] [i_5]))))));

                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            arr_30 [i_3] [i_4] [i_5] [i_4] [i_6] [6] [i_7] = var_8;
                            var_20 |= ((-((~(11594 / 63)))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_21 = (((~11594) < -43));
                            arr_33 [i_3] [i_4] [i_5] [20] [i_8] = ((var_4 ? 11607 : (arr_21 [i_4] [i_4] [i_4] [i_8])));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_22 = (arr_25 [5] [i_5] [i_5] [i_5] [i_4] [i_5]);
                            var_23 *= 247;
                            var_24 = (min(var_24, 0));
                        }
                        var_25 = ((!(arr_20 [i_3])));
                        var_26 ^= ((((((18 / 2019604427) && (((13377740384271006088 ? 11596 : (arr_22 [i_3 - 2] [i_4 + 2] [i_5]))))))) < (min(-11595, var_0))));
                    }
                }
            }
        }
        var_27 = (max(var_27, (((var_6 ? ((((arr_18 [i_3] [i_3 - 2] [i_3]) ? (arr_18 [i_3] [i_3 - 2] [i_3]) : var_17))) : 762131382696089532)))));
    }
    var_28 = (min((18446744073709551613 * var_13), ((-11594 ? var_12 : (4503599358935040 / var_17)))));
    var_29 = (((((var_2 ? 3672663175 : (min(var_9, 18446744073709551615))))) ? (((min(var_15, 9)))) : ((-((var_15 ? var_17 : var_14))))));

    for (int i_10 = 2; i_10 < 11;i_10 += 1)
    {
        arr_38 [i_10 - 2] [i_10 + 2] = (((((((arr_18 [i_10] [i_10] [i_10]) / var_2)))) ? ((134737713 ? 9 : 11594)) : -43));
        arr_39 [i_10 - 2] = var_2;
    }
    for (int i_11 = 3; i_11 < 11;i_11 += 1)
    {
        arr_43 [i_11] = ((((arr_14 [i_11 - 1]) ? (-26995 < 0) : 32)));
        arr_44 [i_11] = (0 < 14);
    }
    #pragma endscop
}
