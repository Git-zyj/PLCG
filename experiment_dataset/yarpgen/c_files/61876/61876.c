/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_9 != -3078024617224249800);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 = (min(var_16, (var_9 != var_3)));
        var_17 &= (((((!(-32767 - 1)))) == ((var_3 ? 188 : 1))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_1] &= (max((1 && 1), 1));
                    var_18 = (((((1 / 4294967295) / var_12)) < (-25221 == 11188896276233099467)));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] = 1;
        arr_16 [i_4] = var_1;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_19 = (i_6 % 2 == 0) ? ((((4127461891 ^ 33554430) / (arr_24 [i_6] [i_6] [i_6] [i_5] [i_6])))) : ((((4127461891 ^ 33554430) * (arr_24 [i_6] [i_6] [i_6] [i_5] [i_6]))));
                                var_20 = (max(var_20, (194 + var_6)));
                            }
                        }
                    }
                    var_21 &= (((arr_14 [i_4]) & (arr_14 [i_4])));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_22 -= ((arr_23 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_10] [i_9 - 1]) * 2305702271725338624);
                                var_23 -= (((arr_23 [i_10] [i_5] [i_6] [i_10] [i_10] [i_9 - 1]) && 7257847797476452122));
                                var_24 = arr_20 [12] [i_6] [i_6] [i_6];
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                {

                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        arr_44 [i_12] [18] [i_13] [i_12] [i_12] [i_12] &= ((((-(arr_22 [i_11] [i_11] [i_11]))) & (49152 > -1170783825)));
                        var_25 &= (((((arr_14 [i_11]) % (7257847797476452147 ^ 1))) <= ((((((((arr_26 [i_11] [i_11] [i_13] [i_12]) + var_12)) + 2147483647)) >> (-var_6 + 260))))));
                    }
                    arr_45 [i_11] [i_11] [i_11] [i_13] = (max((-var_14 >= -11188896276233099459), 7257847797476452147));
                }
            }
        }
        arr_46 [i_11] = ((-(arr_33 [i_11])));
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 19;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 19;i_16 += 1)
            {
                {
                    arr_51 [i_11] [i_15] [i_15] = 1;
                    var_26 = (max(var_26, var_7));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                {
                    var_27 = var_2;
                    arr_58 [i_11] [21] [i_18] = ((+(((-678425153 + 2147483647) << (var_12 - 124)))));

                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        arr_61 [i_11] [i_11] [i_11] [i_19] = (arr_20 [i_19] [i_18] [i_18] [i_11]);
                        var_28 -= var_7;
                        var_29 -= (max(1, ((var_8 / ((((arr_30 [i_19] [i_17] [i_18] [i_17] [i_19]) >= var_8)))))));
                    }
                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        var_30 = ((var_8 & (var_6 == 112)));
                        var_31 &= var_14;
                    }
                }
            }
        }
        var_32 = ((((((1 && (((arr_36 [i_11]) != var_5)))))) - ((16384 ? -1681726264 : (min(var_1, var_5))))));
    }
    #pragma endscop
}
