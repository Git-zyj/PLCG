/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_3 [4] = ((((((arr_1 [i_0]) ? var_3 : 18446744073709551615))) ? (((!(arr_1 [i_0])))) : (2778292336 > var_9)));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_20 = (var_3 || var_2);
            var_21 = ((var_14 ? ((42484 ? var_11 : 536854528)) : (arr_6 [i_0] [i_0 + 1])));
            var_22 = (var_14 != -4103061095);
            arr_8 [i_0] = (((arr_2 [i_0 - 1] [i_0 - 1]) + var_16));
        }

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_11 [i_2] [i_0] = ((var_8 ? (arr_5 [i_0 - 1]) : var_14));
            var_23 = ((var_16 ? (arr_0 [i_2 - 1] [4]) : var_6));
        }
        for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_24 = (((arr_17 [i_3 + 1] [i_5]) ? var_19 : var_1));
                            var_25 = (arr_16 [i_0 - 1] [i_0 - 1] [i_3 + 2] [i_4 - 1]);
                        }
                    }
                }
            }
            var_26 = ((~(arr_17 [i_3 - 1] [i_0 + 1])));
            var_27 = (arr_15 [i_0] [i_0] [4] [4]);
        }
        for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_28 = arr_23 [i_0 + 1] [i_7];
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        var_29 = (((((arr_17 [3] [14]) ? 53303 : (arr_29 [7] [i_7] [i_8] [i_9]))) / ((var_8 ? (arr_28 [i_7] [i_0 - 1] [i_7] [i_7] [i_8] [i_7]) : var_19))));
                        arr_31 [i_7] [i_7] = (((((arr_29 [0] [i_7] [0] [i_9]) ? var_12 : (arr_18 [i_0] [i_7 + 1] [i_7 + 1] [i_9]))) % ((((arr_22 [i_0] [i_0]) || (arr_7 [i_7]))))));
                        var_30 = arr_7 [3];
                        var_31 |= (((arr_7 [i_0 - 1]) << (var_12 - 36775)));
                        var_32 += var_16;
                    }
                }
            }
            var_33 *= (((arr_16 [i_0 + 1] [i_0 + 1] [i_7 - 1] [i_7]) ? var_19 : var_16));
            var_34 = var_0;
        }
        for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 3; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_35 = var_5;
                            var_36 = var_9;
                        }
                    }
                }
            }
            arr_45 [i_0] = (((arr_32 [i_0 + 1] [i_10 + 3]) ? var_18 : ((3314429401 ? -27853 : 191906210))));
            var_37 = (arr_14 [i_10 + 2]);
        }
    }
    for (int i_14 = 1; i_14 < 12;i_14 += 1)
    {
        arr_49 [8] |= (arr_22 [i_14] [i_14]);

        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            var_38 = (((!var_18) ? ((((((var_1 ? 856408920 : var_7))) ? (arr_20 [i_14] [i_14] [i_14] [i_14] [i_15] [i_15] [i_15]) : var_6))) : ((18446744073709551615 ? 18446744073709551615 : 2097151))));
            var_39 = (arr_7 [i_14]);
        }
        var_40 = (min(var_40, ((((((~(arr_2 [i_14] [i_14])))) ? (max(2155419934, (max((arr_34 [13] [10]), var_13)))) : (((~(arr_34 [i_14 - 1] [i_14])))))))));
    }
    var_41 = var_9;
    /* LoopNest 2 */
    for (int i_16 = 2; i_16 < 15;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            {
                var_42 = ((((((var_16 ? var_9 : var_13)) ^ var_16)) << ((((((arr_54 [i_16]) ? (arr_57 [i_16] [i_16] [i_16]) : var_4))) ? 15 : (arr_57 [i_16 + 2] [i_16 + 2] [1])))));
                var_43 = ((-((~((var_15 ? var_5 : var_13))))));
            }
        }
    }
    #pragma endscop
}
