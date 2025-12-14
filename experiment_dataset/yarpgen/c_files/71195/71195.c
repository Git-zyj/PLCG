/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((!(((var_15 + ((-(arr_1 [i_1] [i_1]))))))));
                var_16 = ((-(~6911637275456544889)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = ((-(arr_7 [i_1] [i_3] [i_0] [i_3 - 2])));
                                var_18 = (((arr_6 [i_3 + 1] [i_3 - 3] [i_3] [i_3 + 1]) ? (arr_10 [i_0] [i_1] [i_2] [i_3] [i_3 + 1]) : (1 || -7)));
                                arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] [i_1] = ((arr_2 [i_1] [i_4]) ? (arr_5 [i_0] [i_1]) : var_12);
                                var_19 = (var_7 % ((((arr_1 [i_1] [i_1]) - (arr_0 [i_3 - 1])))));
                            }
                        }
                    }
                    var_20 -= ((108 ? 111 : -2));
                    arr_13 [i_0] [i_1] [i_1] = (((arr_2 [i_1] [i_1]) ? (arr_9 [i_1] [i_2]) : (arr_6 [i_2] [i_1] [i_2] [i_2])));
                    var_21 -= var_11;
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_22 = ((!(((var_4 ? (arr_10 [i_0] [i_1] [i_5] [i_6] [i_7]) : (arr_7 [i_0] [i_1] [i_1] [i_7]))))));
                            arr_23 [i_0] [2] [i_7] [i_7] [i_1] [i_7] [i_1] = (arr_5 [i_0] [i_0]);
                        }
                        var_23 += (arr_14 [i_0] [i_1]);
                        arr_24 [i_0] [i_1] [i_5] [i_6] = (arr_0 [i_0]);
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_27 [i_1] [i_1] [i_5] [i_0] = (min(65024, 5123));
                        arr_28 [i_0] [i_1] [i_5] [i_1] = (max(((~(!149))), 12348));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_24 -= (min((arr_15 [i_1] [i_5] [i_9]), ((((arr_15 [i_1] [i_5] [i_9]) ? (arr_15 [i_9] [i_9] [i_9]) : (arr_15 [i_9] [i_5] [i_1]))))));
                        var_25 ^= ((-((min((arr_20 [i_0] [12] [i_0] [i_9]), (arr_20 [i_0] [i_1] [14] [i_9]))))));
                        var_26 = (min((arr_2 [i_1] [i_1]), (((((max(var_10, (arr_26 [i_0] [i_1] [i_5] [1] [i_9])))) ? (arr_14 [i_5] [i_5]) : (arr_21 [i_0] [i_1] [i_5] [i_5] [i_9]))))));
                    }
                    var_27 = (((arr_5 [i_0] [i_1]) + ((-(arr_5 [i_0] [i_1])))));
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    var_28 -= (min((((!((min((arr_5 [i_0] [i_1]), var_4)))))), (max(var_14, (min(var_3, var_13))))));
                    arr_33 [1] [2] [i_1] [i_10] = (arr_11 [i_0] [i_0]);
                    arr_34 [i_0] [i_0] [i_1] = ((-((17217904961041377184 ? var_4 : 2334219078889552231))));
                    arr_35 [8] [i_1] [i_1] [i_1] = ((((min(((!(arr_21 [i_0] [i_0] [i_1] [i_1] [i_10]))), 1))) << (32767 - 32741)));
                }
                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    arr_39 [i_1] [i_1] [i_1] = (min((min((arr_38 [i_11 - 1] [i_11 + 1] [i_11]), (arr_38 [i_1] [i_11 + 2] [i_11]))), ((min((arr_15 [i_0] [i_1] [i_11 + 3]), var_11)))));
                    var_29 *= 1;
                    var_30 = (281474909601792 <= 255);
                    arr_40 [i_0] [i_1] [i_1] = (((((!(arr_17 [i_1] [i_1] [i_11])))) == 23));
                }
            }
        }
    }
    var_31 -= var_9;
    var_32 = var_14;
    #pragma endscop
}
