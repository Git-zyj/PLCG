/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_3 ^ (var_9 < -var_5)));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_13 -= var_4;
        var_14 = (max(var_14, var_2));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_0] [11] [i_2] [i_2] = var_6;
                        var_15 = -18446744073709551615;
                        arr_12 [i_3] [i_2] [i_2] [i_0] = ((arr_9 [i_1 - 2] [i_2] [i_3] [i_1]) / (arr_0 [i_0 - 1]));
                    }
                    var_16 = var_0;
                    arr_13 [i_0 - 3] [i_1] [i_2] [i_2] = (arr_10 [i_1] [i_1] [9] [i_1 - 1]);
                    var_17 = (min(var_17, 2));
                }
            }
        }
    }
    var_18 = var_8;

    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        var_19 = (min((min(18446744073709551610, 1059983471)), 7));
        arr_16 [i_4 - 1] |= (-(min(var_3, ((((arr_15 [i_4 + 2]) ? (arr_15 [i_4]) : var_10))))));
        var_20 *= min(((((var_2 ? var_11 : 3234983850)))), ((-(~1686065540))));
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_21 = (((((max(702400410, 1059983474)))) ? var_2 : ((~(min((arr_15 [i_6]), 18446744073709551601))))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_22 = (((arr_18 [i_5 - 2] [i_5 - 1] [i_4 + 1]) - (var_2 || 11)));
                            arr_28 [i_4] |= (((arr_19 [i_4 + 2] [i_4] [i_4]) ? (arr_19 [i_4 + 1] [i_4] [i_4]) : -32));
                            arr_29 [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4] = (arr_23 [i_4 + 1]);
                        }
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            arr_32 [2] [i_5] [i_6] [i_7] [i_9] |= ((((max(65535, 32749))) ? (7 ^ 231) : -23));
                            var_23 = ((((var_6 & (max((arr_17 [i_6]), 255)))) <= ((min((arr_21 [i_4] [i_6] [i_7]), var_7)))));
                            arr_33 [i_4] [i_4] [i_4] [i_4] [i_4 - 1] = (-(((var_5 + var_9) ? (min((arr_23 [i_6]), 8020025618618578292)) : (max(13402647139045506761, (arr_22 [i_4 - 1] [i_5] [i_5] [i_6] [i_9]))))));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        var_24 = ((-(arr_2 [i_10])));
        var_25 = (-(arr_0 [i_10]));
        var_26 = (min(var_26, ((((~65528) ? (((3592566886 ? -2048 : (arr_10 [i_10] [i_10] [i_10] [i_10])))) : (arr_21 [i_10] [i_10] [13]))))));
        var_27 -= var_6;
    }
    #pragma endscop
}
