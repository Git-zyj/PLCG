/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, (((var_1 * var_6) ^ ((var_7 * (arr_9 [i_0] [i_1] [i_2] [i_3] [i_4])))))));
                                var_13 *= (((arr_11 [i_0] [i_1] [i_0] [6] [i_4]) - (min((288230376149614592 >= 1982217522), (var_7 + var_6)))));
                                var_14 -= ((((((arr_1 [i_0]) ^ ((var_4 ? var_8 : (arr_2 [i_4] [i_1] [i_2])))))) ? ((((arr_6 [i_0 + 1] [i_1] [i_1] [i_3 - 2]) ? (arr_5 [i_0 - 1]) : (arr_6 [i_0 - 3] [i_0] [0] [i_3 - 1])))) : ((~(min(var_5, (arr_4 [i_4] [i_4])))))));
                                var_15 *= (min(((((((arr_3 [i_3] [i_4]) ? (arr_1 [i_0]) : var_4))) ? (((arr_2 [i_0] [i_0] [i_0]) % var_1)) : (arr_1 [6]))), ((((arr_0 [i_3 - 1]) ? (((var_6 <= (arr_5 [i_0])))) : var_1)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_16 = ((((max((arr_4 [i_2] [i_2]), var_3))) ? (((arr_1 [i_5 - 1]) / (arr_1 [i_0 + 2]))) : var_5));
                                var_17 = (~(((arr_2 [i_0] [i_0 + 1] [i_1]) ? (arr_2 [i_0] [i_0 - 3] [i_2]) : (arr_2 [13] [i_0 - 1] [i_0 - 1]))));
                                arr_17 [i_2] [i_0] [i_2] [i_2] [i_1] [i_2] = (((~var_1) ? 13140875085132991401 : (((!2513982551705241164) ? ((var_10 ? (arr_13 [i_2] [i_1] [i_1] [10]) : var_10)) : (((var_10 ? var_7 : var_7)))))));
                            }
                        }
                    }
                    var_18 = var_10;
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 13;i_10 += 1)
                {
                    {
                        var_19 = arr_9 [i_7] [i_8] [i_7] [0] [7];
                        var_20 = (min((arr_10 [i_10] [i_9 - 1] [10] [i_7] [11]), (((arr_16 [i_8 + 1] [i_8] [i_9] [i_8] [i_8]) != (arr_16 [i_8 + 1] [i_8] [i_9] [i_8] [i_8])))));
                    }
                }
            }
        }
        var_21 &= (((arr_0 [i_7]) >> (((arr_28 [i_7] [i_7] [i_7] [i_7]) + 11505))));
    }
    var_22 = var_6;
    #pragma endscop
}
