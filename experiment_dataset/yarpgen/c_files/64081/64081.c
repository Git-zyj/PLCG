/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (max(var_9, ((var_8 ? var_10 : ((-(arr_2 [i_0 - 1] [i_1] [i_1])))))));
                arr_7 [i_0] [i_1] = (min(((max(var_2, (arr_0 [i_0 + 2] [i_0 + 2])))), ((-(arr_5 [i_0 - 2])))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_12 [i_1] = (min((((((var_0 ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : 46))) ? var_2 : 7)), (max(((max(var_2, var_0))), (arr_2 [i_0] [i_1] [i_1])))));
                    arr_13 [i_0] [i_1] [i_1] = ((((arr_8 [i_1] [i_1]) <= (min((arr_5 [i_0]), (arr_5 [i_0 + 1]))))));
                    arr_14 [i_0] [i_1] [i_1] = (var_3 - var_3);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = 31797;
                                var_13 = ((arr_2 [i_0 + 1] [i_0 - 2] [i_1]) - ((-(arr_2 [i_0 - 2] [i_0 - 2] [i_1]))));
                                arr_19 [i_1] = ((~(((-2492507484696377946 % (arr_1 [i_1] [i_2]))))));
                                var_14 = (min((arr_3 [i_0 + 2]), var_9));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_25 [i_6] [i_1] [i_1] [i_0] = ((((((~var_7) ^ var_8))) ? (max((arr_17 [i_6 + 2] [i_2] [i_0] [i_0]), ((((arr_20 [i_6] [i_5 + 3] [i_1] [i_0 + 1]) ? (arr_23 [i_0] [i_1] [i_2] [i_0]) : var_3))))) : var_0));
                                arr_26 [i_0] [i_1] [i_2] [i_5] [i_6] = (((((var_6 ? (arr_5 [i_5 + 1]) : (arr_5 [i_5 - 1])))) || (((var_0 ? (arr_5 [i_5 + 1]) : (arr_5 [i_5 + 1]))))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 7;i_9 += 1)
                        {
                            {
                                var_15 = (arr_16 [i_0] [i_0 - 2] [i_8 + 1]);
                                arr_34 [i_0] [i_1] [i_1] [i_1] [i_9] [i_9] = (~259316442);
                                var_16 = (var_9 > var_0);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 8;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 9;i_11 += 1)
                        {
                            {
                                var_17 = (~var_3);
                                arr_39 [i_0] [i_0] [i_1] [i_7] [i_10] [i_11] [i_11] = ((((min((((arr_20 [i_0 + 2] [i_0 - 2] [i_0] [i_0]) ? var_1 : (arr_11 [i_1] [i_7] [i_1] [i_1]))), var_6))) ? ((min(var_5, (arr_32 [i_0 - 2] [i_1] [i_7] [i_0 - 2])))) : (((!((((arr_33 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_1]) ? var_3 : var_7))))))));
                                arr_40 [i_0 + 1] [i_1] [i_1] = (arr_8 [i_1] [i_11 - 1]);
                                var_18 = ((2492507484696377948 ? -873349627 : 3611085410738835901));
                            }
                        }
                    }
                }
                for (int i_12 = 1; i_12 < 9;i_12 += 1)
                {
                    var_19 = -6680437748379262024;
                    arr_44 [i_1] = 3611085410738835888;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 14;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 12;i_14 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        {
                            var_20 = var_5;
                            var_21 = (var_6 >= var_2);
                        }
                    }
                }
                arr_54 [i_13] [i_13] = (((arr_47 [i_13] [i_13]) ? ((((!(((~(arr_47 [i_13] [i_13])))))))) : (min(2492507484696377970, ((max(var_10, var_8)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_17 = 0; i_17 < 10;i_17 += 1)
    {
        for (int i_18 = 1; i_18 < 9;i_18 += 1)
        {
            for (int i_19 = 3; i_19 < 6;i_19 += 1)
            {
                {
                    arr_63 [i_17] [i_17] [i_18 + 1] [i_18] = (((arr_0 [i_17] [i_18 - 1]) != ((((arr_15 [i_18] [i_18 + 1] [i_18 + 1] [i_19 - 1] [i_19]) < (arr_15 [i_17] [i_18 + 1] [i_19] [i_19 + 4] [i_18 + 1]))))));
                    var_22 = (((var_3 ^ var_1) & (((((-69 ? 31313 : (arr_52 [i_17] [i_17]))))))));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 10;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 10;i_21 += 1)
                        {
                            {
                                arr_68 [i_17] [i_18 + 1] [i_18] [i_19] [i_19] [i_18] = (arr_4 [i_17] [i_17] [i_17]);
                                var_23 = 123;
                                var_24 = ((!((min(-123, 334645005)))));
                                arr_69 [i_18] [i_18] [i_18] [i_18 + 1] [i_18] = ((((var_0 ? 27905 : var_10)) >> (((max((var_2 / var_3), (min(var_7, var_5)))) - 1266141131))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
