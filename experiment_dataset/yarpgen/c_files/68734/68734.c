/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (min((!var_11), (min((var_0 % 95), ((var_13 ? var_8 : var_14))))));
    var_16 = (min(var_5, ((min(var_0, var_12)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = ((((((var_1 - 154) + 0))) ? (((min(94, var_13)))) : (((var_6 / var_3) ? (var_0 + var_7) : ((-1 ? 1 : var_14))))));
                                var_18 = ((var_8 ? (((~(min(var_12, var_14))))) : ((var_7 / ((1 ? var_6 : var_11))))));
                                var_19 += (((((var_10 >= var_7) >> 1))) ? (((var_6 + 9223372036854775807) << (((((min(var_7, var_11)) + 1876595545)) - 8)))) : ((((((var_2 ? var_2 : 79))) ? ((var_3 ? 1 : var_0)) : var_10))));
                                var_20 = (((((var_12 ? 255 : var_11))) ? -var_13 : -var_10));
                                var_21 = (((var_2 * 0) < (((((9223372036854775802 ? var_8 : var_2))) ? ((var_5 ? var_10 : var_3)) : ((var_11 ? var_4 : var_1))))));
                            }
                        }
                    }
                    var_22 = ((min(-5282823494632266029, var_11)));
                }
            }
        }
    }
    var_23 = (((((min(30501, 1)))) <= (-1 + 160)));
    var_24 = ((min(var_9, (-5282823494632266029 >= var_11))));
    #pragma endscop
}
