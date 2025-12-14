/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(-90, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((0 ? 0 : var_6));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = ((((((((var_6 ? var_9 : var_0))) ? -var_10 : ((var_6 ? var_9 : var_10))))) ? ((2147483638 ? -32754 : 16128)) : ((((var_1 ? var_5 : var_5)) + var_12))));
                            var_17 *= (max((((var_3 ? var_5 : var_2))), ((max(var_14, ((var_3 ? var_0 : var_4)))))));
                        }
                    }
                }
                var_18 = var_1;
            }
        }
    }
    #pragma endscop
}
