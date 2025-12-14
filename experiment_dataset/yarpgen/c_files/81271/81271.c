/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 ? var_1 : (((((665320899 - var_3) < var_1))))));
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_12 = (min(var_12, ((((((18446744073709551596 ? 40 : (min(18446744073709551601, 21))))) ? -3814924232369094854 : -115)))));
        var_13 = 57;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_3] [i_2] = ((~(((70 >= (((arr_1 [i_3]) ? var_2 : 1217343560299626996)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [i_1] [i_3] [3] [i_5] = (((max(-11, 127)) < ((109 ? (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]) : 63))));
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_3] [i_4] [i_3] = (((((((18446744073709551596 ? -79 : 4149609901))) ? var_1 : (((33 << (234 - 231)))))) % 34));
                                arr_19 [i_1] [i_2] [i_1] [i_4] [i_5] = (((arr_15 [i_1] [11] [i_3] [1] [11]) ? (((168 >> (189 - 171)))) : 32759));
                            }
                        }
                    }
                }
            }
        }
        arr_20 [i_1] = (((((var_1 ? (min(var_9, 20)) : (18446744073709551595 && var_2)))) ? var_2 : (((max(23, 7689))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_23 [i_6] = (var_7 % var_5);
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    var_14 = (((var_4 > var_5) ? var_9 : var_2));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                arr_35 [i_10] [i_7] [i_8] = ((43938 ? 88 : 26869));
                                var_15 = (((arr_24 [i_7 + 2] [i_7 - 1] [i_7 - 1]) - var_5));
                                arr_36 [i_6] [i_6] [i_6] [i_8] [i_9] [i_10] [i_10] = 18446744073709551595;
                            }
                        }
                    }
                }
            }
        }
        var_16 = (var_6 ^ var_2);
        var_17 ^= (((arr_26 [i_6] [i_6] [i_6] [i_6]) / (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6])));
        arr_37 [i_6] = (18 && var_7);
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        arr_40 [i_11] = (~(((113 || -113) ? (arr_38 [i_11]) : (-114 | -78))));
        var_18 = (max(var_18, ((((((var_3 << (17728 - 17691)))) ? (((-127 - 1) % 130)) : (var_6 & 1))))));
        var_19 = (max(var_19, (max((min((((var_7 ? -32765 : 17049))), (var_5 & var_8))), var_0))));
    }
    #pragma endscop
}
