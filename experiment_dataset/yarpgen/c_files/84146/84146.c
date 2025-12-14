/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 *= ((var_2 ? var_9 : ((min(-14568, (!2838704525380580068))))));
        var_14 = max(541797153, ((min((((var_2 ? 9449 : var_4))), (min(3156529959, 88))))));
    }
    var_15 = 2994470259;
    #pragma endscop
}
