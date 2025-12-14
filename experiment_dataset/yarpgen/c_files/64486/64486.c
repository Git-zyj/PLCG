/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_7;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) | (max((arr_0 [i_0]), (arr_0 [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_21 = (min(var_21, (((-(((arr_4 [i_0 - 1] [i_0 + 1] [i_0]) ? var_2 : (arr_1 [i_1]))))))));
            arr_5 [i_1] &= ((var_11 ? (arr_4 [i_0] [i_0 - 3] [4]) : (arr_4 [i_0] [i_0 - 2] [i_0 + 1])));
            arr_6 [i_0] = (i_0 % 2 == 0) ? (((((arr_4 [i_0 + 1] [i_0 + 1] [i_0]) + 2147483647)) >> (((arr_1 [i_0]) - 57172)))) : (((((arr_4 [i_0 + 1] [i_0 + 1] [i_0]) + 2147483647)) >> (((((arr_1 [i_0]) - 57172)) + 1224))));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((-(arr_7 [i_2])));
        arr_10 [i_2] [5] = (((arr_8 [i_2]) + 475213909));

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_15 [i_3] = (arr_8 [i_3]);
            var_22 = (((arr_14 [i_3] [i_2]) >> (var_8 + 1241362993)));
            arr_16 [i_3] [i_2] [i_2] = (arr_12 [i_2]);

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_21 [i_2] = (((arr_8 [i_2]) + (arr_8 [i_2])));
                arr_22 [i_2] [18] [18] = -15967;
                arr_23 [i_2] [20] [i_2] [i_2] &= ((-(arr_12 [i_3])));
            }
            arr_24 [i_2] [i_3] [i_3] = ((((((arr_14 [i_2] [i_3]) * 1))) ? (!55419) : (!var_1)));
        }
        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            arr_27 [i_2] [21] [i_5] = (((arr_20 [i_5 + 4] [i_5 + 2] [i_5 + 3]) ? (arr_26 [i_2] [i_5 + 3] [i_5]) : (arr_19 [i_5 + 4] [i_5 + 3] [7] [i_2])));
            var_23 ^= arr_26 [i_5 + 3] [i_5 - 2] [i_5];
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_24 ^= 240;
            arr_32 [i_6] = (0 + -1760684735);
            var_25 += (!-3281);
            arr_33 [i_2] [21] [i_6] = (~var_7);
            var_26 += ((240 ? (arr_28 [i_2] [2] [i_2]) : (!var_6)));
        }
        var_27 = (max(var_27, (arr_26 [i_2] [i_2] [i_2])));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        var_28 = (65 && -61);
        var_29 -= ((1 ? (arr_12 [i_7]) : (arr_26 [i_7] [i_7] [i_7])));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
    {
        var_30 -= ((169468078 << (((-1995318034 + 1995318045) - 10))));
        arr_39 [i_8] [i_8] = ((5547555516931262397 ? var_9 : (arr_37 [i_8])));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            arr_49 [7] [1] [i_11] [i_8] [1] = ((-107179164 ? (arr_17 [i_9 + 1] [i_9 + 1] [16] [i_9 + 1]) : -65));
                            var_31 = (min(var_31, var_17));
                            var_32 &= (arr_35 [i_8]);
                        }

                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            var_33 = ((var_10 ? (arr_26 [i_8] [i_9] [i_10]) : ((((var_12 || (arr_25 [i_10])))))));
                            var_34 = var_11;
                            var_35 ^= (arr_25 [i_8]);
                        }
                        var_36 = (max(var_36, (arr_35 [i_8])));
                    }
                }
            }
        }
        arr_53 [i_8] = ((+(((arr_43 [i_8] [i_8] [i_8]) / (arr_29 [i_8] [22])))));
    }
    #pragma endscop
}
