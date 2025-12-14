/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (min(var_20, ((max(var_17, ((1 ? 1 : ((min(1, 1))))))))));
        arr_2 [i_0] [i_0] = ((((min((arr_1 [i_0]), 1))) & (((arr_1 [i_0]) ? (arr_1 [i_0]) : 1243832010))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = var_2;

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        var_21 = (((((-(arr_7 [i_0] [i_1 - 2])))) ? ((var_1 ? (arr_7 [i_0] [i_1 + 2]) : (arr_7 [i_0] [i_1 + 1]))) : (23 % 1)));
                        var_22 = ((~(!-5644699290018228825)));
                        arr_13 [i_0] = var_18;
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_4 + 1] = ((!(arr_0 [i_0] [i_1])));
                        arr_18 [i_0] = var_0;
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_21 [i_5] [i_0] [i_0] [i_0] = (((arr_16 [i_0] [i_1] [i_2] [i_1 + 1]) / -101));

                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            var_23 = (-(arr_22 [i_0] [i_2 - 2] [2] [i_5] [16] [i_6 - 3] [i_1 + 2]));
                            arr_24 [i_5] [i_6] &= (((1 / 16) >= (-17 < 1740353115)));
                        }
                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            arr_28 [i_5] [i_1 + 2] [i_2 - 2] [i_0] [4] = (!(arr_8 [i_1] [10] [i_0]));
                            var_24 = 1;
                        }
                        var_25 = (max(var_25, ((((((1 ? 1 : 939524096)))) || (arr_15 [16] [16] [9] [i_1 - 2] [16] [i_1])))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_31 [2] [i_8] = -var_0;

        for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
        {
            arr_34 [i_8] [i_8] [i_8] = (((((var_5 ? var_11 : var_9)) / (arr_33 [i_8]))));
            arr_35 [i_9 + 1] [19] = 232;
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 19;i_10 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_11 = 2; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 20;i_13 += 1)
                    {
                        {
                            arr_46 [i_8] [19] [i_12] [i_12 + 1] [16] [i_13] [8] = (arr_15 [i_13 + 1] [i_13 + 1] [i_12 - 2] [i_12 - 2] [i_11 - 1] [i_10 - 2]);
                            arr_47 [i_8] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_13 - 1] = 1;
                        }
                    }
                }
            }
            var_26 = (min(var_26, var_4));
            var_27 = 457779505;
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 21;i_15 += 1)
                {
                    {
                        arr_53 [i_10] [i_10] [i_8] [i_10 - 1] &= (arr_8 [i_8] [i_10] [i_10]);
                        var_28 = var_19;
                    }
                }
            }
        }
        var_29 ^= 1;
        var_30 = (min(var_30, ((((arr_12 [i_8] [i_8]) >= 22)))));
    }
    for (int i_16 = 1; i_16 < 17;i_16 += 1)
    {
        arr_56 [4] [4] &= ((-(max(((-(arr_5 [i_16] [i_16]))), (!-4367441519228346844)))));
        arr_57 [i_16] = (min(var_4, ((~(arr_33 [i_16 - 1])))));
    }
    var_31 ^= ((((~((var_3 ? var_4 : 1648326170)))) >= (((var_19 ? var_11 : 1)))));
    var_32 = (max(var_32, ((min(var_1, (~1023))))));
    /* LoopNest 2 */
    for (int i_17 = 3; i_17 < 22;i_17 += 1)
    {
        for (int i_18 = 2; i_18 < 22;i_18 += 1)
        {
            {
                var_33 = (((arr_58 [i_17 - 2]) ? (min((arr_63 [i_17 - 1] [i_17 - 1] [i_17 - 3]), ((-16 ? -153768872 : -3939079305774268803)))) : var_11));
                var_34 = ((9167005815329291074 ? (((min(-7443092017444263317, 9167005815329291074)) - var_10)) : (arr_62 [i_17 - 2] [i_18 + 1] [i_17])));
                arr_64 [i_17] [i_17] = ((-((((arr_59 [i_17]) || (arr_59 [i_18 + 1]))))));
                var_35 = (arr_63 [i_17] [i_17] [4]);
            }
        }
    }
    #pragma endscop
}
