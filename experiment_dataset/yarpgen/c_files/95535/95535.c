/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min((var_10 >= var_13), (max(2026844251, 10)))) << (((max(((var_3 ? var_9 : var_6)), (6630840176732883272 || -9223372036854775801))) - 7683836351678101421))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_12 [i_0] [i_0] [i_2] [i_2] = (arr_0 [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_21 = ((((((((var_0 >= (arr_4 [1] [i_1]))))) / (arr_1 [i_0 + 1]))) < (((~(((arr_14 [i_0 + 1] [1] [i_1 - 1]) ? (arr_4 [i_4] [i_4]) : var_13)))))));
                                arr_17 [i_1] [i_1] [i_2] [i_3] [i_4] = ((-(arr_2 [i_1 + 2])));
                                var_22 = (((((arr_3 [i_0 + 1]) * (~var_10))) << ((((((((arr_6 [i_0] [i_0] [i_3]) << (((arr_2 [i_3]) - 71))))) ? (var_2 && var_7) : (arr_1 [i_0]))) + 5956761119990695209))));
                            }
                        }
                    }
                    var_23 = ((-(((((var_15 * var_14) + 2147483647)) << (((((var_18 && (arr_15 [i_0] [i_0] [i_1] [i_2])))) - 1))))));
                }
            }
        }
        var_24 = ((((6630840176732883272 << (((((-2147483647 - 1) - -2147483615)) + 68)))) >= (((max(0, 11231))))));
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_27 [i_0] [i_5 - 4] [6] [i_6] [1] = ((~((((((arr_8 [11] [i_6 + 1] [i_0 + 1]) + (arr_15 [i_0 + 1] [i_5 - 4] [6] [6])))) ? (((arr_9 [i_0 + 1]) ? (arr_16 [i_5] [i_7]) : var_9)) : (((min((arr_26 [3] [i_7] [i_6 + 1] [9] [i_5] [11]), var_0))))))));
                        var_25 = (((((arr_6 [i_5 + 2] [i_0 + 1] [i_6 + 1]) << (var_15 + 1011509999)))) ? ((var_6 * ((-(arr_9 [i_5 - 4]))))) : (arr_15 [i_5 - 3] [i_5] [11] [i_5 + 1]));
                    }
                }
            }
        }
    }
    #pragma endscop
}
