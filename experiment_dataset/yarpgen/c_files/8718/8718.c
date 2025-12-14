/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_14));
    var_17 = (min(((var_6 ? (((var_7 ? var_8 : var_3))) : ((var_6 ? var_13 : var_10)))), ((var_4 ? (((var_14 ? var_6 : var_8))) : ((var_13 ? var_1 : var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = ((((((var_12 | var_12) ? var_0 : ((var_1 ? var_8 : var_15))))) ? (!-1) : var_9));
                arr_5 [i_1] [i_1] [i_0] = (((var_10 ? var_2 : var_15)));
                arr_6 [i_0] [i_0] = (var_6 ? (~var_6) : ((var_3 | ((1052095984 ? 22527 : 4591932506000835014)))));
            }
        }
    }
    var_19 = (max(var_19, var_4));
    #pragma endscop
}
