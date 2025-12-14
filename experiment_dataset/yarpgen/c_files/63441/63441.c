/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 &= ((!(var_2 / 31)));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, var_3));
                    arr_9 [i_1] = ((((min(var_4, 281474976710655))) ? var_6 : (((arr_6 [i_0] [i_1 + 4] [i_1]) ? (arr_6 [i_0] [i_1 - 2] [i_1]) : var_6))));
                }
            }
        }
        arr_10 [i_0] [i_0] = (min(3, (~6)));
    }
    var_12 &= var_6;

    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_13 = (arr_13 [i_3] [i_3]);
                        var_14 |= (((var_0 || var_7) | 2452486089));

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_22 [i_7] [i_6] [i_5] [i_4] [i_6] [i_3] = ((((((var_9 ? (arr_14 [18]) : var_8))) ? (arr_19 [i_3] [i_4] [i_6] [i_6]) : (arr_18 [i_6] [i_4] [9] [i_7]))));
                            arr_23 [14] [i_6] [i_4] [11] [i_6] [i_7] = var_6;
                            arr_24 [i_3] [i_3] [i_3] [i_7] [i_6] [10] [9] = (((((var_0 ? var_5 : (arr_21 [i_3] [i_4] [i_5] [i_6] [8] [i_5] [11])))) ? (((!(arr_21 [i_3] [7] [i_5] [i_6] [i_7] [8] [8])))) : (((!(arr_21 [i_7] [i_7] [i_6] [i_5] [i_4] [i_4] [i_3]))))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            var_15 = (max((((((var_4 ? (arr_18 [i_9] [i_9] [17] [i_8]) : (arr_13 [7] [3]))) >= ((2452486089 ? 2452486109 : 1842481222))))), (arr_28 [11] [i_4] [i_4] [i_4] [i_4] [i_4])));
                            var_16 = var_9;
                            var_17 = (arr_14 [i_5]);
                        }
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            arr_32 [i_10] [i_8] [i_5] [i_4] [i_3] = var_4;
                            var_18 |= var_8;
                            arr_33 [i_3] [i_4] [2] [i_8] [13] = 1;
                            var_19 = var_8;
                        }
                        arr_34 [8] [i_4] [1] [i_4] = (max((arr_31 [i_3] [i_4] [i_5] [i_5] [i_8]), ((((min(-1722976169863077739, (arr_26 [i_3] [i_3] [17] [5] [17] [i_8]))) / ((max(var_0, 2452486109))))))));
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_20 = min(var_9, (max((((arr_26 [i_3] [i_3] [i_3] [i_5] [i_11] [i_3]) + 1842481204)), var_6)));
                        arr_38 [i_3] [1] [i_5] [i_5] [i_11] = arr_12 [i_3];
                        arr_39 [i_11] [0] [i_4] [i_3] = ((var_4 ? (max(var_4, -8796093022207)) : (18446735277616529408 | 1842481226)));
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_21 = ((-((-(min(var_4, var_3))))));
                        var_22 -= var_5;
                        arr_42 [i_3] [i_4] |= (min((~var_8), ((max(var_4, (arr_17 [i_5] [i_5] [i_12]))))));
                        var_23 = ((255 ? ((var_8 ^ (((arr_12 [i_3]) >> (((arr_28 [i_3] [i_3] [i_4] [i_5] [9] [6]) - 4509279692789976962)))))) : ((max((!var_1), (arr_29 [i_3] [i_4] [14] [i_12]))))));
                        arr_43 [1] [i_4] = (((arr_35 [17] [i_4] [i_5] [i_12] [i_4] [i_3]) ? var_8 : ((((((arr_27 [i_3] [i_4] [i_4] [i_5] [i_12]) * var_7)) / var_5)))));
                    }
                    arr_44 [i_3] = (min((min((min((arr_15 [i_4]), var_0)), (min(var_9, var_0)))), ((((169 | 1) ? var_6 : var_9)))));
                }
            }
        }
        var_24 = (min(var_24, -var_1));
        arr_45 [i_3] = (max((arr_36 [i_3] [i_3] [i_3] [i_3] [i_3]), 250));
        var_25 = ((var_8 ? ((64341 ? (min((arr_15 [i_3]), 8796093022207)) : (((var_9 ? (arr_17 [i_3] [i_3] [i_3]) : (arr_36 [i_3] [i_3] [i_3] [i_3] [i_3])))))) : (1080863910568919040 || var_1)));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        var_26 = (-7399779937081846983 < var_8);
        var_27 = (max(var_27, (arr_47 [i_13] [i_13])));
        var_28 -= ((var_2 <= (arr_47 [i_13] [i_13])));
        arr_49 [i_13] = ((~(arr_47 [i_13] [0])));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                {
                    var_29 = 0;
                    var_30 ^= (1 & 891939285);
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                var_31 -= var_8;
                                arr_64 [18] [i_14] [i_14] [i_15] [i_14] = (~18446735277616529409);
                                var_32 = ((~(arr_59 [i_15] [i_14] [i_14] [i_14])));
                                var_33 = (arr_46 [i_13] [i_16]);
                                arr_65 [i_13] [i_15] = ((~(((arr_52 [i_13] [i_13] [i_13]) - 1))));
                            }
                        }
                    }
                    arr_66 [i_13] [i_15] = (!var_3);
                    var_34 |= ((((arr_47 [i_15] [1]) >> (var_1 - 13486468126063172619))));
                }
            }
        }
    }
    var_35 = (max(((((max(var_2, 0))) ? (((var_8 ? var_5 : var_4))) : var_1)), var_9));
    #pragma endscop
}
