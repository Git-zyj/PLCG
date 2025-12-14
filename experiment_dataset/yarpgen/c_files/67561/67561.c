/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 15;
    var_14 = var_12;
    var_15 = (max(var_2, (((min(var_11, var_3))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [6] = ((((min((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ? (arr_1 [i_0] [i_0]) : ((max((arr_0 [i_0]), (arr_0 [13]))))));
        arr_4 [i_0] = ((261996225 | ((min((arr_2 [i_0]), (((arr_2 [i_0]) - (arr_2 [i_0]))))))));
        arr_5 [i_0] [i_0] = ((((arr_0 [i_0]) + (arr_0 [i_0]))) + ((min((arr_0 [i_0]), (arr_0 [i_0])))));
        var_16 = (max(var_16, (((((((((((arr_1 [i_0] [i_0]) && (arr_2 [i_0]))))) | (arr_1 [i_0] [i_0])))) | ((((arr_2 [15]) ? (arr_0 [i_0]) : (arr_0 [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_17 = (max(var_17, (((~(((arr_7 [i_2]) ^ (arr_7 [i_2]))))))));
            var_18 = (max(10397956554389566525, (arr_7 [i_1])));
            arr_10 [i_1] [i_2] = (arr_8 [i_1] [i_1] [i_2]);
        }
        var_19 = (arr_8 [i_1] [i_1] [18]);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_20 = (min(var_20, (4139028387 | -451)));

            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                arr_16 [i_1] [i_4] [i_4] |= arr_15 [i_4];
                arr_17 [6] [i_4] [i_4] |= arr_6 [14];
                arr_18 [i_1] [i_3] [i_1] [i_4] = ((~(arr_11 [i_1])));
                var_21 -= ((-344005243 & 177) ? (((arr_12 [14] [14]) ? (arr_8 [i_4] [i_3] [i_4]) : 104)) : (arr_12 [i_3] [i_4]));
                var_22 = ((874151330 ^ (arr_9 [i_4])));
            }
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                var_23 = ((-(arr_14 [i_5 - 3] [i_5 - 1] [i_1] [i_5])));
                var_24 = (min(var_24, (arr_8 [12] [i_3] [12])));
                arr_21 [i_1] [18] [i_1] = (((((arr_9 [7]) & (arr_13 [i_1]))) | (arr_20 [i_5 + 2] [i_5 + 2] [i_5 - 3])));
            }
            var_25 = (((arr_8 [i_1] [i_3] [i_3]) ^ (((arr_7 [i_1]) ? (arr_9 [i_3]) : (arr_7 [i_1])))));
            arr_22 [i_1] = ((!(arr_9 [i_3])));

            for (int i_6 = 3; i_6 < 20;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    arr_28 [10] [i_7] &= ((((arr_19 [13] [i_3] [2] [21]) ? (arr_15 [6]) : -1750679518100200862)));
                    var_26 ^= -980320568;
                    arr_29 [i_1] [i_1] [i_3] [i_1] [8] [8] = 660372366756096602;

                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_27 = 2139095040;
                        var_28 = ((-(arr_20 [i_1] [i_7] [i_8])));
                    }
                    for (int i_9 = 3; i_9 < 20;i_9 += 1)
                    {
                        var_29 -= (arr_26 [i_7] [11]);
                        arr_36 [i_1] [19] = ((((!(arr_32 [i_1] [i_3] [19] [i_7] [i_9] [i_3] [i_9]))) ? 55804 : 15379));
                    }
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    var_30 = (max(var_30, (arr_27 [i_3] [i_10])));
                    arr_40 [i_1] [i_3] [i_6] [21] = ((-((~(arr_27 [i_3] [i_6])))));
                    var_31 = (((-2065346312348169402 | (arr_24 [i_1] [i_6 - 3] [i_1]))));
                    arr_41 [i_1] = (arr_9 [i_10]);
                }
                arr_42 [9] [2] [i_1] [9] = (arr_26 [i_1] [i_3]);
            }
            for (int i_11 = 3; i_11 < 19;i_11 += 1)
            {
                arr_46 [i_1] [i_3] [i_1] = (((arr_14 [i_11 + 3] [i_11 + 3] [i_1] [i_11]) ? (arr_8 [i_1] [11] [i_11]) : (arr_19 [i_11 + 2] [i_11 + 3] [i_11] [i_11 - 3])));
                arr_47 [i_1] [i_1] [6] = (arr_11 [i_1]);
            }
        }
    }
    #pragma endscop
}
