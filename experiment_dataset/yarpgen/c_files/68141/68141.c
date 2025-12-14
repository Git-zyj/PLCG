/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= var_1;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [15] [i_0] = (((min(-2046782101, var_12))) ? (arr_1 [i_0] [i_0]) : var_6);

        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_14 [i_2] [i_1 - 1] [i_2] = ((-217270981 & (arr_6 [i_2] [i_4 + 2] [i_1 - 3] [i_0])));
                            var_15 = var_6;
                            arr_15 [4] [4] [i_2] [i_3] = ((((max((arr_0 [i_0] [i_0]), (max((arr_9 [i_0] [i_2] [i_2]), -217270979))))) ? (arr_10 [i_0] [i_0] [13]) : 120));
                        }
                    }
                }
            }
            var_16 = ((~(arr_7 [i_0] [i_1] [i_1] [i_0])));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_18 [i_0] = (min((var_5 <= -9223372036854775806), ((-(min(var_10, (arr_8 [i_0] [i_0])))))));

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                var_17 = -9223372036854775795;
                arr_21 [i_6] = (arr_20 [1]);
            }
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {

                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        var_18 += (arr_8 [i_9 - 3] [i_7 - 1]);
                        arr_32 [i_9] [i_7] [i_7] [i_5] [i_0] = (arr_9 [i_0] [i_5] [12]);
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_19 = (((((217270998 ? (arr_16 [16] [2] [i_8]) : (!var_12)))) * (((~50) ? 4 : (arr_22 [i_0] [i_0] [i_10])))));
                        arr_36 [i_0] [i_0] [i_0] [6] [1] [i_0] = var_11;
                        arr_37 [i_0] [i_5] [i_0] [i_8] [i_10] [i_10] = var_10;
                    }
                    var_20 -= (arr_31 [i_0] [i_5] [i_7] [i_8] [i_5] [i_7]);
                    var_21 = (!57353);
                }
                var_22 = 1;
            }
            /* vectorizable */
            for (int i_11 = 3; i_11 < 15;i_11 += 1)
            {
                var_23 = (!var_13);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        {
                            var_24 = ((var_4 ? (arr_13 [i_11 - 2] [i_5] [i_11] [i_13] [i_0] [i_13]) : (arr_13 [i_11 - 3] [i_11 - 3] [i_11 - 3] [i_11 - 3] [i_13] [i_11 - 3])));
                            arr_44 [i_11] [i_0] [i_11] = var_0;
                        }
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            arr_48 [i_14] = (((-(arr_42 [i_0] [i_14] [i_14] [i_14] [i_14] [i_14]))));
            arr_49 [4] [i_14] = 57;
        }

        for (int i_15 = 2; i_15 < 16;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 4; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 17;i_17 += 1)
                {
                    {
                        var_25 = ((~((((arr_57 [i_17] [i_16]) > var_7)))));
                        var_26 = (1 ? var_12 : (((!((min((arr_46 [11] [i_16]), 1)))))));
                        var_27 = (max(var_27, -9223372036854775805));
                        var_28 = max((max(-217270972, 217271005)), -634092275);
                        var_29 = ((var_13 ? (min(16577930607311022987, (arr_19 [i_15 + 1] [i_15 + 1] [i_17]))) : (arr_12 [i_16] [i_17])));
                    }
                }
            }
            var_30 = ((-(((((2 ? (arr_10 [i_0] [i_0] [i_0]) : var_4))) ? (((arr_30 [i_15] [i_15] [i_15] [i_0] [i_0]) ? 14866 : (arr_8 [i_0] [i_0]))) : -var_5))));
        }
        for (int i_18 = 3; i_18 < 14;i_18 += 1)
        {
            arr_61 [i_18] = ((7 * (max(254, (((arr_39 [i_0]) / var_3))))));
            var_31 = (arr_34 [i_0] [i_0] [11] [i_0] [i_0] [i_18] [i_0]);
            var_32 ^= var_7;
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 16;i_20 += 1)
            {
                {
                    arr_68 [i_19] = ((+(((arr_42 [i_20 - 1] [i_20] [i_20 + 1] [i_20 + 1] [4] [i_19]) ? (arr_42 [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20] [i_19]) : var_12))));
                    arr_69 [1] [i_19] [i_19] [i_0] = ((((((min(16577930607311023001, (arr_55 [i_0])))))) * var_9));
                    var_33 = ((((((((arr_35 [i_20] [1] [i_20 + 1] [i_20] [i_20] [1]) < 1098556946))) != ((((arr_53 [i_0] [i_0]) == 12))))) ? 1 : ((var_9 ? 1868813466398528628 : (((20442 ? -5470589951682417396 : 0)))))));
                    var_34 = (min(var_34, var_12));
                    var_35 = ((min(261120, 41)));
                }
            }
        }
    }
    #pragma endscop
}
