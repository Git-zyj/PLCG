/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((((-127 - 1) ? var_3 : var_9)) & ((min(var_5, var_4)))))) ? (min((!var_2), (max(var_8, var_2)))) : var_5));
    var_12 = ((var_1 ? (min(var_7, var_3)) : var_9));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_13 &= ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [9])))) ? (arr_0 [i_0]) : (arr_1 [i_0 + 2])));
        var_14 |= (((((arr_0 [i_0]) / (arr_0 [i_0]))) - (arr_0 [i_0 + 1])));
        arr_2 [i_0] = ((var_0 ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_15 += (((((-1 ? 0 : 5182))) ? (var_2 + var_8) : (arr_4 [i_1])));
        var_16 = (max(var_16, (arr_3 [i_1 - 1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                {
                    var_17 = -var_8;
                    var_18 = (min(var_18, -11642950605376751883));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_18 [17] [i_4] [i_3] [i_4] [i_5 + 1] = 29723;
                                var_19 = (max(var_19, (((!(arr_4 [i_1]))))));
                                arr_19 [i_1] [i_2] [i_4] [i_4] [i_5 - 1] = ((35816 * (arr_11 [i_1] [i_2] [i_5 + 2])));
                                arr_20 [i_5] [i_4] [i_4] [i_4] [i_1] [i_1] = (((arr_16 [i_4] [i_3 + 2] [i_3 + 2] [i_5 + 4] [i_5]) || (arr_16 [i_4] [i_3 + 2] [i_3 + 1] [i_5 - 2] [i_5 - 1])));
                            }
                        }
                    }
                    var_20 += ((!(arr_13 [i_3 - 2] [i_2] [i_2] [i_1 + 4])));
                }
            }
        }
        var_21 = var_6;
    }
    #pragma endscop
}
