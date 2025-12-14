/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 - 3] [i_1] = (arr_6 [i_2] [i_1] [i_0]);
                            arr_13 [i_0] [i_0] [17] [i_3] = (max(4539628424389459968, (((var_5 && (arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 1]))))));
                            arr_14 [i_0] [i_0] [15] [i_0 - 2] = (var_13 | var_4);
                        }
                    }
                }
                arr_15 [5] [5] |= -6558804782812389462;
                arr_16 [i_0] [i_0] [i_0 - 2] = (((-72 / (arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]))) | ((max((arr_6 [i_0 - 2] [i_0] [i_0]), (arr_5 [i_0 + 2] [i_0 - 3] [i_0])))));
                arr_17 [i_0] = (max(((19 ? (arr_4 [i_0 - 3]) : (arr_10 [i_0 - 3] [i_0 - 3] [i_0 + 1] [i_1 - 1]))), (0 & 2362707264)));
                arr_18 [i_0] [i_1] = 2362707264;
            }
        }
    }

    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        arr_23 [i_4 + 1] &= (min((min((arr_3 [i_4]), (((arr_7 [i_4 - 2] [16]) ^ 16583)))), ((((((var_0 | (arr_11 [i_4 - 1] [i_4] [i_4])))) ? (((var_1 ? var_3 : var_11))) : (min(-6, 64512)))))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 11;i_6 += 1)
            {
                {
                    arr_31 [i_5] [i_5] [i_6] = 805112996;
                    var_15 = (min(var_15, (~203)));
                }
            }
        }
        var_16 ^= ((((~(min((arr_5 [i_4 - 2] [i_4 - 1] [i_4 + 1]), 536870904))))) ? (((arr_7 [i_4] [i_4]) + (((min(62, var_5)))))) : var_12);
    }
    for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
    {
        arr_34 [i_7] = var_0;
        arr_35 [i_7] = ((var_10 | ((-(arr_6 [i_7 + 1] [i_7 + 2] [i_7])))));
        /* LoopNest 3 */
        for (int i_8 = 4; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 21;i_10 += 1)
                {
                    {
                        var_17 = (arr_8 [i_7] [i_9 - 1] [i_8] [i_7]);
                        arr_44 [i_8] = (var_6 % -20);
                        arr_45 [i_8] [i_10 - 2] [i_10 - 2] = ((-(((arr_40 [i_9] [i_9 + 2] [i_9 - 1] [i_9 + 3]) * (arr_40 [i_9] [i_9 + 3] [i_9 + 3] [i_9])))));
                        arr_46 [i_8] [i_10 - 3] [i_9] [i_8] [i_8] = ((((max(-7529, var_11))) ? 4294967266 : (((arr_10 [11] [i_9 + 1] [i_9 + 1] [i_8]) + var_5))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 1; i_11 < 19;i_11 += 1) /* same iter space */
    {
        arr_49 [i_11] [i_11] = ((~(~var_11)));
        arr_50 [21] = var_0;
        arr_51 [i_11] = ((var_6 < (arr_3 [i_11 + 3])));
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 19;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 19;i_15 += 1)
                        {
                            {
                                arr_63 [i_11 + 2] [i_11 + 2] [i_13] [i_14] [i_15 - 1] = ((((arr_58 [i_14]) | (arr_56 [i_12] [8] [i_13]))));
                                var_18 = (0 % var_0);
                            }
                        }
                    }
                    var_19 = (65535 ^ -45);
                    /* LoopNest 2 */
                    for (int i_16 = 3; i_16 < 21;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 1;i_17 += 1)
                        {
                            {
                                var_20 |= -1;
                                var_21 *= 20;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 20;i_18 += 1)
                    {
                        for (int i_19 = 1; i_19 < 21;i_19 += 1)
                        {
                            {
                                var_22 -= ((-(~-19)));
                                var_23 ^= (1152921504069976064 < (-3 & var_6));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_20 = 1; i_20 < 19;i_20 += 1) /* same iter space */
    {
        var_24 = (arr_36 [8] [i_20]);
        arr_76 [6] = (((arr_42 [1] [i_20 + 3] [10]) / ((((7 < (arr_39 [i_20] [i_20 - 1] [i_20 + 3])))))));
    }
    var_25 = (min(var_9, var_1));
    #pragma endscop
}
