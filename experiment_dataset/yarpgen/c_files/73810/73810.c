/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_17 &= ((127 ? (-127 - 1) : -1));
                            var_18 |= (max(((var_4 | ((var_9 ? var_3 : var_7)))), (max(var_12, ((var_9 ? var_5 : var_2))))));
                            var_19 |= ((((99 && ((min(-1, 0))))) ? (((((min(255, 0))) ? 0 : (max(0, 2))))) : 511));
                        }
                    }
                }
                var_20 = (((((-((var_6 ? var_14 : var_14))))) ? (((~var_2) ? (max(var_2, var_15)) : (((var_4 ? var_15 : var_11))))) : (((var_10 ? var_14 : var_13)))));
                var_21 = (max((((var_10 ? (var_13 <= var_7) : ((max(var_4, var_4)))))), (((var_10 % var_4) ? (((max(var_13, var_9)))) : (min(var_12, var_12))))));
            }
        }
    }
    #pragma endscop
}
