/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_10 ^= ((+((((arr_1 [i_0]) <= (var_1 + var_1))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_11 = (max(var_11, (((var_5 % (max(var_3, var_5)))))));
                        var_12 = (max((arr_6 [i_0] [i_0] [i_0]), (arr_1 [i_1])));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_13 = var_7;
                            var_14 = (max(((min((arr_8 [i_0] [i_0] [i_0] [10]), (arr_8 [i_4] [i_2] [i_2] [11])))), (((var_2 ^ var_0) ? ((max(var_5, var_9))) : ((~(arr_15 [i_0] [i_1] [8] [i_3] [i_4])))))));
                            var_15 |= (max((arr_9 [i_2] [i_2] [i_2] [16]), (arr_10 [11] [i_4])));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_16 = (max((((arr_11 [i_2] [i_2] [i_2] [i_2]) != (arr_17 [0] [i_1] [i_1] [i_1] [i_1] [11]))), (((var_3 - var_8) == (arr_7 [i_0] [i_0] [1] [i_0])))));
                            var_17 = (((((max((arr_8 [1] [i_1] [1] [i_3]), (arr_16 [i_0] [i_1] [i_2] [i_5] [i_5] [0] [i_1]))))) != (((((var_6 ? var_4 : (arr_8 [i_5] [i_2] [1] [1]))) != ((var_8 ? var_6 : var_7)))))));
                            var_18 = (min(var_18, ((min(((max((arr_11 [i_0] [i_1] [i_3] [i_5]), (arr_8 [i_0] [18] [i_2] [i_3])))), ((~(var_9 | var_0))))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_19 = (var_1 ? var_5 : (arr_2 [i_0]));
                            arr_21 [i_2] = var_5;
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_20 ^= (((var_8 == (!var_7))));
                            var_21 = (max(var_21, (var_4 && var_6)));
                        }
                        var_22 = (min((0 || -101), (-3435 && 8384)));
                        var_23 = var_2;
                    }
                }
            }
        }
        var_24 = -8371;
        var_25 = (min(var_25, (~-63)));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_26 = (((((max(var_6, var_3)) ? var_4 : var_6))));
        arr_28 [i_8] = (min((min(((max((arr_20 [i_8] [i_8] [i_8] [i_8] [i_8]), var_7))), ((var_2 ? var_6 : var_3)))), var_5));
        arr_29 [i_8] = (((arr_9 [i_8] [i_8] [i_8] [i_8]) ? ((max(27802, 0))) : (min((arr_18 [i_8] [8] [i_8] [i_8] [i_8]), (((arr_4 [i_8] [11] [i_8]) ? var_0 : var_4))))));
        arr_30 [i_8] = (min(var_6, ((max((min(var_2, var_4)), (arr_11 [5] [i_8] [i_8] [21]))))));
        var_27 = (max(var_0, ((var_0 || (arr_9 [i_8] [i_8] [i_8] [i_8])))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_28 = ((~(!var_5)));
        var_29 = (~var_9);
        arr_34 [i_9] = (arr_24 [i_9] [i_9] [i_9] [i_9]);

        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            arr_38 [10] [i_10] [i_9] = -var_1;
            var_30 |= (((((var_6 & (arr_6 [19] [14] [14])))) ? (arr_23 [i_9] [i_9] [1] [i_9] [i_10]) : var_9));
        }
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 8;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        {
                            var_31 |= var_5;
                            arr_49 [i_9] [i_9] [i_12] [i_9] = ((var_3 || (arr_48 [i_11] [i_12] [i_13 - 2] [1] [i_13 + 1])));
                            var_32 = (((arr_17 [i_13] [i_13] [i_13] [i_13 + 1] [i_13 + 1] [i_13 - 2]) || (arr_44 [i_13] [i_13] [1] [i_13 - 1] [i_13 + 1])));
                            var_33 = var_0;
                            arr_50 [i_13] [i_11] |= (((var_8 >= var_8) % ((~(arr_12 [i_9] [i_9])))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 2; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 9;i_16 += 1)
                {
                    {
                        var_34 = (min(var_34, (((var_7 && (~var_4))))));
                        arr_55 [i_9] [i_11] [6] = (18446744073709551615 ? 6543293846185050541 : var_5);
                        var_35 = (max(var_35, (~var_0)));
                        var_36 = ((-((((arr_10 [i_9] [i_11]) == (arr_48 [5] [3] [0] [i_15] [i_16]))))));
                    }
                }
            }
            var_37 = (!63);
            var_38 = ((var_3 % (arr_15 [i_11] [i_11] [i_11] [i_9] [i_9])));
        }
    }
    var_39 = (((!var_8) ? (var_7 == var_4) : (((var_4 + var_3) ? var_6 : (min(var_3, var_7))))));
    var_40 ^= (max(((((var_6 ? var_3 : var_6)) + (8385 != 3521876194))), ((~(var_7 & var_2)))));
    var_41 = var_4;
    #pragma endscop
}
