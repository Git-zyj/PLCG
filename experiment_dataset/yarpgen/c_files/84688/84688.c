/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0 + 1] [i_1] [i_1] [i_2] |= ((var_5 != ((-(!var_5)))));
                    arr_7 [i_0] = (max((((var_7 > 773276231) ? var_8 : 184)), var_1));
                    var_10 *= ((!((min(((3521691064 ? 255 : (arr_0 [i_0]))), (((!(arr_4 [i_0] [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_11 -= (((arr_9 [i_1] [i_1] [i_2] [i_3]) >= ((var_4 / (arr_10 [i_0] [i_0] [i_0 + 1] [i_0] [i_4 + 1])))));
                                var_12 = var_8;
                                arr_13 [i_0] [i_3] [i_4] = (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = arr_14 [i_5];
        var_13 = (min(var_13, var_0));

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            arr_32 [i_5] [i_6] [i_5] [i_5] [i_9] &= (arr_27 [i_9] [i_9] [i_9]);
                            var_14 = ((((arr_18 [i_5] [i_6]) & 24)));
                        }
                    }
                }
            }
            arr_33 [i_5] [i_5] [i_5] = (((arr_26 [i_5] [i_6] [i_5] [i_6]) / (arr_20 [i_5] [i_6] [i_6])));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            var_15 = (((arr_19 [i_5] [i_10]) | var_7));
            var_16 |= 79;
            var_17 = (arr_34 [i_5] [i_5]);
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {

            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                var_18 |= ((((min((arr_20 [i_5] [i_11] [i_12]), (var_8 > var_4)))) >> ((((arr_41 [i_5] [i_11] [i_11] [i_12]) == 49152)))));
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        {
                            var_19 = ((((-(arr_16 [i_13 + 1]))) ^ (((arr_28 [i_5] [i_11] [i_12]) ? (arr_16 [i_5]) : (arr_16 [i_5])))));
                            arr_51 [i_13] [i_14] [i_12] [i_13] [i_14] [i_13] = (min((arr_40 [i_5] [i_12]), (((arr_30 [i_13 - 1] [i_13 - 1] [i_13 - 1]) ? -99 : (arr_30 [i_13 - 1] [i_13 - 1] [i_13 - 1])))));
                            var_20 = -83;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        {
                            arr_56 [i_5] [i_5] [i_5] [i_5] [i_5] = ((((((var_8 ? 98 : -25))) ? ((var_7 ? 121 : 363429746)) : 3)));
                            var_21 = (max((((~(((193 != (arr_42 [i_15] [i_12] [i_5]))))))), (max((min(79, var_8)), (156 % 3553356836)))));
                        }
                    }
                }
                arr_57 [i_5] [i_5] [i_5] [i_5] = (max(((-(((arr_47 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) + var_8)))), (arr_40 [i_5] [i_11])));
            }
            for (int i_17 = 0; i_17 < 22;i_17 += 1)
            {
                var_22 = (+(((arr_54 [i_5] [i_5] [i_11] [i_17]) ? var_8 : (max(2432441940, 252)))));
                arr_61 [6] [i_5] [i_5] [i_5] |= 60;
            }
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                arr_66 [i_18] = var_5;
                var_23 += (((((((-5 + 2147483647) << (var_7 - 24))) >> (var_5 - 47))) % -25));
                var_24 *= 32767;
            }
            arr_67 [i_5] [i_5] = (min((arr_40 [i_5] [i_5]), ((0 / (arr_21 [i_5] [i_5])))));
        }
        arr_68 [i_5] = arr_45 [i_5];
        var_25 *= var_1;
    }
    #pragma endscop
}
