/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_15));
    var_20 = (min(var_20, var_0));
    var_21 = 56;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_22 -= (max((((arr_1 [i_0]) <= var_2)), (arr_3 [i_1])));
                arr_6 [i_0] = 56;
            }
        }
    }
    var_23 = (max(((~(min(94, var_6)))), (!var_8)));
    #pragma endscop
}
