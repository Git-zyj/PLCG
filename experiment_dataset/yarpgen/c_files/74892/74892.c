/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 ^= var_3;
    var_13 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((-101 ? 3963 : 103)));
                var_14 = (!23);
            }
        }
    }
    #pragma endscop
}
