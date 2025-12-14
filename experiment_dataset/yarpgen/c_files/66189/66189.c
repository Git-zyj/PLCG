/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = (var_5 % var_1);
                var_20 += ((var_3 ? (((!(var_2 / var_14)))) : ((-(15520 / var_10)))));
            }
        }
    }
    var_21 -= var_4;
    var_22 = ((((var_12 ? (var_14 <= var_4) : (min(var_13, var_9))))) ? (((!(~var_11)))) : (((((var_4 ? var_0 : var_8))) ? ((min(var_2, var_5))) : ((min(var_8, var_8))))));
    #pragma endscop
}
