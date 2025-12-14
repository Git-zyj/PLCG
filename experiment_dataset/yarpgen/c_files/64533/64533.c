/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    var_19 = (min(((var_11 ? (max(238, var_0)) : (((var_9 ? 227 : 238))))), (max(1473126506, 8))));
    var_20 = ((var_6 & (min((((var_16 ? var_8 : var_8))), (max(var_2, var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (arr_1 [i_0])));
                arr_5 [i_1] = 0;
            }
        }
    }
    var_22 &= (min(var_2, ((var_11 - (((1 << (65535 - 65512))))))));
    #pragma endscop
}
