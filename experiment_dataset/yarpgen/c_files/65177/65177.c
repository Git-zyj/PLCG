/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -5714882843518083075;
    var_16 = (max(var_16, ((max(var_5, 45263)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [4] &= -33;
                var_17 = 1;
                arr_5 [i_0] = var_4;
            }
        }
    }
    #pragma endscop
}
