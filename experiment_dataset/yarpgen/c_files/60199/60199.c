/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_7 [i_2] = var_7;
                    arr_8 [i_0] [i_2] = ((-(min((arr_4 [i_2 + 4] [i_0] [i_2 + 4]), (arr_4 [i_2 + 1] [i_1] [i_2 + 1])))));
                }
            }
        }
        var_12 = (max(var_12, (!var_9)));
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        var_13 += ((((arr_10 [i_3 + 2]) || var_1)) ? ((((arr_10 [i_3 + 2]) || (arr_10 [i_3 + 2])))) : (arr_10 [i_3 + 2]));
        arr_11 [i_3] = var_5;
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_14 = (max(var_14, ((max((((arr_13 [i_4]) ? var_11 : (arr_13 [i_4]))), (-9223372036854775807 - 1))))));

        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        arr_23 [i_4] [i_5] [i_6] [i_6] = ((~(arr_22 [i_4] [i_5] [19] [i_6 + 1] [i_7])));

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_28 [i_4] [i_5] [i_6] [i_6] [i_8] = (arr_25 [i_4] [i_5 + 2] [i_6 - 1] [i_5 + 2] [i_8] [i_5]);
                            arr_29 [i_4] [i_5] [8] [i_7] [8] [i_6] = ((min(2492505477, var_7)));
                            var_15 -= ((2492505475 ? 2492505477 : (((max(77, (arr_13 [i_7])))))));
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_16 = (((arr_26 [i_6] [i_6] [i_6] [i_9]) ? (arr_19 [i_5 + 1]) : (((-(arr_24 [i_5 + 4] [i_5] [i_5 + 3] [i_5 + 4] [i_6] [i_7]))))));
                            var_17 ^= var_5;
                            var_18 = ((+(((arr_27 [i_9] [i_9] [i_6 + 1] [i_6] [i_6]) ? (arr_27 [i_9] [i_7] [i_6 + 3] [i_6] [i_5]) : var_9))));
                        }
                        var_19 = ((~(~var_2)));
                    }
                }
            }
            arr_32 [i_4] [i_4] [1] = ((-((113 ? -5786901231633441533 : 1))));
            var_20 ^= ((14505 ? var_0 : (arr_27 [i_4] [i_4] [i_5] [i_5] [i_5])));
        }
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            var_21 = (arr_34 [i_4] [i_10]);
            arr_37 [i_4] = (((arr_15 [i_4]) ^ (arr_15 [i_4])));
            var_22 = (max(var_22, ((min((max((arr_35 [i_4] [i_10]), ((max((arr_33 [i_10]), var_5))))), (((~(arr_24 [i_10] [i_4] [i_10] [i_10] [i_4] [i_4])))))))));
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            arr_41 [i_4] [i_4] = (arr_33 [i_4]);
            arr_42 [i_4] [i_4] [i_4] = ((-((~(((arr_18 [21] [i_4] [i_11]) << 28))))));
        }
        var_23 = (max(var_23, (arr_38 [i_4])));
    }
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        var_24 *= ((min(var_3, (arr_5 [i_12] [i_12] [i_12]))));
        arr_45 [7] = ((+((var_1 ? (2915032877 < 1802461819) : (arr_14 [i_12] [i_12])))));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 10;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                {
                    arr_53 [i_12] [i_14] = (((((arr_38 [i_13]) & ((((arr_51 [i_12] [i_13] [i_14] [i_14]) & (arr_13 [i_12])))))) | (arr_49 [i_14 - 1] [i_14 - 1] [i_14 - 1])));
                    var_25 ^= (arr_20 [i_14 - 1] [i_12] [i_14]);
                    var_26 = (~var_10);
                }
            }
        }
    }
    var_27 = var_9;
    var_28 = -var_1;
    var_29 = var_7;
    #pragma endscop
}
