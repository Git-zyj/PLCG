/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0 - 2] = (((((arr_1 [i_0 - 1]) || 2099008267)) ? (((arr_1 [i_0 - 1]) ? var_3 : (arr_1 [i_0 + 1]))) : (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 1])))));
        arr_3 [i_0] = ((-(arr_1 [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_20 = (((arr_12 [i_0 + 1] [2] [i_3 - 1]) >> (var_7 - 20179)));
                            arr_13 [i_3] [i_3] = ((3292 ? var_10 : 2255));
                        }
                    }
                }
            }
            var_21 += (arr_9 [8] [i_1] [i_0] [i_1]);
            var_22 = (arr_12 [i_0 - 2] [i_0] [i_0 - 1]);
            arr_14 [i_0] [i_0 + 1] [i_0 + 1] = (3292 / var_0);
            arr_15 [i_1] [i_1] [i_1] = arr_10 [0] [i_1] [i_0];
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    {
                        var_23 = ((var_10 ^ (arr_21 [i_7 - 2])));
                        arr_25 [i_7] = var_11;
                        var_24 = (((!-50) < (((arr_16 [i_0] [i_5] [4]) & 2977732871))));
                    }
                }
            }
            var_25 = (min(var_25, (((~(arr_7 [i_0 - 1] [i_0] [i_5] [i_5]))))));
            arr_26 [i_0] [i_0] [8] = ((~(arr_6 [i_0] [i_0 - 2])));
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
        {
            var_26 ^= (((arr_27 [i_0 + 1] [i_0 - 1] [i_8]) ? (arr_21 [i_0 + 1]) : (arr_19 [i_0 + 1])));
            var_27 &= var_13;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 12;i_10 += 1)
                {
                    {
                        arr_36 [i_9] [i_9] [i_9] [i_9] &= (arr_34 [i_8] [i_9] [i_10 - 2]);
                        arr_37 [i_0] [5] [i_9] [6] [i_9] [i_9] = -50;
                    }
                }
            }
            var_28 = ((((min(var_8, ((var_6 ? (arr_7 [i_8] [i_8] [i_0] [i_0]) : var_18))))) && (arr_5 [i_0] [i_8])));
            arr_38 [i_0] [i_8] = (max((!var_14), (18494 != var_16)));
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
        {
            var_29 = max((((arr_28 [i_0 + 1] [i_11]) ? (arr_28 [i_0 + 1] [i_11]) : var_7)), (((arr_28 [i_0 + 1] [i_0]) ^ (arr_28 [i_0 + 1] [i_11]))));
            var_30 = (((max((max(var_5, -4932)), var_17))) && ((((arr_39 [i_0] [i_0 - 1] [i_0 + 1]) ? var_13 : (arr_4 [i_0 - 1] [i_0])))));
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    {
                        var_31 = ((~(max(625120183, 58))));
                        arr_47 [i_13] = ((((((!var_15) ? var_11 : (((min((arr_18 [i_11] [i_11]), -59))))))) ? (!74) : (max((arr_44 [i_12 - 1] [10]), (~4932)))));
                        var_32 -= ((+(((!((((arr_21 [i_11]) ? 27 : 4932))))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 11;i_15 += 1)
                {
                    {
                        var_33 = -18495;
                        var_34 -= (max((arr_9 [10] [i_11] [i_11] [i_0 + 1]), (min((arr_9 [i_15] [i_11] [i_11] [i_0 - 2]), (arr_9 [i_15 + 2] [i_0] [i_0] [i_0 - 2])))));
                        arr_53 [i_14] [i_14] [i_14] [i_15] = (max(((((-4932 ? (arr_33 [7] [i_11]) : (arr_16 [i_0] [i_14] [i_14]))) * var_6)), (var_11 >= var_2)));
                        var_35 = (max(var_35, (((((min((arr_50 [i_15 + 3] [i_15 - 2] [i_15 - 2] [i_15 - 1] [i_11]), var_7))) & (((!((min(var_15, var_17)))))))))));
                    }
                }
            }
            arr_54 [i_11] [i_11] = (arr_21 [i_0 - 2]);
        }
        var_36 -= ((((((max(var_0, var_16))) ? var_12 : ((((arr_17 [i_0 + 1] [i_0]) / (arr_28 [i_0] [i_0])))))) >> ((((21709 + 18446744073709551615) > -468337081)))));
        arr_55 [i_0 + 1] = ((-(max(1950, (min(-8639876294408430728, 136))))));
    }
    for (int i_16 = 0; i_16 < 24;i_16 += 1)
    {
        arr_59 [i_16] |= (var_19 ? (((-(arr_58 [i_16])))) : -var_16);
        arr_60 [i_16] = (0 & 0);
        var_37 = var_17;
        arr_61 [i_16] = -2099008268;
    }
    var_38 = (-2099008268 ? 0 : -2099008268);
    var_39 = (~var_0);
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 24;i_17 += 1)
    {
        for (int i_18 = 1; i_18 < 23;i_18 += 1)
        {
            {
                var_40 = ((!((((arr_66 [i_18 + 1] [i_18] [i_18 - 1]) ? (arr_66 [i_18 - 1] [i_17] [19]) : var_2)))));
                arr_67 [i_18] [i_18] = (max((((arr_64 [i_17]) ? 58 : (arr_64 [i_17]))), (~1)));
            }
        }
    }
    #pragma endscop
}
