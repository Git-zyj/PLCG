/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (arr_8 [i_0] [i_0] [i_0])));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_17 = var_3;
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] |= var_12;
                        var_18 = (min((((((arr_9 [i_2]) ? var_3 : (arr_8 [i_1] [i_1] [i_0]))) | var_8)), ((max((arr_2 [i_3]), 7929125622678351358)))));
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        arr_18 [i_2] = (arr_17 [i_0] [i_0]);
                        arr_19 [3] [i_2] [i_2] = (((((((13301317320582083981 ? 15548984099140601461 : 3353850315)) << (((min(1682451573, 15927)) - 15884))))) ? (max(((min(var_6, var_8))), (arr_10 [i_2] [i_2] [i_4 - 1] [i_4]))) : (((24760 + (arr_15 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        var_19 = (min(var_19, (3219912811 && 2)));
                        arr_22 [6] [i_5] [i_1] [8] [i_1] |= -1545001442;
                        arr_23 [i_2] = (arr_3 [i_0] [12]);
                    }
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        arr_26 [i_6] [i_6 + 1] [i_2] [i_2] [i_1] [3] = (((((((arr_4 [i_2 - 1] [1] [i_0]) == var_5)) ? ((2147483647 + (arr_11 [i_0] [i_1] [i_2] [i_2]))) : 63))) ? (arr_5 [i_6 - 1] [i_2 + 3]) : ((((arr_6 [i_6] [i_2] [i_2] [i_2 + 2]) == (((var_3 == (arr_11 [2] [i_1] [i_2] [i_2]))))))));
                        arr_27 [i_2] [i_0] = (((arr_11 [i_1] [15] [i_1] [i_2]) & var_14));
                    }
                    arr_28 [i_2] [i_1] [i_2] = ((((((((58707 ? 4294967293 : 2612515706))) ? (65452 / 484742963) : 58040))) <= ((0 ^ (((arr_5 [i_0] [i_2]) ? 4058719705 : (arr_1 [i_0] [i_0])))))));
                }
            }
        }
        arr_29 [2] = (max(1734987480, 0));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_20 = (min(var_20, ((max(15971271936404600050, 2)))));
        var_21 = (min(var_21, (arr_31 [i_7])));
    }
    var_22 = var_8;
    #pragma endscop
}
