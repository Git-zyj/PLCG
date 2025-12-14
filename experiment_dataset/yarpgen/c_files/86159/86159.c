/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((23248 ? -6433021935030211944 : (-9223372036854775807 - 1)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_17 = (arr_3 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = (((arr_6 [i_0 - 1] [i_1]) ? (arr_7 [i_0 - 1]) : (arr_6 [i_0] [i_1])));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_18 = ((-((-(arr_1 [i_0] [i_0])))));
                        arr_12 [i_3] [i_2] [i_1] |= ((arr_8 [i_0 - 1]) << (((arr_5 [i_3]) - 1716653401098077323)));
                        arr_13 [i_0 - 2] [i_0] [i_0 - 2] = (((arr_3 [i_0 - 1]) ? (arr_4 [i_0] [1]) : (arr_1 [i_1] [i_1])));
                    }
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            var_19 = ((-32748 ? (((arr_10 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4]) >> (((arr_4 [i_1] [i_4]) - 2414126083586367688)))) : (112 / -1143851403)));
                            var_20 = arr_10 [i_0] [i_0] [i_1] [3] [i_4] [9];
                            arr_18 [i_0] [i_0 + 1] [i_1] [i_4] [i_4] [i_0] = (arr_11 [i_5 + 2] [i_0 - 1]);
                            var_21 = (min(var_21, (arr_0 [i_0 - 1] [i_0 - 1])));
                            var_22 = (arr_14 [i_0 + 1] [i_1] [i_1] [i_2] [i_4] [i_2]);
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_21 [i_4] [i_4] = (((arr_14 [i_6] [i_4] [i_4 + 1] [i_1] [i_0 + 1] [i_0]) ? var_2 : (arr_20 [i_4] [i_1] [i_1] [i_2] [i_6] [10])));
                            arr_22 [i_4] [i_4] = var_12;
                            arr_23 [i_4] [i_0 + 1] [i_2] [i_4] [i_6] [i_2] [i_6] = ((-(arr_8 [i_0 - 1])));
                        }
                        arr_24 [i_4] = (((arr_8 [i_0 - 2]) ? (arr_8 [i_0 + 1]) : 112));
                        var_23 |= (((arr_16 [10] [i_1] [i_1] [i_1] [i_1] [i_1] [12]) ? 112 : ((var_12 + (arr_0 [i_2] [i_4])))));
                    }
                }
            }
        }
        arr_25 [i_0] = 1;
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    var_24 = (((arr_2 [12]) && (!1)));
                    var_25 = ((-(max(124, (arr_11 [i_8] [i_8])))));
                    arr_35 [i_7] [i_8] [i_7] [i_8] = ((!(((85 ? (arr_15 [i_7] [i_8] [i_9] [i_8]) : ((((arr_15 [i_7] [i_7] [i_9] [i_9]) ? var_12 : (arr_33 [i_7] [i_8] [i_7] [i_7])))))))));
                    var_26 = (min((((arr_0 [i_7] [i_8]) ? (((arr_16 [i_7] [i_7] [i_8] [i_7] [i_7] [i_7] [i_7]) ? -2582560855481929340 : 8334)) : (arr_27 [i_8]))), ((((((var_13 ? var_4 : var_13))) ? ((min(var_13, 32736))) : 179)))));
                }
            }
        }
        var_27 *= (min((((arr_11 [i_7] [i_7]) ? (arr_11 [i_7] [7]) : (arr_11 [i_7] [i_7]))), (((max(var_0, (arr_27 [i_7])))))));
    }
    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        arr_38 [i_10 + 1] [1] = ((var_14 ? var_9 : (((min(2055368758227845057, 9223372036854775807)) >> (((arr_36 [i_10 + 1] [i_10 + 1]) + 51))))));
        var_28 = max(((min(101, (arr_36 [i_10 - 1] [i_10 - 1])))), (arr_36 [i_10 + 1] [i_10 + 1]));
        var_29 = (min(var_29, ((max((max((arr_37 [i_10 - 1]), (arr_37 [i_10 - 1]))), (arr_37 [14]))))));
        var_30 = ((-(((arr_37 [0]) ? (arr_37 [i_10 - 1]) : (max((arr_37 [i_10]), (arr_37 [i_10 + 1])))))));
    }
    #pragma endscop
}
