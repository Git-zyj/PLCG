/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((((max(-20327, var_3))) ? (!var_9) : (max(((var_7 ? 20343 : var_12)), ((max(var_9, var_2)))))));
    var_14 = (max(var_14, (((var_11 ^ ((((!var_11) ? ((max(66, 127))) : ((var_0 ? -91 : 32749))))))))));
    var_15 = ((393216 ? (max(127, var_6)) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((((((!-11) ? -32761 : ((16380 ? 4294574102 : -6987109150163456129))))) ? (-2147483647 - 1) : ((-32753 ? (arr_5 [i_0 - 2] [i_0 + 1]) : var_5)))))));
                            var_17 = var_12;
                            var_18 = ((3836555039 ? -66 : 1708418525));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_19 = (i_0 % 2 == 0) ? ((((var_2 + 2147483647) >> (((arr_15 [i_0]) + 8299996732865983142))))) : ((((var_2 + 2147483647) >> (((((arr_15 [i_0]) + 8299996732865983142)) - 4648836638682447874)))));
                    var_20 &= (((((var_1 ^ (arr_11 [i_0] [2] [i_1] [7])))) ? 96 : (~4095)));
                }
                var_21 &= (max((((var_0 ? 65 : (max(var_12, var_5))))), var_11));
            }
        }
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_22 = var_10;
        var_23 += ((20326 % (((arr_17 [20]) ? var_2 : -67))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_24 = (max(var_24, 32490));
                    var_25 -= (var_4 ? ((max(((47749 ? 16033 : -127)), (~-67)))) : (max(var_1, -14)));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_26 = (((~-96) | 18));
                                var_27 = (max(var_27, var_1));
                                arr_29 [i_5] [i_5] [i_5] [i_6] [i_5] [i_5] &= ((0 ? (max((arr_28 [i_5] [i_9]), ((33753818 ? -33753818 : var_5)))) : 0));
                            }
                        }
                    }
                }
            }
        }
        var_28 += ((!(-2147483647 - 1)));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        var_29 |= -5652269143909188974;
        arr_34 [i_10] [i_10] = var_2;
        var_30 -= var_4;
        var_31 = (((((var_4 ? 565955073 : var_0))) ? -554128799 : (((-2147483647 - 1) ? 5652269143909188978 : 34359738367))));
    }
    #pragma endscop
}
