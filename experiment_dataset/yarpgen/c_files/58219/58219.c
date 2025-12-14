/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 = ((((((arr_3 [i_1 + 2] [i_1 + 2]) ? ((max(var_7, (arr_3 [7] [21])))) : (max((arr_7 [3] [1] [i_2] [3]), var_12))))) ? ((var_6 ? (arr_3 [i_0] [i_0]) : (((arr_0 [i_1]) & (arr_2 [i_0 - 1]))))) : (arr_5 [i_0] [i_0] [i_0])));
                            arr_8 [i_0] [i_1] = ((((((arr_4 [i_0 + 1] [i_1 + 4]) ? (min(var_10, var_5)) : ((((arr_6 [i_3 - 2] [i_2] [14] [i_1 + 3] [14] [14]) - (arr_5 [i_3] [i_0 + 1] [i_0 + 1]))))))) ? (((((arr_2 [i_0]) > ((((((arr_6 [i_0 - 1] [i_1] [i_1] [i_2] [i_1] [i_1]) + 2147483647)) << (((arr_0 [i_1]) - 27999))))))))) : (arr_2 [i_0 - 1])));
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_2] = (arr_2 [i_0]);
                        }
                    }
                }
                arr_10 [i_0] = (arr_4 [18] [i_0]);
                var_14 = (arr_3 [i_1 + 3] [i_0]);
            }
        }
    }
    var_15 = ((((var_8 ? (max(var_2, var_12)) : var_4)) << (var_7 - 2013520462)));
    var_16 = ((var_1 ? ((var_12 ? var_8 : var_2)) : var_11));
    var_17 = ((var_12 << (var_3 - 24)));

    for (int i_4 = 3; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] [i_4] = (arr_0 [i_4]);
        var_18 = (((arr_3 [i_4] [15]) ? ((max((arr_12 [i_4] [i_4]), (((arr_4 [i_4 - 1] [i_4]) ? (arr_6 [i_4] [i_4] [i_4] [i_4] [19] [i_4]) : (arr_5 [i_4] [i_4] [i_4])))))) : (arr_2 [i_4])));
        var_19 = (max((((arr_4 [i_4] [i_4]) ? var_8 : (arr_11 [2]))), (((var_12 ? (arr_12 [i_4 + 3] [i_4 + 2]) : (max((arr_3 [i_4 - 2] [i_4]), (arr_5 [i_4] [i_4] [i_4]))))))));
    }
    for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] = (arr_4 [i_5 + 2] [i_5]);
        var_20 = (((min(var_6, (arr_12 [i_5 - 3] [i_5 - 1]))) - (arr_11 [i_5 + 2])));
        var_21 = var_8;
        var_22 = (var_0 ^ var_11);
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 13;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            var_23 = (((((arr_5 [i_6] [9] [i_7]) < var_5)) ? (((arr_0 [i_7]) ? (arr_4 [i_7] [i_6]) : var_11)) : var_0));
            var_24 = (arr_19 [i_6]);
            arr_23 [i_6] [i_7] [i_6] = var_5;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        var_25 = (arr_4 [20] [i_6 + 2]);

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_26 = ((((((arr_5 [i_10] [i_8] [i_7]) - (arr_14 [i_6])))) ? (arr_5 [i_7 + 3] [i_7 + 1] [i_6 - 3]) : ((var_8 ? var_10 : (arr_22 [i_10] [i_9] [i_7])))));
                            arr_31 [i_6] [i_7] [i_8] [i_6] [i_6] [i_9] [12] = (arr_11 [i_6 + 3]);
                        }
                        arr_32 [i_7] [i_6] [i_6] [6] [i_6] = var_7;
                    }
                }
            }
            var_27 = (arr_27 [i_6] [i_7 - 1] [i_6 + 1] [i_6]);
        }
        for (int i_11 = 1; i_11 < 15;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    {
                        var_28 = ((var_6 % (arr_26 [i_12] [i_12 + 3] [13] [i_12 + 3])));
                        arr_41 [i_6] = (arr_4 [10] [i_13]);
                        arr_42 [i_6] [1] [i_11] [i_6] = (arr_18 [i_12] [i_12]);
                        var_29 = (((arr_38 [i_6 - 2] [i_11 + 1] [i_12 + 2] [i_12] [i_13]) ? (arr_35 [i_12 + 2] [i_13]) : (arr_25 [i_6] [i_11 + 1] [i_11] [i_11 + 1])));
                        var_30 = ((((((arr_37 [i_6] [i_11] [i_6] [i_13]) % (arr_30 [i_11] [i_11])))) ? ((var_1 ? (arr_38 [9] [i_11] [i_12] [i_11] [i_6]) : (arr_1 [i_11] [9]))) : ((((arr_7 [8] [i_11 + 1] [12] [i_11 + 1]) || var_9)))));
                    }
                }
            }
            arr_43 [i_6] [i_6] = (((((var_2 < (arr_29 [i_6] [i_6])))) > (arr_37 [15] [i_11] [i_6] [i_6])));
        }
        var_31 = (arr_0 [i_6]);
    }
    #pragma endscop
}
