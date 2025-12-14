/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= var_0;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0 - 1]) << (((arr_2 [i_0 + 1]) - 8605125237540925087))));
        var_14 = (((arr_0 [i_0 + 1] [i_0 + 1]) >= (((((arr_0 [i_0 + 1] [i_0 - 1]) || (arr_1 [i_0 + 1])))))));
    }
    #pragma endscop
}
