/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (-2147483647 - 1);
                var_16 = (~1358817190);
                arr_5 [2] &= ((((max(var_12, (min(var_11, (arr_0 [i_1])))))) ? ((max(2607961722, var_0))) : (max(3458764513820540928, var_5))));
                var_17 = ((var_14 ? 14987979559889010688 : ((((var_5 <= (arr_3 [i_0 + 1])))))));
            }
        }
    }
    var_18 = var_10;
    var_19 &= ((-89 && ((14572 <= (26115 + 3446588902520682375)))));
    #pragma endscop
}
