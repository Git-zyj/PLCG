/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_10;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((((((((1 ? var_5 : (arr_0 [i_0])))) ? (arr_1 [i_0]) : (((var_5 ? 0 : 1)))))) || (!var_0)));
        var_14 ^= (arr_0 [i_0]);
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_15 += max((arr_3 [10]), (max((min(var_3, var_3)), (((var_5 || (arr_0 [i_1])))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_11 [i_1] [1] [i_2] [i_3] = (~((~((var_4 ? var_6 : var_8)))));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_16 ^= (max((((arr_6 [i_1 + 1] [i_1 + 1]) ? (arr_6 [i_1 - 1] [i_1 + 1]) : (arr_6 [i_1 - 1] [i_1 + 1]))), ((((arr_5 [i_1 + 1] [i_2]) <= (arr_6 [i_1 - 1] [i_1 + 1]))))));
                        arr_16 [i_3] [i_1] [9] [i_4] = ((((!(((~(arr_0 [i_1])))))) ? ((min((((arr_13 [i_1]) <= var_1)), (((arr_9 [9] [8] [i_2] [i_1]) >= (arr_6 [i_3] [i_2])))))) : ((max(1, (-2147483647 - 1))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_17 = ((26835 >> (124 - 109)));
                        var_18 = ((~(arr_10 [i_1] [i_3] [i_2] [i_1])));
                        arr_19 [i_3] [i_2] [i_3] [i_3] [i_2] [i_1] = ((var_5 >= (arr_5 [i_1 + 1] [i_1])));
                        var_19 = (((arr_12 [i_2] [i_2]) > (arr_9 [i_3] [i_2] [i_3] [i_5])));
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_1 + 1] [i_2] [i_1] [i_1] [1] = ((!(arr_14 [i_1] [i_1] [i_1])));
                            arr_27 [i_1 - 1] [i_2] [i_1] [1] [i_7] = ((~(arr_17 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            arr_32 [i_1] [i_1] [i_1] = (arr_10 [i_1] [i_6] [i_1] [i_1]);
                            arr_33 [i_1] [i_1] [i_1] [i_1] [i_8] = ((2183043041936324076 ? var_10 : (!1962878428)));
                            var_20 = (max(var_20, 15967940854654308739));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            arr_38 [i_1] [i_2] [i_1] [i_6] [i_9] = (((arr_12 [i_1 + 1] [i_1 - 1]) ? (arr_12 [1] [i_1 - 1]) : (arr_12 [i_1] [i_1 - 1])));
                            var_21 = (((((10617619190757118781 ? 10617619190757118781 : -9))) ? (arr_21 [i_1] [i_1 - 1] [i_1 + 1] [1] [i_1 - 1]) : ((((arr_25 [7] [7] [10] [i_1]) || (arr_20 [i_1] [i_1]))))));
                            var_22 ^= ((var_4 - ((((!(arr_34 [i_1] [i_2] [i_3] [i_6] [i_3])))))));
                        }
                        var_23 = var_12;
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        var_24 = var_5;

                        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_25 = 0;
                            arr_44 [i_11] [i_1] [i_1] [i_2] = (-47 - 879048603);
                            var_26 = ((var_7 ? (((var_11 + (arr_4 [i_2])))) : (arr_30 [i_2] [i_3])));
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                        {
                            var_27 |= ((var_4 ? (arr_9 [i_1 + 1] [i_1] [3] [i_1]) : (arr_8 [i_1 - 1])));
                            var_28 *= ((((var_3 ? var_10 : var_7)) * (arr_21 [i_1] [i_1] [0] [i_1] [i_12])));
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                        {
                            arr_50 [i_1] = (arr_40 [1] [i_1]);
                            var_29 = (((arr_40 [i_1 - 1] [i_1]) - (arr_40 [i_1 - 1] [i_1])));
                            var_30 = (((arr_36 [i_1] [i_2] [i_3] [i_10] [i_1]) ? var_10 : var_3));
                            arr_51 [i_1] [i_2] [i_3] [i_1] [i_13] = ((var_4 ? (arr_31 [i_1 - 1] [0] [i_1 - 1]) : (!0)));
                        }
                        for (int i_14 = 0; i_14 < 12;i_14 += 1) /* same iter space */
                        {
                            var_31 = (arr_29 [i_10] [5]);
                            arr_55 [1] [5] [i_1] = (arr_43 [i_1] [i_1 + 1] [i_1] [i_1 + 1]);
                            var_32 = ((~((~(arr_36 [i_14] [i_10] [i_3] [i_2] [i_1 - 1])))));
                        }
                    }
                }
            }
        }
    }
    var_33 = (max(var_8, (min(((max(var_5, var_2))), var_8))));
    var_34 = (max(var_34, var_5));
    #pragma endscop
}
