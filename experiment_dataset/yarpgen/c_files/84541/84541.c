/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (min((arr_4 [1] [1] [i_1]), (((((var_8 ? (arr_1 [i_1]) : (arr_1 [i_0])))) ? ((68 ? 2860225291 : 9223372036854775793)) : 3580661256793858617))));
                arr_7 [i_0] = (((min(14884, (arr_4 [i_0] [i_0] [i_1])))) ? (arr_3 [i_0]) : var_7);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_3] [8] [i_0] [11] = (max((((arr_10 [i_0] [i_2] [i_0]) ^ ((max((arr_3 [i_2]), (arr_0 [i_3])))))), 8110));
                            arr_15 [i_0] [i_1] [i_0] [i_3] [i_3] = ((((min((arr_1 [i_3]), (arr_1 [i_0])))) ? ((((arr_9 [i_3 + 3] [i_3 + 3]) > (arr_9 [i_3 + 2] [i_3 + 2])))) : ((((arr_0 [i_3 + 3]) <= -27477)))));
                            arr_16 [i_3] = var_8;
                            var_13 -= (arr_1 [i_1]);
                            arr_17 [7] [i_3] [i_3] [i_3] = (((!((min(var_11, -9223372036854775793))))));
                        }
                    }
                }
            }
        }
    }
    var_14 = var_12;

    /* vectorizable */
    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {
        var_15 = (max(var_15, (((~(arr_1 [i_4 - 2]))))));
        arr_22 [i_4] [i_4] = -9223372036854775791;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_16 += ((+(((arr_21 [i_5]) & var_1))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 10;i_7 += 1)
            {
                {
                    var_17 -= (arr_25 [i_6]);
                    var_18 = (((arr_3 [i_7 - 2]) ? (arr_26 [i_5] [i_5] [i_7 - 2]) : ((var_5 ? var_5 : (arr_12 [i_5] [i_5] [i_7])))));
                }
            }
        }
        arr_31 [i_5] = (arr_21 [5]);

        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            var_19 = ((!(arr_20 [i_5])));

            for (int i_9 = 2; i_9 < 9;i_9 += 1)
            {
                arr_38 [i_8] [i_9] [i_8] = 1;
                arr_39 [i_8] = (arr_23 [i_8]);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_20 = ((-(arr_33 [i_8])));
                            arr_44 [i_8] = var_1;
                            var_21 = (!(arr_40 [i_5] [i_8 - 1] [i_9] [i_10] [i_10] [i_8]));
                            arr_45 [i_5] [i_8] [i_8] [i_8] = ((1 ? 50079 : 2983));
                            arr_46 [i_5] [i_8] [i_5] [i_5] [i_10] [i_11] = (!-27477);
                        }
                    }
                }
            }
        }
        for (int i_12 = 4; i_12 < 8;i_12 += 1) /* same iter space */
        {
            arr_50 [i_5] |= ((((var_4 ? (arr_21 [8]) : (arr_13 [i_5] [i_5]))) | 9223372036854775788));
            var_22 ^= (~(arr_9 [i_5] [i_12 - 3]));
        }
        for (int i_13 = 4; i_13 < 8;i_13 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_14 = 3; i_14 < 10;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 9;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        {
                            arr_64 [i_5] [i_5] [i_14 - 1] [i_15] [i_13] |= 1;
                            arr_65 [i_5] [i_13] [7] [i_15] [i_16] [i_5] [7] = (((arr_13 [i_5] [i_5]) <= (arr_29 [i_13 + 3] [i_15 - 1])));
                            var_23 = -7666919837030476816;
                            var_24 = (((arr_27 [i_5]) ? var_1 : ((var_6 ? var_2 : 1))));
                        }
                    }
                }
            }
            arr_66 [i_5] [i_13] [i_13] = (((arr_53 [i_5] [i_13 - 4] [i_13] [i_13 - 2]) && (arr_28 [i_5])));
        }
        for (int i_17 = 2; i_17 < 9;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 1; i_18 < 9;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 1;i_19 += 1)
                {
                    {
                        arr_75 [i_18] = -32760;
                        arr_76 [i_19] [7] [i_5] [i_5] = (arr_32 [i_18 - 1] [i_17]);
                    }
                }
            }
            var_25 = (arr_35 [i_17 - 1] [i_5] [i_5]);
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 11;i_20 += 1) /* same iter space */
    {
        var_26 = -1;

        for (int i_21 = 0; i_21 < 11;i_21 += 1)
        {
            var_27 = ((~(arr_1 [i_20])));
            arr_82 [i_21] = ((((((arr_71 [i_20] [i_20]) ? (arr_30 [i_20] [i_20] [i_20] [i_20]) : (arr_68 [10])))) ? var_10 : (8795556151296 < 1)));
            var_28 = 14884;
        }
        arr_83 [i_20] = var_10;
    }
    #pragma endscop
}
