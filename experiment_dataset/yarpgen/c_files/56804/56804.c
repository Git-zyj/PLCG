/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_17 *= (-(arr_2 [i_0]));
                var_18 = var_9;
            }
        }
    }
    var_19 = (((max(var_12, ((var_10 ? 14642 : 41)))) != 21017));
    var_20 = (((((((min(-28173, var_15)) + 9223372036854775807)) >> (((min(var_0, var_15)) + 6648750416846336472)))) + (((var_11 ? (!7297) : var_5)))));
    var_21 = ((((~((var_10 ? var_13 : var_4))))) ? ((-((var_6 ? -1605759174910889715 : var_9)))) : (var_13 - var_5));
    #pragma endscop
}
