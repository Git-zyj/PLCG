/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_19 &= var_9;
                var_20 -= ((((((max(var_12, var_2)) & (arr_1 [i_1])))) ? ((((max(var_10, (arr_1 [i_0])))) ? (arr_2 [i_1 + 2]) : ((var_5 ? var_15 : 171)))) : (((arr_1 [i_1 - 1]) + (((arr_4 [i_1]) ? var_11 : 74))))));
            }
        }
    }
    var_21 = var_8;

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_22 = (arr_5 [5] [1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_23 = (min(var_23, (((1 ? ((((((~(arr_12 [i_2] [i_3] [i_4] [i_3])))) <= (min((arr_4 [i_6]), (arr_0 [i_2])))))) : (max((arr_10 [i_4] [i_3] [i_2]), var_16)))))));
                                var_24 = (min(var_24, ((max((~var_3), (((-1403351303 + var_17) << (((arr_7 [i_2] [i_3]) - 1769750988)))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_25 = (min(var_25, ((min(1, 33)))));
                                var_26 = var_10;
                                var_27 = (((min((arr_0 [i_2]), ((((arr_5 [i_2] [i_2]) ? var_6 : 1))))) != (((min((arr_15 [i_2] [i_2] [i_4] [i_3]), (var_14 > var_5)))))));
                                var_28 = (1 + 1);
                            }
                        }
                    }
                    var_29 = ((((((1 >= var_18) ? ((((arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) != (arr_9 [i_4] [i_2] [i_3] [i_2])))) : 63168))) ? ((var_18 ? (((max(2349, 12)))) : 0)) : (arr_16 [i_2])));

                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_30 ^= -2147483634;
                        var_31 = (((((((arr_17 [i_4] [i_9]) <= 182)) ? ((((0 > (arr_5 [i_2] [6]))))) : (min(-2147483616, 24)))) / (((((((min(var_13, var_9)))) < (var_6 * var_13)))))));
                        var_32 = ((~(((arr_8 [i_4]) ? ((1 ? 103 : var_7)) : ((((arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) != (arr_2 [i_4]))))))));
                        var_33 = var_3;
                    }
                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        var_34 = (max(var_34, 1));
                        var_35 = ((1 ? -8716 : 124));
                    }
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        var_36 = (arr_10 [i_2] [i_2] [11]);
                        var_37 = ((-(min(((((arr_0 [i_2]) == 0))), ((var_16 ? 18446181123756130304 : 16546091680136426601))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 10;i_14 += 1)
                {
                    {
                        var_38 = (((((arr_12 [i_14] [i_13] [i_2] [i_2]) && var_7))) ^ ((((min(var_2, (arr_37 [i_2] [i_2] [i_2] [i_14 - 1] [i_14]))) == ((max(14260, var_15)))))));
                        var_39 = (min(var_39, (((!((min(27163, (arr_20 [i_14 + 1] [i_14 + 1])))))))));
                        var_40 = max((((1 && 1) ? (arr_11 [i_14 + 2] [i_12] [i_14 - 1] [i_14 + 2]) : (arr_28 [i_14] [i_12] [i_13] [i_14 + 2]))), 14276);
                        var_41 = (-14274 & 1);
                    }
                }
            }
        }
        var_42 = ((((1156797420 ? -1156797429 : 18446181123756130301)) & ((((((~(arr_16 [i_2]))) > (((var_3 ? 51 : var_14)))))))));
        var_43 = var_6;
    }
    var_44 = ((((((1 || 240) | 82))) ? (((((max(142, var_4)))) & (var_3 * var_17))) : (((((18446181123756130314 && 16) && (var_4 % 246)))))));
    #pragma endscop
}
