/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_10 = (arr_6 [1] [i_1] [1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = 0;
                                var_12 -= ((-(arr_11 [0] [i_1] [i_1] [i_1])));
                                var_13 = (max(var_13, (((!(arr_2 [i_0] [i_1]))))));
                            }
                        }
                    }
                }
                var_14 = (min(var_14, (max((arr_10 [i_0] [i_0] [i_0]), (127 - 0)))));
            }
        }
    }
    var_15 -= -var_4;
    var_16 = max((-9223372036854775807 - 1), 0);

    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_25 [i_7] [19] [i_7] [19] |= ((arr_17 [i_5] [10]) ? (((((-(arr_22 [19]))) ^ (!var_0)))) : (min(2585605061, 101)));

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_17 = (min(var_17, var_7));

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_18 = var_7;
                            var_19 = ((((max(-15870, (!16)))) ? var_5 : (arr_14 [i_5])));
                            arr_30 [i_5] [i_6] [i_6] [i_7] [i_9] [i_9] = ((((var_3 || var_5) ? -var_4 : ((((arr_16 [i_5]) ? (arr_19 [i_5] [i_6] [i_8]) : var_3))))));
                        }
                        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                        {
                            arr_33 [16] [2] [i_5] [i_5] [i_5] = (((-1076441557 ? 1611363592 : var_5)));
                            var_20 -= ((((1 && (arr_18 [i_5] [0])))));
                            var_21 -= (((54638 ? 107 : 154)) >= (((!(arr_28 [i_10] [12] [i_7] [23])))));
                            var_22 = (((arr_32 [1] [1] [i_5]) <= (((((min(var_5, (arr_24 [i_6])))) <= (arr_27 [i_10] [i_5] [i_7] [i_5] [i_5]))))));
                        }
                        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                        {
                            arr_36 [6] [i_6] [i_8] = 51;
                            arr_37 [23] [i_6] [6] [23] = ((((min(((min(var_1, var_3))), (arr_19 [i_5] [i_5] [i_11])))) <= var_7));
                        }
                    }
                    var_23 = (min(var_23, var_5));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            {
                                arr_43 [i_13] [i_5] [i_5] [i_5] [i_5] [i_6] [i_5] &= (min((arr_21 [i_5]), 0));
                                arr_44 [i_13] [i_13] [i_5] [i_13] [i_13] [i_13] [i_13] |= 155;
                                arr_45 [15] [i_13] [i_12] [4] = (((~(arr_34 [i_12 + 1] [i_5] [1] [13]))) ^ var_3);
                                var_24 = (min(var_24, (((15 ? var_7 : (max((arr_39 [i_12]), (min((arr_20 [i_5] [i_6] [i_13]), var_1)))))))));
                                var_25 = (((((((((arr_26 [i_6] [i_6] [i_5] [i_6] [i_13]) + 9223372036854775807)) >> (var_4 + 9064596455950744185))))) ? (!var_3) : 27485));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            for (int i_15 = 1; i_15 < 23;i_15 += 1)
            {
                {
                    var_26 = (max(var_26, ((min(((min(((!(arr_39 [i_5]))), ((-1720908647 != (arr_19 [i_5] [12] [i_5])))))), ((-8032 ? ((var_4 ? var_3 : var_9)) : (1 | 0))))))));
                    arr_50 [0] [1] [i_14] [i_5] &= (max(((1 << (3968 - 3945))), (!-8813037165814585641)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 25;i_16 += 1) /* same iter space */
    {
        var_27 = (max(var_27, (((15300265832933231542 ? (8388607 || -1076441552) : (~-5242333347878197357))))));
        arr_54 [i_16] = var_9;
    }
    #pragma endscop
}
