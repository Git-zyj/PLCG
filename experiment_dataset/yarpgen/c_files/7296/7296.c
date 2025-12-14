/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 108;
    var_21 = (((((196 ? var_11 : var_17)) != var_5)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_22 = (arr_3 [i_1]);
                    var_23 = (((-95 + 2147483647) << (((arr_5 [i_0] [i_0] [i_0] [i_2]) - 25733))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_24 = 6512277202141525224;
                                var_25 = (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_4 + 2] [i_4] [i_4] [i_4 + 2] [i_4]) : (arr_2 [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = ((var_0 << (248 - 248)));

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_27 = ((((arr_12 [i_5] [i_5]) ? var_1 : ((((-109 + 2147483647) << (var_11 - 202)))))) ^ ((max(238, var_15))));
        var_28 = (min(var_28, (((min((arr_0 [i_5]), (arr_12 [i_5] [i_5])))))));
    }
    for (int i_6 = 2; i_6 < 18;i_6 += 1)
    {
        var_29 = (((arr_18 [i_6] [i_6]) / (max(139, (arr_18 [i_6] [i_6])))));
        var_30 = (arr_17 [i_6] [i_6]);
    }
    #pragma endscop
}
