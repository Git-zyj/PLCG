/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((~var_8) ? var_8 : var_0)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0]);
        arr_5 [i_0] = ((~(min(((((arr_3 [i_0]) ? var_11 : 9))), ((4294967287 ? var_9 : var_12))))));
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1)
    {
        arr_9 [i_1] = (((arr_6 [i_1]) ? (((arr_6 [i_1]) ^ (arr_6 [i_1]))) : ((~(arr_6 [i_1])))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_12 [i_2] [2] |= var_9;
            arr_13 [i_1] = var_8;
            var_17 = 255;
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_18 ^= (~97);
            arr_17 [i_1] [i_1] = ((((~((var_15 << (((arr_8 [i_1]) + 137)))))) << (var_0 - 3016432547)));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_19 ^= (arr_19 [i_7] [i_7]);
                            var_20 = (max(var_20, (arr_8 [i_1 + 1])));
                            var_21 = max(((((((arr_26 [i_7] [i_6] [i_6] [15] [15] [i_1]) & var_14))) ? ((((var_15 || (arr_19 [i_1] [i_1]))))) : ((var_7 ? (arr_21 [8] [16] [i_5] [16]) : (arr_25 [i_1 - 1] [i_1 - 1] [i_1 - 1] [15]))))), (((!(((~(arr_19 [i_1] [i_4]))))))));
                        }
                    }
                }
            }
            arr_28 [i_1] [i_4] = (max(16862280661121185901, 28300));
            arr_29 [i_1] = ((((arr_11 [i_1 - 3] [i_1 - 3] [i_4]) == var_6)) ? ((max(-var_15, (min(var_5, (-2147483647 - 1)))))) : (arr_11 [i_1 + 1] [i_1 - 3] [i_4]));
            arr_30 [15] [15] [i_1] = ((((((arr_14 [i_1 - 1] [i_1 + 1] [i_1 - 2]) ^ (arr_14 [i_1 + 2] [i_1 - 3] [i_1 + 2])))) ? (((arr_14 [i_1 - 3] [i_1 - 3] [i_1 + 1]) ? (arr_14 [i_1 + 2] [i_1 - 1] [i_1 + 2]) : (arr_14 [i_1 - 3] [i_1 - 3] [i_1 - 1]))) : (arr_14 [i_1 - 1] [i_1 + 2] [i_1 - 1])));
        }
        arr_31 [i_1] = 3;
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
    {
        arr_34 [i_8] [i_8] = var_13;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    var_22 = (max(var_22, (((!((((arr_32 [i_8]) ? (arr_32 [i_8]) : (arr_32 [i_10])))))))));
                    var_23 = ((((!(arr_39 [i_9] [i_9] [i_9]))) ? (-9223372036854775807 - 1) : (arr_39 [i_10] [i_9] [i_8])));
                    var_24 += ((1046895067 ? 65535 : 4294967286));
                }
            }
        }
        var_25 = ((-1 ? -28297 : ((((max(32767, -4422931254701738163))) ? (max(var_15, (arr_37 [i_8] [i_8] [i_8]))) : ((var_14 ? (arr_32 [i_8]) : var_9))))));

        for (int i_11 = 4; i_11 < 19;i_11 += 1)
        {
            var_26 = ((var_11 || ((((arr_40 [i_8] [i_11]) ? (arr_42 [i_11 + 1] [i_11 - 4]) : (max((arr_39 [i_8] [18] [i_11]), var_6)))))));
            arr_44 [i_8] = (arr_36 [i_8]);
            arr_45 [i_11 + 1] = ((var_3 ? ((~(((arr_33 [i_8] [i_8]) ? (arr_40 [i_8] [1]) : var_9)))) : (((max((arr_43 [i_8] [i_11 - 2]), (arr_43 [i_8] [i_11 - 2])))))));
            var_27 -= (min(((~(arr_32 [i_11 - 1]))), (~0)));
        }
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            var_28 -= ((~(((!(arr_46 [i_8] [i_8]))))));
            var_29 = (max((max((~1), (min(var_15, var_0)))), (((!((min(var_14, 1023))))))));
        }
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
    {
        var_30 = ((-((198 ? (((max((arr_49 [i_13]), var_12)))) : (min(var_5, var_7))))));
        arr_50 [i_13] [i_13] = ((((~(arr_43 [i_13] [i_13]))) | (((arr_43 [i_13] [i_13]) ? (arr_43 [i_13] [i_13]) : (arr_43 [i_13] [i_13])))));
    }
    /* LoopNest 3 */
    for (int i_14 = 4; i_14 < 12;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                {
                    arr_59 [i_14 + 1] [i_14 - 3] [i_14 - 3] = ((~(arr_21 [i_14] [i_14 - 2] [i_14] [i_14])));
                    arr_60 [11] [i_15] &= (min((((-((var_10 ? (arr_11 [i_14] [i_15] [i_16]) : (arr_48 [i_14] [i_15])))))), ((~(arr_41 [i_14 - 1] [i_14 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
