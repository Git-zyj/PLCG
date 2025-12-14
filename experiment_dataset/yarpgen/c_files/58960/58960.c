/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 ? var_5 : ((((!(((var_7 ? var_10 : 1638630154)))))))));
    var_12 = -17135;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (min(var_13, (arr_1 [3])));
        var_14 = ((20 ? (((144 ? 63 : -16064))) : ((9223372036854775807 ? 20 : 0))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_15 = 2147483647;
                        var_16 = (max(var_8, (((((2859403784460195798 ? 16 : 1751426861484322459)) <= (arr_7 [i_1]))))));
                        var_17 = (arr_10 [i_0] [i_0]);
                        var_18 = ((((((arr_5 [i_0] [i_2] [i_3]) ? (max(509160294, (arr_5 [i_0] [i_0] [i_0]))) : (~118)))) ? ((((arr_7 [i_2]) > (((4294967295 ? var_1 : var_6)))))) : -159));
                        var_19 = ((~((~((151 ? 20 : 239))))));
                    }
                }
            }
        }
        var_20 = (((max((~9223372036854775807), ((((arr_7 [i_0]) != 466924017806032554))))) * (arr_5 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        arr_15 [i_4 - 1] [i_4 - 1] = (2147483647 + -148);
        var_21 = ((-(arr_13 [i_4])));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        arr_18 [i_5] = (min((!var_10), ((var_3 ? var_6 : (arr_17 [i_5] [i_5])))));
        arr_19 [i_5] [i_5] = (max(99, -66));
        arr_20 [i_5] = (arr_16 [i_5]);
    }
    for (int i_6 = 2; i_6 < 16;i_6 += 1)
    {
        var_22 = var_10;
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        var_23 = (((((1416240573 << (-1 + 23)))) ? ((min((arr_29 [i_8] [i_8] [i_8]), 12092))) : var_5));
                        var_24 = (min(var_24, (((((((max((arr_24 [i_7] [i_8]), var_2))) ? (max((arr_29 [i_9] [i_7] [i_9]), var_4)) : (((-1 ? 22388 : -908833464))))) | (((-(arr_22 [11])))))))));
                        arr_34 [i_8] [i_8] [i_8] [i_8] = (max(17137, ((4294967292 ? 5 : 7860))));
                        var_25 = (((((+(((arr_28 [i_8] [i_7] [i_8]) / 23281))))) ? (arr_30 [i_6] [i_6] [i_6 + 4] [i_7 + 1]) : (min(var_8, (arr_32 [i_8])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
