/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((-((144 ? var_7 : var_0)))), (var_1 > var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [1] [i_1] [i_1] [4] [i_4] = var_13;
                                arr_13 [i_4] [8] [8] [i_2] [i_3] [i_4] &= ((~((-(min((arr_10 [i_4] [i_4] [i_2] [i_4] [i_0]), 1803258958))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_18 [i_1] [i_1] [i_1] [i_1] = ((52291 ? var_11 : 4294967295));

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_15 = (min(var_15, ((((arr_16 [i_1] [i_2] [i_1] [i_0]) ? 2491708338 : 9223372036854775803)))));
                            var_16 = ((((-(arr_9 [i_0]))) | var_9));
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_25 [5] [i_1] = (!var_7);
                            arr_26 [i_0] [i_1] [i_1] [i_0] [1] [i_7] = (arr_19 [1] [i_1]);
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_17 = var_4;
                            arr_29 [i_0] [i_1] [i_0] [i_1] [i_5] [i_8] [i_8] = (var_11 && var_12);
                            arr_30 [i_1] [i_1] = (-9223372036854775804 + 8392);
                            var_18 = (min(var_18, (((~(arr_11 [i_8] [i_5] [i_2] [i_1] [i_0]))))));
                        }
                        var_19 = (max(var_19, ((((arr_2 [i_0] [i_2] [i_5]) > var_2)))));
                        arr_31 [i_0] [4] [i_0] [i_1] [9] = 30;
                        arr_32 [i_1] [i_1] = ((57147 ? 246 : 57141));
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {

                        for (int i_10 = 2; i_10 < 8;i_10 += 1)
                        {
                            var_20 += ((var_3 >= ((((arr_10 [i_0] [i_10] [i_10] [i_9] [0]) == var_13)))));
                            arr_37 [i_10 + 1] [i_1] [i_1] [i_2] [i_0] [i_1] [i_0] = (((arr_36 [i_1]) + (((var_5 * 246) / var_1))));
                            var_21 = (max(var_21, ((min((arr_0 [i_10 - 2]), -var_6)))));
                        }
                        arr_38 [i_1] [i_1] = var_10;

                        for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
                        {
                            arr_42 [i_1] [i_9] [2] [i_1] [i_1] = ((-((max((arr_23 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1]), (arr_0 [7]))))));
                            var_22 = var_9;
                        }
                        for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
                        {
                            var_23 = (min(240, 6152));
                            var_24 = (min(var_24, ((1 > ((-((max((arr_21 [i_2] [i_0] [i_2] [i_1] [i_0]), (arr_34 [i_12 + 1] [0] [5] [i_0]))))))))));
                            arr_46 [i_0] [i_1] [i_1] [3] [i_12 + 1] = ((~((((arr_1 [0] [i_2]) && 1527428199)))));
                        }
                        arr_47 [i_1] [i_1] = ((((!(((16777215 ? -6650611512605032682 : 57144))))) ? (((((((arr_24 [i_9] [1] [i_0] [9] [10] [i_0] [i_0]) / var_8)) >= ((max(246, var_7))))))) : 9223372036854775807));
                    }
                }
                /* vectorizable */
                for (int i_13 = 2; i_13 < 9;i_13 += 1)
                {
                    var_25 = (max(var_25, ((((arr_14 [i_13] [i_13 - 1] [i_13]) ? (arr_3 [i_13 + 2]) : (arr_3 [i_13 + 2]))))));
                    var_26 = ((-((255 ? var_6 : var_5))));
                    arr_50 [i_1] [i_1] [i_1] [i_1] = (((arr_8 [i_1] [i_13 + 1] [i_13 + 1] [i_1]) ? (arr_8 [i_1] [i_13 + 2] [i_13 - 1] [i_1]) : var_10));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {

                    for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
                    {

                        for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
                        {
                            arr_59 [i_16] [i_1] [8] [i_16] [i_16] |= ((((var_6 * (arr_34 [i_16] [i_15] [i_1] [i_0]))) == var_5));
                            arr_60 [i_0] [i_1] [i_14] [i_15] [i_1] = (4278190081 ^ var_0);
                            var_27 = ((var_12 || (arr_43 [i_16] [i_15] [i_15] [i_1] [i_1] [i_0] [i_0])));
                        }
                        for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
                        {
                            arr_64 [i_1] [i_15] [i_14] [i_1] [i_1] = ((-(arr_54 [i_1] [i_1] [i_14] [i_1] [i_17])));
                            var_28 += (~var_12);
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            var_29 = arr_53 [i_1] [i_1] [i_1];
                            arr_68 [i_1] [i_15] [i_15] [i_14] [i_1] [i_1] = (arr_51 [i_15]);
                        }
                        var_30 = (-(arr_67 [i_1] [i_14] [i_15]));
                        arr_69 [i_1] [i_1] [i_14] [i_15] = (((var_3 == var_8) < var_3));
                    }
                    for (int i_19 = 0; i_19 < 11;i_19 += 1) /* same iter space */
                    {
                        var_31 = (max(var_31, var_5));
                        var_32 ^= var_13;
                        var_33 = ((~(arr_67 [i_14] [i_1] [i_0])));
                        var_34 += var_13;
                    }
                    var_35 = 4278190083;
                    arr_73 [i_1] [i_1] [i_14] = var_1;
                }
                arr_74 [i_1] = (min(((16777224 / (arr_54 [i_1] [i_1] [i_1] [i_0] [i_1]))), ((((((arr_39 [i_1] [i_1] [i_1] [i_1] [4] [i_1] [i_0]) ? var_10 : var_12))) ? (min(225, var_10)) : -154))));
                arr_75 [i_1] [i_1] = (min(((var_10 ? var_13 : var_2)), (((arr_48 [i_1]) ? (arr_48 [i_1]) : var_11))));
            }
        }
    }
    #pragma endscop
}
