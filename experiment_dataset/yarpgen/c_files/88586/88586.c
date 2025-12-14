/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 385464629;
    var_11 &= ((((((((385464629 ? var_1 : var_2))) ? -22197 : (var_7 == var_4)))) ? ((max(var_6, var_8))) : (max(385464629, -16116))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_12 = max((((arr_0 [i_0 + 2] [i_0 - 2]) ? (arr_0 [i_0 + 2] [i_0]) : (arr_0 [i_0 + 2] [14]))), (arr_1 [i_0 - 1]));
        var_13 = (min(var_13, ((min((((((var_3 ? 22196 : var_2))) ? (~var_8) : var_0)), -1323335203)))));
        var_14 = (min(var_14, (((+(((1 && ((min((arr_0 [i_0] [i_0]), -22197)))))))))));
        var_15 = (~-1383357370);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 13;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                arr_15 [i_5] [i_5] &= (min((min(var_3, (arr_13 [i_3 - 2] [i_4] [i_4] [i_5] [5]))), (~-1323335203)));
                                var_16 = (((((((min(var_6, var_1))) ? 3251482513 : -21632))) ? ((~(arr_4 [i_3 + 2] [i_5]))) : ((var_5 ? var_0 : var_4))));
                                var_17 *= ((~(min((min(4095, 1323335188)), (((arr_6 [i_1]) ? var_5 : var_4))))));
                            }
                        }
                    }
                    arr_16 [i_3] [15] [i_3] = ((~(min((arr_12 [i_2] [i_3 + 4] [i_3] [i_3 - 3] [i_3 - 3]), 2216680198))));
                }
            }
        }
        arr_17 [i_1] [i_1] = arr_2 [10];
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        var_18 = var_9;
        var_19 *= (min(var_6, ((((((arr_10 [i_6] [i_6] [i_6] [i_6] [i_6]) ? -21632 : 4294967292))) ? ((var_0 ? var_6 : -1323335203)) : ((2147483646 / (arr_18 [i_6])))))));
    }
    #pragma endscop
}
