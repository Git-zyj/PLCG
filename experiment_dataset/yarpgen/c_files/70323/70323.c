/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            var_16 |= 32;
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_17 = (max(var_17, var_14));
                            var_18 = (((((arr_0 [i_1] [i_1]) ? 12809628324039627932 : 23863))) ? 1 : (((var_11 >= (arr_8 [i_0 - 1] [i_3] [14] [i_2] [i_3] [i_0 - 1])))));
                            var_19 = (~-var_1);
                        }
                    }
                }
            }
            var_20 += (arr_10 [i_0 + 1] [6] [6] [i_1] [i_1]);
        }
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            arr_15 [i_0] [i_5] = -11840;
            var_21 = var_7;
            arr_16 [i_0] [1] [10] |= 32;
        }
        arr_17 [i_0] [i_0] = (20 ? (arr_11 [i_0 - 1]) : (max(var_7, (arr_11 [i_0 - 1]))));
    }
    for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6 - 1] = ((-((-121 ? 5277060111530899848 : var_12))));
        arr_22 [i_6] = -1;
        arr_23 [i_6] = (min((((arr_18 [i_6 - 1]) ? var_12 : var_8)), ((((arr_18 [i_6 - 1]) % 23863)))));
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {
                arr_29 [i_7] [i_8] = ((((((arr_10 [9] [i_7] [i_8] [1] [i_8]) ? ((var_14 ? (arr_1 [i_7 + 1] [i_8]) : -3109048)) : (~128)))) && 333771135497773672));
                var_22 |= (arr_2 [i_7] [i_8]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            {
                var_23 = ((((((arr_7 [i_9] [i_10] [i_10] [i_10] [i_10]) ? (arr_9 [i_9] [i_10]) : (arr_9 [i_9] [i_10])))) ? -1673577157 : (((arr_7 [i_9] [i_10] [i_10] [i_9] [i_9]) & (arr_9 [i_10] [i_9])))));

                for (int i_11 = 1; i_11 < 14;i_11 += 1)
                {
                    var_24 = (((((0 + (arr_2 [2] [i_11 + 1])))) ? (arr_5 [i_9] [i_10] [i_11] [i_11]) : (arr_1 [i_9] [i_9])));

                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        arr_42 [i_9] [i_10] [i_10] [i_12] = (((((arr_41 [i_11 + 1] [i_11 - 1]) && -128)) ? 65528 : 127));

                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            arr_46 [i_10] [i_10] [i_10] [i_12] [i_13] = 0;
                            var_25 = var_7;
                            arr_47 [i_10] = ((!(!-11136)));
                            var_26 += (arr_19 [i_12]);
                        }
                        arr_48 [i_9] [i_9] [i_11] [i_10] = ((~(((min(20789, -25317))))));
                        var_27 |= 0;
                    }
                }
                for (int i_14 = 1; i_14 < 12;i_14 += 1)
                {

                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        arr_55 [i_9] [i_9] [i_9] [i_10] = 3109048;
                        arr_56 [i_10] [i_10] [i_14 - 1] [i_14] [i_15] [i_15 - 1] = ((-1673577157 ^ ((var_2 ? var_9 : (arr_31 [13] [i_10])))));
                        var_28 = (arr_38 [i_10] [i_15 - 1] [i_15]);
                        arr_57 [i_14] [i_10] = ((724889889 ? ((((arr_5 [i_9] [i_10] [i_14 - 1] [i_15 - 1]) && (arr_20 [i_14])))) : 2979244756982958702));
                    }
                    arr_58 [i_10] [i_10] = (arr_12 [i_9] [i_10] [i_14]);
                    arr_59 [i_10] = ((+(max(((47610 ? (arr_20 [i_10]) : (arr_0 [i_10] [i_9]))), 32755))));
                }
                arr_60 [i_9] [i_9] [i_10] = (var_10 ^ (arr_18 [i_10]));
                var_29 = -8220506067638776434;
            }
        }
    }
    #pragma endscop
}
