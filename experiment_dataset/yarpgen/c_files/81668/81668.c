/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    var_11 = ((var_7 ? (max((max(1, 11301680562367788781)), (0 > var_6))) : (((((25 != var_2) == -2504435))))));
    var_12 = (max((var_6 * var_1), var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = ((~(((arr_1 [i_0]) & 17))));
                arr_6 [i_0] [i_1] = (min(var_7, (~-2147483637)));
            }
        }
    }
    #pragma endscop
}
