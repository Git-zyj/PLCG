/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(var_5, ((var_6 ? var_19 : var_14))))) ? (max(((var_1 ? 1 : var_13)), var_11)) : ((~((42103 ? 42096 : var_13))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 ^= min(var_14, 0);
                    arr_8 [i_0] [i_0] [i_2] = var_17;
                }
            }
        }
    }
    var_22 = var_5;
    #pragma endscop
}
