/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (1 < -9973);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 |= ((((min((arr_1 [i_0]), 57099))) || (var_9 > 14718)));
                var_12 += (min(8437, 4294967269));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 -= (min(((max((-2147483647 - 1), 4294967269))), (arr_4 [i_4 + 1] [i_4 + 1])));
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4 + 1] = (min((var_5 > var_8), (((arr_12 [i_0] [i_2] [i_2 - 1] [i_1] [i_0]) < 3465935077))));
                                arr_14 [i_0] [i_0] = 1303899318;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = 0;

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_19 [11] [i_5] = (((1139928649 & (max(3573936481968543947, var_9)))) ^ ((min((min(-1234081259, 2991067978)), -1234081259))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_29 [i_5] [i_6] [i_7 + 1] [3] [2] = (280817960 | 2147483647);
                                arr_30 [i_9 + 2] [i_8] [i_6] = (((var_0 || var_5) || ((max((arr_21 [i_5] [i_7] [i_5]), (arr_18 [i_6] [i_9 - 1]))))));
                            }
                        }
                    }
                    var_15 = (min(var_15, ((max(-17695, 13825)))));

                    for (int i_10 = 0; i_10 < 17;i_10 += 1) /* same iter space */
                    {
                        arr_35 [i_5] [i_5] [i_7] |= ((((max((arr_22 [i_7 - 1] [i_6] [i_6]), (var_1 + var_2)))) + (((min(15459758915847034614, 116)) / 9223372036854775800))));
                        arr_36 [i_5] [i_6] [i_7 - 1] [i_6] = max((((min(57099, 4044594922433684824)))), ((((max(var_9, (arr_20 [i_6] [i_6])))) / (min(57099, 12006324719062918318)))));
                        var_16 = (min(var_16, (((((max(var_9, var_0)) > (((((arr_20 [i_7 + 1] [3]) || var_8))))))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_7 + 1] [i_11] [i_11] = ((((arr_15 [13] [13]) & 5693539443415719787)));
                        var_17 = var_0;
                        var_18 = (min(var_18, (((0 || (arr_15 [i_7] [i_7 - 1]))))));
                    }
                    var_19 += (max((((((arr_26 [i_7 - 1]) / (arr_31 [i_5] [i_5] [16] [i_7 - 1]))) / (arr_28 [i_5] [i_6] [i_7] [i_6]))), (((var_4 - (arr_37 [i_7 - 1] [i_6] [7]))))));
                    var_20 = ((((min(1303899318, 57099))) - (((var_3 / (arr_18 [i_5] [i_6]))))));
                }
            }
        }
    }
    #pragma endscop
}
