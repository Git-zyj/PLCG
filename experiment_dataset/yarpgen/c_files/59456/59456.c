/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(1, 65535));
    var_18 = (((min((((var_12 ? 15 : var_8))), -3356057351)) << (938909948 / 646431861)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_0] = arr_3 [1] [10];
                var_19 = (!1);
            }
        }
    }
    #pragma endscop
}
