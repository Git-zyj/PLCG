/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((((((((var_8 ? 9488 : 1))) ? 9469 : 56070))) ? ((1 ? 9470 : 274609471488)) : (((((1 ? 1 : 9467)) * var_4))))))));
    var_11 |= (!var_1);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_12 *= 3465467617;
        arr_3 [i_0] = ((-(var_6 - 9441)));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_13 = var_1;
        var_14 &= ((!((((arr_7 [1]) ? (arr_4 [i_1]) : (arr_6 [2]))))));
        arr_8 [i_1] [i_1] = var_7;
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                {
                    var_15 = var_5;
                    arr_17 [13] = (((arr_13 [i_2] [i_2] [i_2]) ? (arr_9 [i_3] [i_4 + 3]) : var_4));
                    var_16 = ((56102 ? var_8 : (arr_15 [i_2] [i_2] [i_4])));
                    arr_18 [i_2] [i_2] [i_2] [i_2] = arr_15 [i_2] [16] [i_4];
                }
            }
        }
        arr_19 [i_2] |= var_1;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_28 [i_2] = 18263739678223624739;
                        arr_29 [i_2] [i_2] [i_2] [i_2] = (((-1 + 9223372036854775807) >> (var_8 - 3541499630)));
                        arr_30 [i_2] [16] [i_2] [i_2] = ((16815 << (-24 + 28)));
                        var_17 = (((var_8 << (((arr_15 [i_7] [i_5] [i_2]) - 27864)))));
                        arr_31 [9] [i_5] [i_5] [i_5] = (var_2 || 1954295176812345697);
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                    {
                        arr_35 [i_2] [i_5] [i_8] = ((!(((-(arr_20 [20] [20] [i_6]))))));
                        var_18 = var_0;

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_38 [i_2] [12] [i_6] [i_6] [i_8] = (((arr_32 [i_2] [i_2] [i_2] [i_2] [i_2]) ? (arr_24 [i_2] [i_2]) : var_3));
                            var_19 = 9428;
                            arr_39 [i_2] [i_8] [i_6] [i_8] = (((!(arr_24 [i_2] [i_6]))));
                        }
                        for (int i_10 = 2; i_10 < 24;i_10 += 1)
                        {
                            var_20 = (max(var_20, (arr_21 [i_6] [i_10])));
                            arr_44 [i_2] [i_8] [i_6] [i_6] [i_10 - 1] [i_10] [i_8] = (arr_40 [i_10 - 2] [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 1]);
                            var_21 = (((arr_42 [i_6] [i_8]) ? ((((arr_33 [i_2] [24]) <= var_9))) : var_1));
                        }
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                    {
                        var_22 = ((-14 ? 244 : 6));
                        arr_49 [i_11] [i_5] [i_6] [i_11] = 56;
                        var_23 -= (((((8 ? 19781 : -1525768817))) ? (((arr_10 [i_11]) ^ var_8)) : var_4));
                        arr_50 [i_11] [i_5] [i_5] [i_5] = ((var_5 ? (arr_45 [i_2] [i_2] [i_6] [i_2] [22] [i_11]) : 65408));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                    {
                        arr_53 [i_12] [i_12] [i_6] [i_5] [i_5] [i_2] = var_5;
                        var_24 ^= (((arr_9 [i_2] [i_2]) % 2));
                        var_25 = ((-6195489775560086774 ? var_0 : (arr_45 [i_2] [i_2] [i_2] [i_2] [i_2] [i_5])));
                        arr_54 [i_2] [i_2] = (arr_32 [i_2] [19] [i_6] [i_12] [i_12]);
                    }
                    var_26 = (arr_16 [i_2] [i_2] [i_6] [i_2]);
                    var_27 = (min(var_27, ((((arr_48 [i_2] [i_5] [i_5] [1] [1]) ? 2750445877 : var_3)))));
                    arr_55 [i_2] [i_5] [i_6] = ((-(min(var_4, (492866442 == 19778)))));
                }
            }
        }
    }
    #pragma endscop
}
