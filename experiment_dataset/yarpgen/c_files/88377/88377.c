/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_12 = 3;
        var_13 -= ((max((((var_2 ? var_2 : -91))), (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_1 [i_0]))))));
        arr_3 [13] [0] = (((((-(arr_0 [i_0 - 3] [i_0 + 2])))) % (arr_0 [i_0 + 2] [i_0 - 3])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_14 = (((arr_4 [i_1]) | var_7));
            var_15 = (arr_6 [i_1 + 2]);
            var_16 = (((arr_7 [i_1 - 1] [i_2] [i_1 + 1]) && (-9223372036854775807 - 1)));
            var_17 = var_10;
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_18 = (arr_7 [i_1 - 1] [16] [i_1 - 1]);
            arr_10 [i_1] [11] [i_3] = ((var_5 ? (!1416791870) : (arr_7 [i_1] [0] [i_1 + 1])));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_19 = (arr_19 [i_7 - 4] [i_7 - 4] [i_7 - 4] [i_1 + 2] [i_7 - 2] [i_5 + 1] [i_7 - 2]);
                            arr_20 [i_1] [i_6] [2] |= var_8;
                            arr_21 [i_1] [i_5] [i_5 + 1] [i_6] [i_5] [i_5] = 12918634810153233334;
                            var_20 = (max(var_20, (arr_14 [i_1] [i_4] [10] [i_6])));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 22;i_9 += 1)
                {
                    {
                        var_21 = 939524096;
                        var_22 = (!0);
                        arr_26 [10] [i_8] [8] [i_8] [i_8 + 1] [i_9] = -3;
                        var_23 -= (((arr_24 [i_8 - 1] [i_8] [i_8 + 1] [i_1]) ? (arr_24 [i_8 - 1] [i_4] [i_4] [i_4]) : (arr_24 [i_8 - 1] [i_8] [i_8 - 1] [i_8])));
                        arr_27 [i_1 + 1] [i_8] = ((939524096 > (arr_9 [i_1 + 1] [i_1 - 1])));
                    }
                }
            }

            for (int i_10 = 0; i_10 < 23;i_10 += 1) /* same iter space */
            {
                var_24 = (arr_5 [i_1 + 1]);
                arr_30 [i_1] [17] [i_10] = 91;

                for (int i_11 = 1; i_11 < 21;i_11 += 1)
                {
                    arr_34 [10] [i_11] [i_10] [i_11] = 91;
                    arr_35 [i_11] [i_11] = ((!(arr_4 [i_1 - 1])));
                    var_25 = (min(var_25, ((((arr_4 [i_1 + 2]) ? var_9 : (arr_4 [i_1 + 2]))))));
                }
                for (int i_12 = 0; i_12 < 0;i_12 += 1)
                {
                    arr_39 [i_12 + 1] = (((var_10 ? var_9 : -3)));
                    arr_40 [i_1 - 1] [i_1 - 1] [i_10] [i_12 + 1] = 195;
                }
            }
            for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
            {
                arr_43 [i_13] [i_13] [i_13] [i_13] = ((!(arr_42 [i_1 + 1] [i_1 + 1])));
                var_26 = (min(var_26, 6505565802391754459));
                arr_44 [i_1] [i_4] [i_13] [i_1] = var_8;
            }
            arr_45 [i_4] = ((24 * (arr_14 [i_1] [i_4] [i_4] [3])));
            var_27 = (max(var_27, ((((arr_24 [i_1] [i_1] [i_1] [i_4]) - (var_7 == 8))))));
        }
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            arr_48 [i_14] = (!var_9);
            arr_49 [i_14] [i_14] = (arr_46 [i_14] [i_1 - 1] [i_1 + 2]);
            arr_50 [i_14] = (((arr_15 [i_14]) ? (arr_15 [i_14]) : (arr_15 [i_14])));
        }

        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            var_28 ^= (((((-(arr_4 [i_15])))) ? (arr_13 [i_15] [i_15]) : var_0));
            var_29 -= (arr_8 [i_15]);
        }
    }
    for (int i_16 = 1; i_16 < 21;i_16 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            for (int i_18 = 4; i_18 < 21;i_18 += 1)
            {
                {
                    arr_63 [i_16] [18] = 0;
                    arr_64 [22] [i_16] [i_18] = 255;
                }
            }
        }
        var_30 -= 1;
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 23;i_19 += 1)
        {
            for (int i_20 = 3; i_20 < 21;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 23;i_21 += 1)
                {
                    {
                        arr_72 [i_16] [9] [i_20] [i_21] [i_16] = (min((((((var_2 << (((arr_61 [i_16] [i_16] [1]) - 2044))))) ? (((max(-19, 108)))) : (min((arr_22 [i_16 - 1] [i_19] [i_20]), var_1)))), ((min((min(var_7, (arr_46 [i_16] [i_16] [i_16]))), ((max((arr_28 [i_16] [11] [i_20]), var_5))))))));
                        arr_73 [i_16] [i_16] = ((((arr_11 [i_16]) * (((arr_47 [i_16 + 2] [i_16]) * 0)))));
                    }
                }
            }
        }
    }
    var_31 = (((((min(var_8, -1416791871) == var_6)))));
    var_32 = var_9;
    #pragma endscop
}
