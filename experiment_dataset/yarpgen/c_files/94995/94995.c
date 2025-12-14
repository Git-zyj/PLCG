/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_20 = min(1, -1);
        arr_2 [i_0] = ((~2147483647) && ((max(var_15, (arr_0 [i_0 + 3])))));

        for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0 + 2] [i_0] = (max(((19018 << (arr_0 [i_0 + 2]))), ((max(var_7, -250)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_2] [i_3] [i_0] = var_14;
                            var_21 = (arr_11 [i_2] [i_1] [i_2] [i_3] [i_4]);
                            var_22 += 17199846918868978631;
                            var_23 = (+(min((arr_13 [i_0 - 1] [i_1 + 2] [i_2] [i_1 + 2] [i_0 - 1]), (arr_13 [i_0] [i_1 + 2] [i_2] [i_3] [i_2]))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
        {
            var_24 = (max(var_24, (((((-((max((arr_6 [i_0 - 1] [i_5] [i_5] [i_5]), 9))))) / ((max((arr_4 [i_0 + 3] [i_0 - 2]), (arr_8 [i_0 + 2] [i_5 + 2] [i_5 - 2] [i_5])))))))));
            arr_18 [i_0] [i_0] [i_0] = (!((max((arr_12 [i_0 + 2]), (arr_12 [i_0 - 2])))));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_25 -= (-(arr_0 [i_6]));
        var_26 = (max(var_26, (arr_8 [i_6] [i_6] [i_6] [i_6])));
        var_27 += ((!((((arr_8 [i_6] [i_6] [i_6] [i_6]) ? 1 : 9)))));
    }

    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_28 = (max(var_28, (((~(arr_13 [i_7] [i_7] [i_7] [i_7] [i_7]))))));
        var_29 = (max(var_29, (arr_11 [i_7] [i_7] [i_7] [i_7] [i_7])));
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {

        for (int i_9 = 2; i_9 < 10;i_9 += 1)
        {
            var_30 = (max((arr_26 [i_8]), (!var_2)));

            for (int i_10 = 1; i_10 < 10;i_10 += 1)
            {
                var_31 &= ((+(((arr_24 [i_8]) ? (arr_24 [i_8]) : (arr_24 [i_8])))));
                arr_32 [i_10] [i_10] [i_10] = 230;
                arr_33 [i_10] [2] [i_10 + 2] = ((+(((arr_11 [i_10] [i_10 + 1] [i_10] [i_9 - 2] [13]) * (((max(var_0, (arr_22 [i_8])))))))));

                /* vectorizable */
                for (int i_11 = 1; i_11 < 9;i_11 += 1) /* same iter space */
                {
                    arr_36 [i_8] [i_8] [i_9] [i_11 + 2] [i_11 + 2] &= ((-(((!(arr_7 [i_8] [i_9] [4]))))));
                    var_32 += (!246);
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 9;i_12 += 1) /* same iter space */
                {
                    var_33 = (arr_4 [i_12 - 1] [i_12]);
                    arr_41 [i_8] [i_8] [i_10] [i_10] = 3;
                    arr_42 [i_8] [i_9] |= (246 * 26201);
                    arr_43 [i_10] = -0;
                }
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                arr_46 [i_8] [i_8] [i_9] [i_13] = min((max((arr_7 [i_9 - 2] [i_9 - 1] [i_9 + 1]), (((!(arr_39 [7] [i_9] [i_9 + 2] [i_13])))))), (((!(arr_10 [6] [i_9])))));
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 10;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 9;i_15 += 1)
                    {
                        {
                            arr_54 [i_8] [i_8] [6] [5] [i_14] [6] [i_15 + 1] = ((!((max(1, 17796618147573503165)))));
                            var_34 *= (((arr_17 [i_9 - 1] [i_14] [i_15 + 1]) | (arr_17 [i_8] [i_9] [i_8])));
                            var_35 = (arr_21 [i_8] [i_8]);
                        }
                    }
                }
                arr_55 [i_9] [i_13] &= (max((!11411089034562145564), 18226623737699357055));
            }
            var_36 -= (max((arr_48 [i_9]), (max((min(var_5, var_14)), var_6))));
            var_37 = (max(var_37, ((max(1, (min(-18, (((!(arr_52 [i_9 + 2] [i_9 + 2] [i_9] [i_9] [i_9 - 1])))))))))));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            arr_60 [i_16] = ((!(arr_35 [i_16] [i_16] [i_16] [i_8])));
            var_38 = (max(var_38, -12907));
            var_39 -= (arr_17 [i_8] [i_16] [i_16]);
            var_40 = (max(var_40, (-1 != var_17)));
            arr_61 [i_8] [i_16] [i_16] = (arr_4 [i_8] [i_16]);
        }
        arr_62 [i_8] [i_8] = ((((max((arr_30 [11] [i_8] [i_8] [i_8]), (max((arr_27 [i_8] [i_8] [i_8]), (arr_27 [i_8] [i_8] [i_8])))))) ? (arr_49 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) : 135));
    }
    var_41 = (min((~var_6), var_6));
    #pragma endscop
}
