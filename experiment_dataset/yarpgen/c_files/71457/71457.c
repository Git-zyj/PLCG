/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((~(!-118)));
                var_12 |= (arr_0 [6] [i_1]);

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_13 = (max(var_7, (((var_3 + 2147483647) << (((arr_7 [i_0] [i_0] [i_0] [i_0]) - 12218))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [i_2] [i_2] [1] [i_1] [i_2] = (((arr_0 [i_3] [i_0]) ^ var_7));
                        var_14 = (arr_3 [1] [i_1]);
                    }
                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_4 - 2] &= ((var_2 ? var_5 : ((max(var_8, (arr_2 [i_4 - 3] [1] [i_4 - 3]))))));
                        var_15 -= (((!(arr_14 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 3]))));
                    }
                    var_16 = (arr_1 [9] [i_2]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_17 -= var_7;
                                arr_22 [i_5] [i_5] [3] [i_5] [i_2] [i_5] = (-(max(-1357049887, 63)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 |= -var_7;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                arr_36 [i_7] [i_8] [6] [1] [i_11] = (((-120 ? 54 : 90)));
                                var_19 = ((-((((arr_24 [i_8 - 1] [i_8]) < (~var_4))))));
                                var_20 ^= (((~-var_8) < var_10));
                                arr_37 [1] [i_8] [13] [i_10 - 2] [7] [15] = ((((!(arr_29 [i_7] [i_8] [i_9])))));
                                var_21 |= ((((max(var_7, (arr_30 [i_7] [i_11] [i_8 + 1])))) ? ((-(((arr_35 [i_11] [i_8 - 1]) ^ var_4)))) : (((((arr_34 [i_8 + 1] [i_10 + 2] [i_8 + 1] [i_9] [i_10] [i_11]) || (arr_30 [i_10 + 3] [i_10 - 2] [i_10 + 3])))))));
                            }
                        }
                    }

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        var_22 = ((+((((arr_31 [1] [i_8 + 1] [i_8]) || (arr_31 [i_8 + 1] [i_8 + 1] [i_8]))))));
                        var_23 = ((+(((arr_28 [i_8 + 1] [i_8 - 1]) ? (arr_28 [i_8 + 1] [i_8 - 1]) : var_8))));
                    }
                    var_24 = (arr_24 [i_7] [11]);
                }
            }
        }
    }
    var_25 = ((((var_6 ? var_6 : var_0)) - (((~((var_8 ? var_0 : var_9)))))));
    var_26 = (((((var_1 ? var_10 : ((var_11 ? var_5 : var_9))))) ? var_10 : (max(var_6, var_0))));
    #pragma endscop
}
