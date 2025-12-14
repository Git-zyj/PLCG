/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (var_10 < var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = arr_2 [i_0];
                var_17 = (max(var_17, (min((max((((arr_0 [i_0] [2]) ? var_0 : var_5)), var_1)), (!var_7)))));
            }
        }
    }
    var_18 = ((var_3 ? ((max(var_13, var_1))) : (((var_6 & 66) ? var_9 : var_2))));
    var_19 = ((-((max(var_9, var_5)))));
    #pragma endscop
}
