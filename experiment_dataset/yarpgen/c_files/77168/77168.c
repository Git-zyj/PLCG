/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_0 [i_0 - 1]) * (arr_0 [i_0 - 1]))) * ((((max((arr_0 [i_0 - 1]), 1))) * (arr_0 [i_0 - 1])))));
        var_18 = arr_1 [i_0];

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_19 = (((arr_10 [i_0 - 1] [i_1] [i_0] [i_3]) ? (((!(min(0, var_11))))) : ((((min((arr_10 [i_0 - 1] [i_1] [i_0] [i_3]), 1))) * var_14))));
                        arr_12 [i_3] [i_0] [i_2 - 1] [i_1] [i_0] [i_0 - 1] = ((((min((arr_7 [i_0 - 1]), var_4))) | ((((arr_7 [i_0 - 1]) >= (arr_4 [i_0 - 1]))))));
                        arr_13 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] = ((((min(1, (arr_8 [i_0 - 1] [i_0] [i_1] [i_3])))) % (arr_10 [i_2 - 1] [i_0] [i_0] [i_0 - 1])));
                        var_20 = (!1);
                    }
                }
            }
            arr_14 [i_0] = (((((arr_5 [i_0]) * (arr_6 [i_0 - 1] [i_0 - 1] [i_1] [i_1])))) || ((1 || (arr_4 [i_0 - 1]))));
            var_21 = (max(((min(var_5, (((arr_6 [i_1] [i_1] [i_1] [i_1]) > 0))))), ((-(((arr_3 [i_0 - 1] [i_0]) ? (arr_0 [i_1]) : var_10))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
            {
                var_22 = var_3;
                var_23 = arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1];
                var_24 = arr_17 [i_0 - 1] [i_4] [i_5 - 1] [i_0 - 1];
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_25 = ((~(arr_10 [i_0 - 1] [i_5 - 1] [i_0] [i_5 - 1])));
                            var_26 = (((((arr_3 [i_4] [i_0]) ? (arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]) : 1))) || (arr_15 [i_0 - 1] [i_4] [i_0]));
                            var_27 = ((var_12 - (arr_10 [i_0 - 1] [i_7] [i_0] [i_7])));
                        }
                    }
                }
            }
            for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_33 [i_10] [i_10] [i_9] [i_0] [i_8 - 1] [i_4] [i_0 - 1] = (~1);
                            var_28 *= ((~(((arr_9 [i_9] [0] [i_4]) ? (arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_20 [i_0 - 1] [i_8 - 1] [i_8 - 1] [i_9])))));
                            arr_34 [i_0] = ((1 * var_0) && ((((arr_6 [i_0 - 1] [i_4] [i_8 - 1] [i_9]) ? (arr_8 [i_0 - 1] [i_0] [i_8 - 1] [i_9]) : 1))));
                        }
                    }
                }
                var_29 += (!(arr_32 [1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]));
                arr_35 [i_0] [i_4] [i_4] [i_4] = (((arr_20 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_8 - 1]) & var_6));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_30 = (((arr_11 [i_0 - 1] [i_0] [i_4] [i_11]) % (arr_30 [i_0 - 1] [i_8 - 1])));
                            arr_41 [i_0 - 1] [i_4] [i_0] [i_11] [i_11] [i_12] [i_12] = 1;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 0;i_14 += 1)
                {
                    {
                        var_31 = (min(var_31, (((1 >> (arr_38 [i_14 + 1] [i_14 + 1] [1] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1]))))));
                        var_32 = (((arr_27 [i_0 - 1] [i_13] [i_14 + 1]) << (arr_7 [i_0 - 1])));
                        var_33 *= ((~(arr_3 [i_14 + 1] [1])));

                        for (int i_15 = 1; i_15 < 1;i_15 += 1)
                        {
                            var_34 = (min(var_34, var_10));
                            var_35 = 0;
                            var_36 = (max(var_36, 1));
                            var_37 = (((arr_3 [i_14 + 1] [i_0]) | (arr_47 [i_14 + 1] [i_0 - 1] [i_0 - 1])));
                            var_38 = (max(var_38, (arr_24 [1])));
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            arr_54 [i_0 - 1] [i_4] [i_13] [i_0] [i_16] = (((((arr_1 [i_0]) > (arr_44 [i_16] [i_16] [i_16] [i_16]))) ? var_7 : (arr_30 [i_0 - 1] [i_14 + 1])));
                            var_39 = (((arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_14 + 1]) ? (((arr_51 [i_13] [i_4] [i_13]) ? (arr_28 [i_16] [i_0] [i_0] [i_4]) : var_5)) : ((1 ? (arr_48 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : 1))));
                            var_40 *= arr_40 [i_14 + 1] [i_14 + 1] [1] [i_16] [i_16];
                        }
                        var_41 = 1;
                    }
                }
            }
            var_42 = (((arr_52 [i_0 - 1]) ? (arr_51 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_52 [i_4])));
        }
        for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
        {
            var_43 = (((((arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_21 [i_17] [i_17] [i_17] [i_17]) : (arr_21 [i_17] [i_17] [i_0 - 1] [i_0 - 1]))) * ((max((arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_21 [i_17] [i_17] [i_0 - 1] [i_0 - 1]))))));
            var_44 = (((((-(arr_47 [i_17] [i_0 - 1] [i_0 - 1])))) ? (arr_16 [i_17]) : ((1 ? (arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) : (arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])))));
            var_45 *= max((arr_24 [1]), var_12);
        }
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            var_46 = arr_29 [i_0 - 1] [i_0 - 1] [i_18] [i_18];
            var_47 = ((arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]) >= (((arr_49 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]) ? (arr_49 [i_0 - 1] [i_18] [i_18] [i_0 - 1] [i_0]) : var_16)));
            var_48 *= ((+((((arr_10 [i_0 - 1] [i_18] [0] [i_18]) || (arr_4 [i_18]))))));
        }
    }
    /* LoopNest 2 */
    for (int i_19 = 1; i_19 < 1;i_19 += 1)
    {
        for (int i_20 = 1; i_20 < 1;i_20 += 1)
        {
            {
                var_49 *= (((-(((arr_64 [i_19 - 1]) % (arr_60 [1]))))) < (((((arr_61 [1]) / var_10)) >> (((arr_66 [i_19 - 1] [i_20 - 1]) << (arr_65 [i_19 - 1] [i_20 - 1] [i_20 - 1]))))));
                var_50 = (max(var_50, var_16));
            }
        }
    }
    var_51 = (1 < 1);
    #pragma endscop
}
