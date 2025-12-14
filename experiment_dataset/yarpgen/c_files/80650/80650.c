/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [3] [i_1] [i_1] = ((1 != (var_11 ^ var_5)));
                arr_5 [i_0] [i_1] [i_0] = ((((min(var_5, (var_8 & -52)))) ? var_9 : ((var_2 ? var_5 : var_3))));
                arr_6 [i_0] [i_1] [i_1] = var_1;
            }
        }
    }
    var_14 = ((((((var_2 ? var_6 : 8589934591))) ? ((min(var_7, var_10))) : var_2)));
    var_15 = ((max(var_3, (max(var_7, var_10)))) * (!202));
    #pragma endscop
}
