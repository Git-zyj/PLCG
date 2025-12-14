/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(((var_13 | var_5) && (((var_7 ? var_13 : 15557807302869936492)))))));
    var_17 = (((((var_3 ? var_15 : var_14))) ? ((((960 ? 15557807302869936509 : var_0)) << (((max(var_12, var_3)) - 13184187475668776979)))) : var_7));
    var_18 = var_4;
    var_19 &= ((var_12 ? 3444058535708258713 : (~1)));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 &= (!(!var_10));
                    var_21 = (max((((arr_4 [i_0] [i_1]) | (arr_4 [i_0 + 1] [i_1 - 1]))), ((max(var_2, (arr_4 [i_2] [i_0]))))));
                    var_22 = ((((((~var_15) == var_1)))) != ((~((var_0 ? 1964829526465338417 : (arr_0 [i_0]))))));
                    arr_10 [i_0 + 1] [i_1 - 1] [i_0] [12] = ((!((((arr_7 [i_2] [i_1 - 1] [5] [i_0 - 1]) ? (arr_7 [i_2] [i_1 - 2] [i_0] [i_0 + 1]) : var_14)))));
                }
            }
        }
        var_23 ^= ((((~(arr_1 [10] [10]))) < (((~var_6) ? (arr_0 [0]) : (((arr_8 [i_0] [i_0 + 1] [i_0 + 1]) * var_14))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_14 [9] [i_0] [i_0] = ((~(arr_12 [i_0 - 1] [i_0 + 1] [i_0 + 1])));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_24 &= var_4;
                            var_25 = ((var_5 ? (~var_9) : (var_15 | 3970051237)));
                            var_26 *= (!var_9);
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            var_27 = (min(var_27, ((~((4901 ? var_3 : var_3))))));
            var_28 = ((2758631077 * (arr_19 [i_0] [i_0] [i_0] [i_0] [1] [i_0 + 1])));

            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                var_29 = (min(var_29, ((((arr_17 [i_0 - 1] [i_0] [i_8]) << 1)))));

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_30 [i_0] [9] [8] [9] [i_7] [i_0] = ((!((((((var_9 ? (arr_21 [i_9] [i_8] [i_8] [1] [1] [i_0] [i_0]) : var_14))) ? var_1 : (((arr_9 [i_0] [i_7] [i_8]) ? var_8 : (arr_23 [i_7] [i_8]))))))));
                    arr_31 [i_0] = (min(((max((arr_0 [i_0]), (arr_0 [i_0])))), (~var_11)));
                    arr_32 [i_0 - 1] [i_0] = ((((((arr_21 [i_0 + 1] [i_0 - 1] [i_8 + 1] [i_8] [i_8 + 1] [i_9] [i_9]) == (arr_21 [i_0] [i_0 + 1] [i_8 + 1] [i_8] [i_8 + 1] [i_9] [3])))) + var_6));
                }
            }
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_30 = ((~(((arr_17 [i_0 + 1] [i_0 - 1] [i_0 + 1]) ? (arr_2 [i_0 + 1]) : (arr_17 [i_0 + 1] [i_0 - 1] [i_0 + 1])))));
            arr_36 [i_0] [i_0] [i_10] = ((((((arr_7 [i_10] [12] [i_0] [i_0 + 1]) ? 18446744073709551613 : -27439))) ? ((((max(var_2, -27439))))) : ((var_1 ? (max((arr_35 [i_10] [i_10] [5]), (arr_5 [i_0] [i_0] [i_10]))) : (arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
            var_31 = (max(var_31, (!var_12)));
            arr_37 [i_0] [i_10] [i_0] = (((arr_15 [i_0 + 1]) ? ((var_14 * (arr_15 [i_0 + 1]))) : (((((arr_28 [i_0] [i_0]) >= (arr_15 [i_0 - 1])))))));
            arr_38 [i_10] [12] |= (~2147483628);
        }

        for (int i_11 = 1; i_11 < 10;i_11 += 1)
        {
            var_32 = (~(max(((max(var_6, var_6))), var_15)));
            var_33 = (arr_24 [i_11 + 4] [i_11]);
        }
    }
    /* vectorizable */
    for (int i_12 = 2; i_12 < 18;i_12 += 1)
    {
        arr_43 [i_12] = (((arr_41 [i_12 + 1] [i_12 - 1]) ? var_6 : var_14));
        var_34 = ((1846462923850008631 % (arr_42 [i_12 + 2])));
    }
    #pragma endscop
}
