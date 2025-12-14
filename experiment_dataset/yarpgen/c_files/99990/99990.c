/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_18 = var_2;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = var_16;
                    var_19 = (arr_4 [i_0] [i_1] [12]);
                }
            }
        }
        arr_10 [i_0 + 1] [i_0] = 2538039107;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                        {
                            arr_22 [13] [i_0] [i_4] [i_5] [i_4] = (((min((((var_10 > (arr_2 [i_0]))), (arr_14 [i_0 - 2] [i_0 - 2] [i_0]))))));
                            var_20 *= (((((arr_20 [i_3] [i_0 - 2] [1] [i_3] [i_4]) ? (arr_20 [i_3] [i_0 - 2] [20] [i_6 - 1] [i_0 - 2]) : (arr_20 [i_3] [i_0 - 2] [i_6] [i_6] [i_6 - 1])))) ? var_10 : 2702124112);
                            var_21 -= (arr_5 [i_5] [7] [i_5]);
                        }
                        for (int i_7 = 1; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            var_22 = (4 == var_17);
                            var_23 = ((((((arr_13 [i_7 + 2] [i_0] [i_0]) + (arr_13 [i_7 + 1] [i_0] [5])))) ? (arr_13 [i_7 + 2] [i_0] [1]) : (arr_13 [i_7 + 2] [i_0] [i_0])));
                            var_24 = (min(var_24, (((((~(arr_11 [i_3] [i_0 - 1] [i_0 - 2]))) % (((arr_23 [i_3] [i_7 + 2] [i_4] [16] [i_3]) - 127)))))));
                            var_25 = ((-((var_0 ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                            var_26 = (max(var_26, var_5));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_27 = (max(var_27, (((~(arr_26 [i_4] [i_4] [1] [i_4] [i_4]))))));
                            var_28 = ((((((arr_7 [i_0 - 2] [i_0 - 2] [5]) + var_0))) ? (arr_6 [i_0]) : ((-(arr_11 [i_0] [i_3] [i_3])))));
                            arr_27 [i_0] [i_5] [i_4] [i_4] [i_3] [i_0] = (((arr_20 [i_0] [i_3] [i_3] [i_5] [i_0 + 1]) | (arr_26 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                        }

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_29 = (min(var_29, (arr_4 [i_0] [i_4] [5])));
                            var_30 = (((((0 ? (arr_4 [15] [1] [i_4]) : (arr_18 [i_0] [i_3] [i_3] [i_0])))) && ((112 != (arr_4 [i_9] [i_3] [i_0 + 1])))));
                        }
                        arr_31 [i_0] [i_3] [i_4] = (max(var_8, ((~(max(13194024433882449231, 1481454253))))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                arr_38 [i_0] [5] = ((~(min((arr_19 [i_0 - 2] [i_3] [i_4]), (arr_33 [i_3] [i_0] [13] [i_0] [15])))));
                                arr_39 [i_0 - 1] [i_0 - 1] [i_4] [i_0] [i_11] = (arr_29 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0]);
                                arr_40 [1] [i_3] [i_4] [i_10] [i_3] |= (~(~var_16));
                            }
                        }
                    }
                }
            }
        }
        var_31 = (max(var_31, (arr_1 [16])));
    }
    for (int i_12 = 2; i_12 < 21;i_12 += 1) /* same iter space */
    {
        var_32 = (((((var_7 ? 4013742487 : var_7))) ? ((max((arr_3 [i_12 + 1]), var_16))) : ((((arr_3 [i_12 - 1]) > -71)))));
        arr_43 [6] &= (min((((arr_35 [i_12] [i_12 - 1] [i_12 - 2] [i_12] [10] [i_12 - 2] [i_12]) - (arr_35 [8] [i_12 - 1] [i_12 - 2] [i_12 - 1] [i_12] [19] [i_12 + 1]))), (min((((var_13 ? (arr_28 [i_12 - 2] [16] [i_12] [13] [i_12] [i_12] [i_12]) : (arr_32 [i_12] [2] [i_12 - 2] [i_12 - 2] [2] [i_12 - 1])))), (arr_16 [i_12 - 1] [i_12 - 1] [i_12] [6])))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                {

                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_33 = ((+(min((arr_4 [1] [i_12 + 1] [i_14]), 2147483647))));
                        arr_55 [i_15] &= (arr_33 [i_12] [16] [i_12] [i_12] [i_12]);
                    }
                    var_34 |= (max((arr_2 [i_14]), ((((max(var_5, (arr_8 [15])))) ? (var_9 <= var_0) : (((arr_28 [i_12] [i_13] [i_14] [i_14] [12] [i_14] [i_14]) ? 8 : (arr_30 [i_14])))))));
                    var_35 = (min(78, 1481454253));
                }
            }
        }
    }
    var_36 &= var_16;
    #pragma endscop
}
