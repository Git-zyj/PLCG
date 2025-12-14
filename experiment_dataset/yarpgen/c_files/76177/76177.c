/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [4]);
        var_19 = (arr_1 [i_0] [i_0]);
        var_20 = ((65535 != (~88)));
    }
    var_21 = var_1;
    #pragma endscop
}
