/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -27748;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] [3] [i_0] [1] = (!var_6);
                        var_11 ^= (arr_2 [i_0] [i_0]);
                        arr_10 [10] [i_1] [i_1] = var_7;
                    }
                }
            }
        }
        var_12 = (var_1 != (arr_8 [i_0] [2] [2]));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_13 [i_4] = (arr_12 [i_4] [i_4]);
        var_13 = (min(var_13, 25615));

        for (int i_5 = 2; i_5 < 24;i_5 += 1)
        {
            arr_16 [i_4] [i_5] = ((((var_4 ^ ((1964722200780411984 & (arr_15 [i_4]))))) ^ (((+(((arr_12 [22] [22]) + var_4)))))));
            var_14 ^= (arr_12 [i_5 + 1] [i_5 - 2]);
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_20 [i_6] = var_4;

        /* vectorizable */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_23 [i_6] = (arr_14 [i_6]);
            arr_24 [i_7] = ((~(arr_19 [i_7])));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            arr_31 [11] [11] [i_7] [i_8] [i_8] [i_9] [11] = (arr_15 [i_6]);
                            var_15 = (arr_25 [i_6] [i_7]);
                            arr_32 [1] [i_10] = ((~(arr_29 [i_9 - 1] [i_9 + 1] [i_10] [i_10])));
                            var_16 = ((((arr_28 [i_6] [i_7] [i_8] [i_9] [i_10]) + 2147483647)) << (((((arr_14 [i_9 + 1]) + 1586953874)) - 22)));
                        }
                    }
                }
            }
        }
        for (int i_11 = 2; i_11 < 13;i_11 += 1)
        {
            var_17 = (max(var_17, ((min((arr_33 [i_11] [16]), (arr_11 [i_6]))))));
            arr_35 [i_6] [13] [i_6] = (arr_30 [i_6] [i_6] [i_11 + 1] [i_11] [i_11]);
        }
        for (int i_12 = 0; i_12 < 0;i_12 += 1)
        {
            arr_40 [i_12] [6] = (+-var_1);
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    {

                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            var_18 &= (max(((~(min(var_7, 0)))), (arr_11 [i_6])));
                            var_19 = var_4;
                            var_20 += var_8;
                            var_21 &= ((min(((var_2 ? var_9 : var_6), (arr_26 [i_15])))));
                            var_22 ^= -103;
                        }

                        for (int i_16 = 0; i_16 < 17;i_16 += 1)
                        {
                            arr_51 [5] [i_12] [i_13] [i_12] [i_16] = var_9;
                            var_23 = ((((((-127 - 1) ? (((-106 + 2147483647) >> (var_4 - 114))) : (arr_14 [i_6])))) + (min(var_6, (((var_1 / (arr_11 [i_12 + 1]))))))));
                        }
                        for (int i_17 = 0; i_17 < 17;i_17 += 1)
                        {
                            arr_56 [i_17] [1] [4] [i_14] [i_17] [i_6] = ((var_9 >> (min((min(var_9, var_6)), (((7 ? var_3 : (arr_37 [i_14]))))))));
                            arr_57 [i_17] = ((((((((min(var_0, var_4)) + 2147483647)) >> (((arr_15 [i_14]) - 11243))))) & (arr_43 [i_6])));
                            var_24 = var_8;
                        }

                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            arr_61 [i_6] [i_18] [i_18] [i_14] [i_18] = 5525127363592517017;
                            var_25 = (arr_36 [i_14]);
                            arr_62 [i_18] = ((arr_12 [1] [i_6]) != (arr_21 [i_6] [10]));
                            var_26 &= (max(((min(var_7, var_8))), var_4));
                        }
                        var_27 = -27751;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_19 = 2; i_19 < 16;i_19 += 1)
        {
            var_28 = var_0;
            var_29 += 1751410696;
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 16;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 17;i_21 += 1)
                {
                    {
                        var_30 = (~var_6);
                        var_31 = ((arr_39 [i_6] [i_19 - 2] [i_21]) ? (arr_49 [i_19] [i_19 + 1] [6] [i_20 - 1] [i_20 + 1] [i_19 + 1] [14]) : (arr_47 [i_19] [i_21]));
                    }
                }
            }
        }
    }
    for (int i_22 = 2; i_22 < 16;i_22 += 1)
    {
        var_32 |= ((~(min((arr_12 [i_22 - 1] [i_22 - 1]), (arr_72 [i_22 + 1])))));
        var_33 = (min((arr_11 [i_22]), (min((min(var_9, (arr_70 [i_22]))), 29840))));
        var_34 = ((var_9 ? ((max((arr_71 [i_22 - 2]), (arr_71 [i_22 - 1])))) : (arr_14 [i_22])));
        /* LoopNest 2 */
        for (int i_23 = 3; i_23 < 18;i_23 += 1)
        {
            for (int i_24 = 3; i_24 < 18;i_24 += 1)
            {
                {
                    var_35 = min((arr_76 [10] [10] [i_23 - 1] [10]), (((min((arr_77 [8] [2] [2] [14]), var_8)))));
                    var_36 = ((((((arr_75 [i_22 - 2] [i_23 - 2]) % (arr_70 [i_22])))) ? (arr_73 [i_23] [i_23]) : ((var_4 ? ((((arr_14 [i_23 - 1]) | (-127 - 1)))) : (min((arr_74 [i_22] [i_23] [i_24]), 1))))));
                    var_37 = ((((((min(var_1, var_6))) ? 43678 : ((var_7 - (arr_15 [i_22]))))) <= ((min((arr_12 [i_23 - 3] [i_22 - 2]), var_4)))));
                }
            }
        }
        arr_79 [i_22] = (min((arr_14 [i_22]), ((~(arr_78 [i_22] [i_22 + 2])))));
    }
    #pragma endscop
}
