/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_12 = (((arr_0 [19] [i_0 - 2]) ? ((((((arr_0 [i_0 - 2] [i_0 - 2]) ? 1073226614 : 203993119))) ? (~1073226605) : (arr_0 [i_0 - 2] [i_0 - 2]))) : ((((arr_1 [4] [4]) - -49152)))));
        var_13 = (1625680750618338865 + 1073226627);
    }
    var_14 = (min(var_14, ((((!var_11) ? ((3221740691 ? (((49154 ? 72 : 2127))) : 2117288877)) : var_7)))));
    #pragma endscop
}
