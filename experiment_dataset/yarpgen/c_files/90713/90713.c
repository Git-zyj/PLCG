/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    var_20 = ((var_5 ? var_0 : ((-((var_15 ? var_16 : var_17))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = var_6;
                arr_7 [i_0] = ((((((~(arr_4 [i_0] [i_0]))))) ? var_6 : var_17));
            }
        }
    }
    var_22 = ((var_9 ? var_7 : ((((!(((-260468749407313556 ? var_3 : 1)))))))));
    #pragma endscop
}
