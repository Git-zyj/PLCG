/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 = ((((((arr_0 [i_0]) ? 4899068814141795298 : -8))) ? (-4899068814141795308 / 1) : (arr_1 [i_0] [i_0])));
        var_19 = (arr_0 [i_0]);
    }
    var_20 = (!var_13);
    #pragma endscop
}
