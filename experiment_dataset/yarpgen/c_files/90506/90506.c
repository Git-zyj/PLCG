/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((max(var_4, (!var_4)))) ? (max(((var_4 ? var_8 : var_2)), (max(var_2, var_2)))) : var_3);
    var_11 |= (((((((~(-2147483647 - 1))) ^ (((-2147483647 - 1) ? (-2147483647 - 1) : 1))))) ? var_1 : var_5));
    var_12 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_0] [8] [i_1] [i_2] = ((((var_8 & var_5) ? (var_7 & var_6) : var_2)));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_13 ^= (var_2 & var_9);
                        var_14 = (max(var_14, (((32767 ? 13135458212456569339 : 20540)))));
                        var_15 = (((var_3 & var_2) ? var_0 : ((max(var_3, var_9)))));
                        var_16 = ((!(((max(var_4, var_4))))));
                        var_17 = (max(((var_5 ? ((var_7 ? var_0 : var_3)) : var_1)), ((((var_4 ? var_6 : var_2))))));
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, ((max((max(var_5, var_0)), (((var_3 ? var_5 : ((var_9 ? var_5 : var_8))))))))));
    #pragma endscop
}
