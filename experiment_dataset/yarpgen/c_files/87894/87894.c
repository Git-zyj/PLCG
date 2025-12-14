/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_10;
    var_12 = -28359;
    var_13 = ((var_0 ? ((var_3 ? var_2 : var_7)) : var_9));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 |= ((var_10 ? ((((arr_1 [i_0] [i_0]) ? (max(var_6, (arr_0 [i_0]))) : (((!(arr_0 [i_0]))))))) : (arr_1 [i_0] [i_0])));
        var_15 = (((arr_1 [i_0] [i_0]) ? ((var_4 ? (!var_0) : (arr_0 [i_0]))) : (((var_6 ? 27200 : 1325495837)))));
        var_16 = arr_2 [i_0] [i_0];
        var_17 = ((((((var_6 ? var_7 : var_1)))) ? (((arr_0 [i_0]) ? (((-28359 ? -28359 : var_6))) : var_4)) : (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_1 [i_1 - 2] [i_1 + 1]) ? (((var_3 ? (arr_2 [i_1 + 1] [i_1]) : -512))) : ((var_2 ? (arr_1 [i_1 - 1] [i_1 - 2]) : (arr_2 [i_1 - 2] [i_1 - 1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    var_18 = var_7;
                    arr_12 [i_1 - 1] [i_2] [i_1 - 2] = ((14193 ? (((var_1 ? var_4 : var_0))) : var_3));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_25 [i_4] [i_6] [i_7 - 2] = (max((arr_18 [i_6] [i_4 + 1] [i_6] [i_6]), (((35769 ? 28359 : var_1)))));
                                var_19 = (min(var_19, (((-534 ? -100555656 : -512)))));
                            }
                        }
                    }
                    var_20 = (min(var_20, (arr_21 [i_5] [i_4 - 1] [i_5] [2])));
                }
            }
        }
        var_21 = (max(var_21, -28335));
    }
    var_22 = (max(var_22, (((var_1 ? ((((((var_8 ? 0 : var_3))) ? ((4095 ? 109 : -28359)) : ((var_0 ? -28386 : var_8))))) : ((var_7 ? ((var_2 ? 4344868007101344979 : var_8)) : var_3)))))));
    #pragma endscop
}
