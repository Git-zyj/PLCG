/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_9 >= var_9) + (((((var_0 ? var_7 : var_7))) ? (var_7 + var_1) : (((var_3 ? var_0 : var_6)))))));
    var_11 = (var_2 ? var_2 : ((((max(0, var_6))) >> (((var_7 | var_7) - 1948291909614435493)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_12 = 1764;

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_13 = (max(var_13, (((-(arr_6 [i_4] [i_4]))))));
                            arr_16 [i_2] = (arr_9 [i_0] [i_1] [i_3 + 1] [i_4]);
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_19 [i_0] [i_2] [i_1] [i_2] [i_0] [i_5] [2] = (arr_9 [i_5] [i_5] [i_1] [i_3]);
                            var_14 *= var_8;
                            arr_20 [i_2] = (((arr_13 [i_3 + 1] [i_1] [i_1] [i_1] [i_5]) ? (arr_13 [i_3 + 1] [i_1] [i_3] [i_3] [i_5]) : (arr_13 [i_3 + 1] [i_1] [i_2] [i_3 - 1] [i_5])));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_15 += (((((var_5 ? var_7 : (arr_1 [i_6])))) ? var_4 : (arr_21 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                            arr_24 [i_3] [i_6] [i_6] [i_0] &= ((var_4 ? (((((arr_22 [i_0] [i_1] [i_2] [i_3 + 1] [i_6]) != (arr_1 [i_2]))))) : (arr_13 [i_0] [i_1] [3] [i_3 - 1] [i_2])));
                            var_16 = (((var_0 ? (arr_10 [i_0] [i_1] [i_2] [i_3]) : (arr_23 [i_3] [i_6]))));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_17 = var_3;
                            var_18 = ((var_9 || (arr_26 [i_1] [i_1] [i_3 - 1] [i_3 + 1])));
                            arr_27 [i_0] [i_2] [i_2] [i_3 + 1] = var_8;
                        }

                        for (int i_8 = 2; i_8 < 8;i_8 += 1)
                        {
                            arr_30 [i_2] [i_2] [i_2] = (((arr_4 [i_2]) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : var_1));
                            var_19 = (((arr_10 [i_3 - 1] [i_3] [i_3] [i_3 + 1]) ? (arr_15 [i_0] [i_1] [i_2] [i_3 - 1] [i_8] [4]) : 27847));
                            arr_31 [i_8] [i_2] [9] [i_2] [i_0] = ((var_9 ? (arr_2 [i_3]) : -5532964288284039084));
                        }
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_34 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((var_7 ? ((max((((arr_18 [i_0] [i_1] [i_2]) ? (arr_0 [i_9]) : var_4)), ((-(arr_29 [i_9] [i_2] [i_2] [i_1] [i_0] [i_0])))))) : (arr_7 [4] [i_1] [i_2])));
                        var_20 = 97;
                        arr_35 [i_2] [1] [i_2] = (((((((arr_4 [i_0]) && var_7)))) % (arr_18 [i_0] [i_1] [i_2])));
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_21 = (((((-((48 ? (arr_2 [i_0]) : var_2))))) | ((var_0 % (((var_7 ? var_0 : (arr_9 [i_0] [i_1] [i_2] [i_10]))))))));

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_42 [i_0] [i_2] = ((103 ? -2213329079024632117 : 12043445223962607600));
                            var_22 = (arr_3 [i_11]);
                            var_23 = (arr_41 [i_1] [i_2] [i_11]);
                        }
                        var_24 = (((((arr_22 [i_0] [3] [i_2] [i_2] [i_10]) ? var_6 : (arr_22 [i_0] [i_1] [i_2] [i_10] [i_2])))) ? ((((arr_22 [i_0] [i_1] [i_2] [i_2] [i_10]) ? (arr_22 [i_0] [i_1] [i_2] [i_2] [i_10]) : var_7))) : (max(var_9, (arr_22 [i_0] [i_10] [i_1] [i_10] [i_1]))));
                    }
                    var_25 = var_0;
                    var_26 = (((arr_25 [i_2] [i_2] [i_1] [i_0] [i_0] [i_2]) ? 1 : ((27847 ? 1 : 3079))));
                }
            }
        }
    }
    var_27 -= max(var_4, ((var_4 ? var_9 : var_4)));
    var_28 = ((var_4 ? ((max(var_0, var_7))) : ((var_9 ? var_5 : var_9))));
    #pragma endscop
}
