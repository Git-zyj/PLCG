/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_20 = ((!(var_0 || -10776)));
        var_21 = (~-1411943260);
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((var_5 && ((((var_4 * (arr_5 [i_1])))))));
        arr_9 [9] = 92;
        arr_10 [i_1] = arr_4 [i_1 + 1];
        var_22 |= (max((((!16256) ? (var_10 ^ 16256) : -32640)), (arr_6 [i_1 - 1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 3] = -14520;
            var_23 ^= var_2;
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_24 &= ((((min(11638, 16238))) ? ((((max(-16251, var_3))) ? 18 : (arr_11 [i_1 - 3] [i_3 + 1]))) : ((((((min((arr_15 [i_1]), (arr_5 [13])))) != ((-(arr_11 [i_4] [i_5])))))))));
                            arr_25 [i_1] [i_1] [11] [i_1] [i_5] [11] = (min(((var_4 ? (arr_22 [i_1 + 1] [i_3 + 2] [i_3 + 2] [i_4 - 1]) : var_4)), (((arr_2 [i_1 - 1] [i_3 - 1]) ? (arr_22 [i_1 - 3] [i_3 + 2] [i_3 + 1] [i_4 - 2]) : (arr_2 [i_1 + 1] [i_3 + 1])))));
                            var_25 = (arr_24 [i_1] [i_3 + 1] [i_4 - 2] [i_5] [i_3 + 1] [i_4 - 1] [i_6 - 2]);
                            arr_26 [i_4] [2] = (((arr_12 [i_6 - 1] [i_4] [i_4]) ? ((-(arr_4 [i_6 + 1]))) : (!11)));
                        }
                    }
                }
            }
            arr_27 [i_1] [1] = (arr_23 [i_1 - 1] [i_1 - 2]);
            var_26 = ((-16261 > ((1 ? var_17 : 0))));

            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {
                arr_30 [i_7] = var_5;
                arr_31 [i_1 + 2] [i_1 + 2] [i_3 - 1] [i_1 + 2] = (arr_28 [i_1 + 2] [i_1 + 2] [i_7 + 1] [i_7 - 1]);

                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    arr_35 [i_1] [i_3] [i_1] [i_1] = ((((min(var_4, (arr_23 [i_1 - 3] [i_7 - 1])))) / 2519688500));
                    arr_36 [i_1] [0] [i_3] [i_3] [i_8] = (((((((arr_2 [i_1 + 2] [i_7]) ? 65512 : var_2)))) ? (arr_21 [i_1] [i_1] [i_1] [i_7 + 1] [i_1 - 2] [i_3 - 1]) : (min(17074, 1895638962))));
                }
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                arr_41 [i_1] [i_1] [1] = 1;
                var_27 &= (((arr_11 [i_1 - 2] [i_3 + 2]) ? -10250 : var_11));
            }
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                arr_45 [i_1] = (min(((max(0, (max(var_15, 396449097))))), (((arr_19 [i_1] [i_1 + 2] [i_1 - 1] [i_1 - 3] [i_1 + 2] [i_1 - 3]) ? 17074 : (min((arr_17 [i_1 - 1] [i_3] [8]), 8444249301319680))))));
                arr_46 [i_1] [i_3 + 2] [i_3 + 2] = ((((arr_38 [i_3 + 2]) && var_16)));
            }
        }
        for (int i_11 = 1; i_11 < 12;i_11 += 1) /* same iter space */
        {
            arr_49 [i_1] [i_1] = ((!((max(var_7, (arr_22 [i_11 + 2] [i_1 - 3] [i_11 + 2] [i_11 + 2]))))));
            arr_50 [i_1 - 3] [10] = var_19;
        }
    }
    var_28 &= ((var_7 & (~var_0)));
    var_29 = 26;
    #pragma endscop
}
