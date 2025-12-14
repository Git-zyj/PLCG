/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_11 = ((~(1 * var_1)));
        var_12 = (max(var_12, ((((min((~-1275186808737508776), (((arr_2 [i_0]) & var_4)))) & (arr_2 [i_0 + 1]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    {
                        var_13 = ((-94 ? 1 : 4));
                        arr_12 [i_1] [i_1] [i_3 - 2] [i_1] = (arr_0 [i_1 + 1]);
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            arr_17 [4] [i_5] [10] |= -1;

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_22 [i_5] [i_1] [6] = ((var_9 ^ (arr_16 [i_1 + 1] [i_5])));
                arr_23 [i_1] [6] = var_4;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_14 = -26;
                            var_15 = (max(var_15, ((((((arr_5 [i_7]) * (arr_16 [i_5] [i_5]))) * var_0)))));
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_16 |= ((~(arr_9 [i_5] [i_6] [i_9])));
                    arr_33 [i_1] [i_1] [i_1] = (arr_9 [i_1 - 1] [i_5] [i_9]);
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    var_17 = ((~(arr_21 [i_1 + 1] [i_1 + 1] [i_1 - 1])));
                    var_18 ^= 1036979949146812953;
                    var_19 = ((+(((arr_4 [i_1] [i_1]) / 58))));
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    var_20 = (max(var_20, (arr_8 [i_1] [i_5] [i_6])));
                    var_21 = (((arr_13 [2] [i_1 + 1] [i_6]) ? var_6 : (arr_13 [i_1] [i_1 + 1] [i_6])));
                }
            }
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                arr_44 [i_1] [i_1] [i_1] [i_12] = 2;

                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    var_22 = (max(var_22, (((1036979949146812953 || (arr_16 [i_1 + 1] [i_1]))))));
                    arr_49 [7] [i_1] [i_13] = (253 % var_8);
                }
                for (int i_14 = 3; i_14 < 10;i_14 += 1)
                {
                    var_23 += (((arr_30 [i_1 + 1] [i_14 - 3]) != var_8));
                    var_24 = ((var_10 * (arr_10 [i_1] [i_1] [i_12])));
                    arr_54 [i_1] [11] [i_12] [i_14] = (((arr_43 [i_1] [i_1 + 1] [i_14 + 1]) ? (arr_42 [i_1 + 1] [i_1 - 1] [i_14 - 2] [i_14 + 1]) : 1));
                    arr_55 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_51 [i_1 + 1] [i_14 + 3] [i_14 + 3] [i_12]) ^ -4));
                }
                arr_56 [i_1] = (var_7 && var_3);
            }
            arr_57 [i_1] [i_1] [1] = -1036979949146812949;
            var_25 = var_6;
            arr_58 [i_1] = var_0;
        }
        for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
        {
            arr_62 [i_1] [12] = (((((arr_9 [i_1] [i_15] [i_15]) + -1036979949146812943)) / (var_6 - var_1)));
            var_26 = (((arr_7 [i_1]) + (arr_7 [i_1])));
            var_27 = ((arr_40 [i_1 - 1]) ? var_5 : ((~(arr_21 [i_15] [i_15] [i_1]))));
            arr_63 [i_1] [i_1] [i_1] = var_10;
        }
        for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
        {
            var_28 = (arr_60 [i_16] [i_1 + 1] [i_1 - 1]);
            var_29 = -1;
            arr_67 [i_1 + 1] [i_1] = var_8;
        }
    }
    var_30 = (max(-3432278167439423385, ((((1 <= var_10) || (-4011 * var_6))))));
    var_31 *= max(var_6, -4011);
    var_32 = ((!((min((!var_9), ((3827231831 ? var_5 : var_5)))))));
    #pragma endscop
}
