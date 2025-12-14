/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_18 = var_2;
                    var_19 = (min((arr_0 [i_2]), (((arr_6 [i_0] [i_1] [i_1] [i_2]) ? (arr_5 [i_0]) : (min((arr_5 [i_0]), (arr_0 [i_0])))))));
                    arr_7 [i_1] [i_2] = (max(((((2631641399 < 385248687) << (((min(-15, 5557201216938642157)) + 32))))), (arr_6 [i_0] [i_1] [i_1] [1])));
                    arr_8 [i_1] = 32767;
                }

                /* vectorizable */
                for (int i_3 = 4; i_3 < 9;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_20 = (arr_0 [i_5 - 3]);
                                arr_17 [i_1] [i_5] [i_3] [3] [i_5] = (((((arr_4 [i_5] [i_3] [i_1]) > (arr_14 [4] [i_3 + 1] [8] [i_5 - 1]))) ? 65535 : (arr_16 [i_0] [i_1] [i_3 + 2] [i_1] [i_5] [i_4 + 1])));
                            }
                        }
                    }

                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        var_21 += (((arr_0 [i_0]) << (((arr_0 [i_0]) - 3081623229891548133))));
                        var_22 = (((arr_5 [i_0]) | (!1596088653198115611)));
                        arr_20 [i_1] [i_1] [i_3 - 4] [6] = (((arr_1 [i_0]) >> (var_13 + 8448097700764178762)));
                        arr_21 [i_1] [i_1] [i_1] [i_1] = (((arr_15 [i_0] [i_0] [i_1] [i_6 - 1] [i_0]) * ((~(arr_16 [i_0] [i_0] [i_3] [i_1] [i_0] [i_1])))));
                    }
                    arr_22 [6] [i_1] [i_3 + 2] [i_3 - 1] = var_12;
                    arr_23 [2] [i_0] [i_1] [1] = ((var_5 ? (arr_18 [i_3] [i_3] [i_3] [i_3 + 1] [i_3 - 1] [i_1]) : 4294967295));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_23 = ((~(arr_26 [i_1] [i_1])));
                    arr_27 [i_0] [i_1] [i_0] = -22163;
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_24 = (((min(14039515685463503359, -5557201216938642180))));
                    var_25 = (arr_19 [i_0] [i_1] [i_1] [i_1] [i_8]);
                    arr_31 [i_1] [i_1] [i_8] [i_8] = (!(153 <= var_10));

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_26 += ((!(((((max((arr_30 [i_8] [i_1] [i_1] [i_1]), -7))) ? ((1596088653198115636 ? 1 : -15)) : (((arr_24 [i_0]) ? var_7 : (arr_12 [i_0] [i_8] [i_8] [i_9]))))))));
                        arr_34 [i_1] [i_1] [i_1] [i_9] [i_9] = (((((+(max((arr_11 [i_9] [i_8]), 121))))) || 65535));
                        var_27 = (((arr_19 [i_1] [6] [1] [i_1] [i_9]) ? (arr_30 [i_1] [i_1] [i_1] [i_9]) : (((~3) ? (max((arr_9 [4]), 4095)) : 103))));
                        arr_35 [1] [i_1] [1] [i_1] = (max((arr_14 [i_0] [4] [i_0] [i_0]), (((((arr_10 [i_1] [i_1]) | (arr_6 [i_0] [i_1] [i_9] [i_9]))) >> (arr_28 [i_8] [i_1] [i_0])))));
                    }
                }
            }
        }
    }
    var_28 -= ((~((9223372036854775802 >> (110 & var_15)))));
    #pragma endscop
}
