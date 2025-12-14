/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((((((var_4 != var_1) ? (var_4 == var_10) : ((var_1 ? var_2 : var_1))))) | (((var_6 - var_10) ? var_7 : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [2] [i_0 - 3] = ((((((var_9 > var_2) ^ (max(var_9, var_1))))) ? ((max(((var_6 ? var_8 : var_10)), (var_2 == var_5)))) : (var_0 & var_9)));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_12 = (max((((var_0 <= ((var_0 ? var_2 : var_9))))), var_0));
                    var_13 = (max((min((var_7 > var_1), -var_5)), (((((var_2 ? var_2 : var_0))) ? (var_8 >= var_5) : (max(var_1, var_9))))));
                    var_14 = var_10;
                    var_15 = ((((((~var_5) ? var_6 : ((max(var_6, var_10)))))) ? (((var_8 && var_7) & (var_7 && var_1))) : ((((max(var_7, var_0))) - var_8))));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_16 |= ((~(var_4 < var_1)));
                    var_17 ^= max((var_9 + var_5), ((((var_8 || var_3) ? (var_2 < var_1) : -var_4))));
                    var_18 -= (((var_6 + (~var_9))));
                    arr_13 [6] [i_3] = ((((max(var_2, ((var_7 ? var_4 : var_1))))) ? (max((max(var_2, var_3)), (var_8 - var_7))) : (((((var_5 ? var_3 : var_8))) ? (var_9 & var_7) : (var_0 && var_9)))));
                    var_19 = ((((max((var_0 - var_3), ((min(var_3, var_6)))))) ? (var_9 && var_0) : (((~var_7) & var_7))));
                }
            }
        }
    }
    var_20 = ((((((var_7 ? var_7 : var_2))) ? ((var_10 ? var_3 : var_2)) : var_8)) - (((max(var_8, var_2)) >> (var_6 ^ var_7))));
    var_21 |= var_10;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            {
                var_22 = (min(var_22, (((((var_1 + (var_7 - var_3))) & (((max(var_9, var_0)))))))));
                /* LoopNest 3 */
                for (int i_6 = 3; i_6 < 8;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 7;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 6;i_8 += 1)
                        {
                            {
                                var_23 ^= ((((~(var_4 - var_4))) | (var_2 > var_8)));
                                var_24 = ((max(var_0, (((var_10 ? var_1 : var_5))))));
                                arr_30 [i_4] [i_5] [i_6 + 2] [i_6] [i_7] [i_6] = ((((var_4 ^ var_1) + 2147483647)) >> (((~var_0) + 116)));
                            }
                        }
                    }
                }
                var_25 ^= var_9;
            }
        }
    }
    #pragma endscop
}
