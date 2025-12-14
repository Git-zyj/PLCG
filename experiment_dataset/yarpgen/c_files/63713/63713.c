/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (20 != var_10);
    var_14 = var_4;
    var_15 = ((98 ? var_8 : (((var_9 ^ var_6) ? ((max(var_6, var_12))) : ((8991055902557439824 ? var_4 : var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (arr_2 [i_0] [i_1])));
                arr_5 [i_0] [i_1] = var_2;
            }
        }
    }
    #pragma endscop
}
