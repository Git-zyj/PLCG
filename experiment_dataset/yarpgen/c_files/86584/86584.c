/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 59926));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (max(var_20, 28));
        arr_3 [i_0] = 232;
        arr_4 [i_0] [i_0] = (min(-32768, 29));
    }
    var_21 = 32782;
    #pragma endscop
}
