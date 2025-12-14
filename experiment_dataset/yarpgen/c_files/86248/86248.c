/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((min(var_16, var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = 0;
                var_21 = (max(var_21, (((!(!18446744073709551609))))));
            }
        }
    }
    #pragma endscop
}
