/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((var_5 ? var_5 : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_14 ^= var_3;
                arr_5 [i_0] [i_0] = ((((var_9 ? var_8 : var_11))) ? (3554766372 ^ 740200923) : (min(var_12, var_3)));
                arr_6 [i_1] = ((4169 ? 8128 : 34844));
            }
        }
    }
    #pragma endscop
}
