/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((((var_15 == var_2) ? ((var_6 ? var_14 : var_12)) : (~var_14))) >= var_10))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_6 [i_0] [12] [12] [i_0] = arr_0 [i_2];
                    var_17 = (max(var_17, (((arr_3 [i_0 + 2] [i_0]) ? (arr_3 [i_0 + 2] [i_2]) : (arr_3 [i_0 + 2] [19])))));
                    arr_7 [i_0] = var_13;
                }
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    var_18 &= ((((((min((arr_1 [20] [6]), var_2))) - ((min(var_14, 2)))))) ? (arr_0 [i_1 - 3]) : ((min((arr_5 [i_1] [i_1] [i_1] [i_0 - 1]), (arr_0 [i_0])))));
                    var_19 += (arr_1 [6] [6]);
                    var_20 = (((arr_8 [i_0]) > (arr_0 [i_0])));
                }
                for (int i_4 = 2; i_4 < 20;i_4 += 1)
                {
                    var_21 = (((7150252539466123594 > 255) ? (min((arr_5 [i_0] [i_0] [i_0] [i_0]), (max((arr_11 [i_0]), var_11)))) : (((arr_3 [i_0 + 3] [i_4 + 1]) ? (min(var_7, (arr_3 [i_4] [i_0]))) : ((var_6 ? 10776911617615702293 : 2))))));

                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_4] [i_0] [i_5] = (((arr_1 [i_0] [i_1 + 2]) & (~var_0)));
                        var_22 = ((89 ? 364943439275356739 : 7585643968665653210));
                        var_23 = arr_15 [i_0];
                        var_24 = (((((~(arr_13 [15] [i_1] [i_0]))))) ? ((var_3 ? (arr_9 [i_5 - 3] [i_5] [i_5 - 3] [5]) : var_5)) : (((~(arr_12 [i_0 + 1] [i_0 - 1] [1])))));
                        var_25 += (~0);
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        arr_21 [i_0] [15] [i_1] [8] [i_0] = ((arr_16 [i_0 - 1] [i_4 - 2]) ? ((((arr_11 [i_0]) ? (arr_2 [i_0]) : var_0))) : var_10);
                        var_26 = (max(var_26, ((((((~(arr_13 [i_0] [i_1] [i_4])))) ? ((((arr_10 [i_4]) ? var_11 : (arr_0 [i_0])))) : var_13)))));
                        var_27 = (arr_2 [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {
                        var_28 = (max(var_28, ((((-(((arr_20 [i_4] [14] [8] [i_4]) ? (arr_19 [i_0] [5] [i_4] [i_0] [5] [1]) : -13))))))));
                        arr_25 [i_0 - 1] [i_0] [i_7] = (((arr_15 [i_0]) ? (((arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]) : (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]))) : (((((arr_13 [i_0 + 3] [i_1] [i_4]) >= var_15))))));
                        var_29 = (max((((arr_22 [i_0] [i_1 + 1] [i_0 + 1] [i_0]) + (~10861100105043898405))), (arr_10 [0])));
                        var_30 += ((993635803 % ((max(var_9, var_9)))));
                    }
                    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                    {
                        var_31 *= (min(8, 8));
                        arr_29 [i_1 - 2] [i_0] = (arr_3 [i_0 + 1] [i_4]);
                    }
                }
                var_32 = (min(var_32, 7585643968665653224));
                var_33 = (min(var_33, ((min((min((((arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [8] [8]) ? (arr_11 [10]) : (arr_8 [4]))), (min((arr_13 [i_0] [i_0] [i_0]), var_11)))), (arr_8 [0]))))));
                var_34 = (min(var_34, (((arr_2 [6]) ? (arr_2 [1]) : (arr_2 [18])))));
            }
        }
    }
    #pragma endscop
}
