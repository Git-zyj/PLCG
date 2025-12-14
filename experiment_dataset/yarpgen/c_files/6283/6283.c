/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((((var_3 ? ((max(181, 0))) : var_1))), 1210517017));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_12 -= (((arr_12 [i_0 - 1] [i_1] [i_1] [i_1] [i_2] [i_2] [i_4]) != (arr_10 [i_0 - 1] [i_1] [i_3 + 1] [i_4])));
                            arr_13 [i_0] [6] [i_2] [i_3] [i_4] = var_6;
                        }
                    }
                }
            }
            var_13 = ((var_10 ^ ((var_6 % (arr_3 [i_0] [i_1])))));
            var_14 |= ((((arr_9 [i_0 + 1] [i_0 + 1] [18] [18] [i_1]) <= 16773120)));
        }
        var_15 = (--1);
    }
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_25 [i_5] = 1;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_16 ^= 1;
                                arr_30 [i_5] [i_6 - 1] [i_6 - 1] [i_8] [i_6 - 1] [i_9] = arr_23 [i_7] [i_8] [i_5];
                                var_17 = (min((arr_3 [i_8] [i_9 + 1]), ((((arr_0 [i_9]) & var_0)))));
                            }
                        }
                    }
                    var_18 = (arr_5 [i_7]);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_38 [i_5] = ((+((((!var_8) < var_4)))));
                                arr_39 [i_5] [i_6 + 1] [i_6 + 1] [i_5] [i_11] = var_4;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            {
                                var_19 = (max(var_19, (!var_10)));
                                arr_54 [i_5] [i_5 + 1] [i_12] [i_12] [i_14] [i_5] = var_4;
                            }
                        }
                    }
                    arr_55 [i_5] [i_13] [i_12] [i_13] |= (((min((arr_11 [i_5] [i_12] [i_13]), var_2))) ? ((min((arr_52 [i_13]), (arr_17 [i_13] [i_13])))) : ((var_4 ? var_9 : (((arr_49 [i_13]) ^ (arr_18 [i_5] [i_5]))))));
                    arr_56 [i_5] [i_5] [16] [i_5] = (((arr_37 [i_5] [i_13]) - (((((-(arr_2 [i_5] [i_5])))) ? (arr_12 [i_5 + 1] [i_5] [i_12] [i_12] [i_12] [i_13] [i_13]) : var_8))));

                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        var_20 ^= ((min(((~(arr_35 [i_13] [i_16]))), (arr_52 [i_16]))));
                        var_21 = 1;
                        var_22 = (min(var_22, ((max(var_7, ((max(var_10, (arr_49 [i_16])))))))));
                    }
                    for (int i_17 = 2; i_17 < 15;i_17 += 1)
                    {
                        var_23 -= (~((max((arr_16 [i_5 + 1]), (arr_16 [i_5 - 2])))));
                        var_24 = (min(var_24, (((((!((max((arr_52 [i_13]), (arr_3 [i_5 - 2] [i_17])))))) ? (arr_4 [i_13]) : ((-(arr_26 [16]))))))));
                    }
                    /* vectorizable */
                    for (int i_18 = 1; i_18 < 15;i_18 += 1)
                    {
                        var_25 = 2;

                        for (int i_19 = 0; i_19 < 17;i_19 += 1) /* same iter space */
                        {
                            var_26 = (min(var_26, (arr_48 [i_19] [i_13] [i_18 - 1] [i_19])));
                            var_27 -= (((arr_2 [i_13] [i_18 + 2]) * (((arr_35 [i_13] [i_19]) * (arr_20 [i_13] [i_19])))));
                            var_28 |= 121;
                        }
                        for (int i_20 = 0; i_20 < 17;i_20 += 1) /* same iter space */
                        {
                            var_29 = (min(var_29, (((~(arr_46 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_18 + 2]))))));
                            var_30 = (!var_6);
                        }
                        for (int i_21 = 0; i_21 < 17;i_21 += 1)
                        {
                            var_31 = (var_3 > (arr_65 [i_5 - 1] [i_12] [i_13] [10] [i_18] [i_21]));
                            var_32 = (max(var_32, (((var_0 ? var_1 : (arr_58 [i_5 - 1]))))));
                            arr_69 [i_5] [i_13] [i_18 + 2] [i_21] = 19;
                        }
                    }
                    var_33 = (min(var_33, ((!(arr_40 [i_5 + 1])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_22 = 0; i_22 < 17;i_22 += 1)
        {
            for (int i_23 = 1; i_23 < 16;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    {
                        var_34 = (min(var_34, var_10));
                        arr_77 [i_5] [i_22] [i_23 + 1] [i_24] = ((((max((arr_70 [i_5] [i_23 + 1]), var_9))) ? (((((arr_70 [i_5] [i_23 - 1]) < (arr_70 [i_5] [i_23 + 1]))))) : var_0));
                    }
                }
            }
        }
    }
    #pragma endscop
}
