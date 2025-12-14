/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 ? (-125 % var_8) : var_4));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = var_8;
        arr_3 [i_0] = max(0, -127);
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_12 = max(4, (-127 - 1));
        var_13 = var_9;
        var_14 = ((((min(var_4, ((123 ? 109 : var_10))))) ? (((min(var_10, var_2)))) : (!var_3)));
        var_15 *= ((!(((-(arr_5 [i_1 - 1] [i_1 - 1]))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_16 = ((((min(var_2, var_9))) ? var_6 : ((34 << (-127 + 138)))));
                    var_17 = (min(var_17, -var_0));
                }
            }
        }
    }
    var_18 = (((((var_10 ^ -34) & var_6)) / var_4));
    #pragma endscop
}
