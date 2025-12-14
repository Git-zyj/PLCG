/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_9 == (min(var_9, (min(var_0, var_6))))));
    var_20 = (min(var_20, var_11));
    var_21 = ((min(var_1, (var_11 - var_2))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = 242658831;
        var_22 = ((((((arr_3 [i_0 + 1]) ? 6 : (arr_2 [i_0] [i_0])))) ? 6008133789105002726 : (((arr_2 [i_0] [i_0]) ? (arr_2 [1] [i_0]) : 4130710411))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (((min(((min((arr_6 [i_1 + 1]), (arr_6 [i_1])))), (var_12 ^ var_18))) / ((-(arr_6 [i_1 - 1])))));
        var_23 = (min((((~var_15) ? (arr_6 [17]) : (arr_5 [i_1] [10]))), (arr_5 [i_1] [i_1])));
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                {
                    var_24 = (min(var_24, 0));
                    arr_16 [i_3] = (min((min(var_4, (arr_6 [i_3]))), (arr_9 [i_2 - 1] [i_4 - 1])));
                    arr_17 [i_2] [18] [i_3] = (min(var_1, var_10));
                }
            }
        }
        var_25 += ((-(((arr_9 [i_2 + 1] [i_2 + 1]) ? (arr_9 [i_2 + 1] [i_2]) : (arr_9 [i_2 + 1] [i_2])))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_26 = (min(var_26, var_10));
                                var_27 = (max(var_27, (((!(((var_6 ? (((3611943651621874257 ? (arr_10 [i_8]) : var_13))) : (1 | 6)))))))));
                            }
                        }
                    }

                    for (int i_9 = 3; i_9 < 22;i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_2] [i_2] [0] = ((min(9506887510888172966, 1441307385)));
                        arr_32 [i_2] [1] [i_6] [i_9] = (min(((-var_15 ? (((arr_27 [i_2] [19] [i_5] [i_5] [i_6] [i_9] [i_9]) % 4130710389)) : (min((arr_25 [14] [i_5] [i_2]), var_15)))), var_14));
                    }
                    for (int i_10 = 3; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        var_28 = (max(var_28, ((var_12 < ((((min((arr_5 [i_2 + 1] [i_5]), (arr_35 [5] [6])))) ? var_12 : (min((arr_34 [i_2] [i_2] [i_2] [7]), (arr_22 [i_2] [i_5] [i_2])))))))));
                        var_29 = (((((~(arr_29 [i_10 - 3])))) * (~9506887510888172954)));
                        arr_36 [i_2 + 1] [i_6] [i_10] = ((((min((arr_21 [i_2] [1] [i_6] [i_10]), (arr_30 [2] [i_10 - 2] [i_10] [11] [i_5] [i_2])))) | (((((((arr_26 [i_2] [i_5] [i_6] [i_10]) - (arr_12 [i_2] [5] [i_2])))) ? -var_7 : (arr_35 [i_2 + 1] [i_5]))))));
                        arr_37 [14] [i_5] [i_6] [14] [22] = (arr_24 [i_2] [i_2] [i_5] [5] [i_2]);
                        arr_38 [i_2] [i_5] [i_6] [i_10] [i_6] = arr_9 [i_2] [i_2 - 1];
                    }
                    var_30 = (((((-((min((arr_18 [i_2] [21]), var_12)))))) ? (!309495613) : ((((var_15 ? (arr_10 [i_5]) : 9223372036854775807)) + ((min(0, 554052192)))))));
                }
            }
        }
    }
    #pragma endscop
}
