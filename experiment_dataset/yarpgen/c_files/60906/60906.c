/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_6;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 -= (arr_0 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((-(arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
