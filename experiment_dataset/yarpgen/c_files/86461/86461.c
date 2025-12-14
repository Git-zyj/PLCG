/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = (min(((!((max(var_8, var_12))))), var_1));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (min(var_15, (arr_0 [i_0] [i_0])));
        arr_2 [i_0] = ((-(min((1695946292 + var_7), -524287))));
        arr_3 [i_0] = min(-121, var_9);
        arr_4 [i_0] [i_0] = max(0, (-32767 - 1));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_17 [i_1] [i_3] [i_4] = (arr_13 [14] [i_4 + 1] [i_3] [i_4]);
                        var_16 *= ((((((var_4 ? (arr_10 [i_1] [i_2] [i_3]) : var_2)) < -var_9)) ? 317403296774732761 : ((((arr_13 [i_4 + 1] [i_2] [i_2] [14]) ? -1409274381 : (max((arr_6 [i_1] [i_1]), (arr_15 [i_4] [i_4] [i_4]))))))));
                        arr_18 [i_1] [i_2] [i_3] [i_4] = (-524287 || -18369);
                    }
                }
            }

            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_17 = (max(var_17, var_6));
                            var_18 = ((((!(arr_11 [i_6] [i_5 - 3] [i_5] [i_5 - 1]))) ? (min((!9223372036854775807), -1409274381)) : (max(((65535 ? -293800693 : var_7)), (((arr_12 [i_5] [i_7]) ? (arr_1 [i_1]) : (arr_13 [i_1] [i_2] [i_6] [i_7])))))));
                            arr_27 [i_2] [i_5] [i_6] [0] = ((((max((((1409274381 ? 7251 : 71))), (arr_12 [i_5 + 1] [i_5 + 2])))) ? (((-(arr_13 [i_7] [i_2] [i_5 - 3] [i_6])))) : (max((!35268), ((var_10 ? var_7 : (arr_11 [i_1] [i_1] [i_1] [i_1])))))));
                        }
                    }
                }
                arr_28 [i_5] [i_2] [i_5] = (max((arr_9 [i_5 - 2] [i_5 + 1]), (~2057048061)));
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                arr_31 [3] [i_2] = ((((max(((0 ? -1409274381 : 1)), var_11))) ? (arr_20 [i_1] [i_8]) : (((((var_1 ? 524287 : var_11)) < (((var_3 <= (arr_1 [i_1])))))))));
                arr_32 [i_8] [1] [i_1] = ((~(max((((!(arr_29 [i_1] [i_2] [i_8])))), (min(var_7, var_12))))));
            }
            arr_33 [2] [i_1] [i_2] = -524287;
            arr_34 [i_2] [i_1] [i_1] = ((!((max((arr_23 [i_1] [i_2] [i_2] [i_2] [4]), (arr_23 [i_2] [i_2] [i_2] [i_1] [i_2]))))));
            arr_35 [i_1] [i_1] = (min((((var_3 ? var_9 : var_0))), ((min((arr_0 [22] [i_1]), (!var_1))))));
        }
        var_19 = (((((+(((arr_1 [i_1]) ? 951 : (arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))) ? (((min(var_3, 951)) / (arr_8 [i_1]))) : -1409274381));
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
    {
        var_20 = (min(35163, 0));
        var_21 = 0;
        var_22 = (((((var_1 ? (((arr_19 [i_9]) ? (arr_12 [i_9] [i_9]) : (arr_16 [1] [i_9] [i_9] [19] [i_9]))) : (arr_7 [i_9] [8] [i_9])))) ? (-1302020167 ^ var_9) : (arr_21 [i_9] [i_9] [i_9])));
    }
    #pragma endscop
}
