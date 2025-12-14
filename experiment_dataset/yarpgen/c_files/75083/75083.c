/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(((var_8 ? var_0 : var_9)), (var_10 < var_7)))) ? 144229749 : (((((var_9 ? 0 : var_6))) ? var_4 : var_1))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((((((arr_3 [i_1 + 2] [i_1 + 1] [i_0 + 1]) + (arr_3 [i_1 + 1] [i_1 + 2] [i_0 - 4])))) ? 1 : var_2)))));
                arr_6 [0] [i_0 - 3] [0] |= (--29127);
                var_13 *= (((min((((1 / (arr_4 [i_0] [8])))), (arr_1 [i_0] [i_0]))) & ((max(-999148361, -65)))));
            }
        }
    }
    #pragma endscop
}
