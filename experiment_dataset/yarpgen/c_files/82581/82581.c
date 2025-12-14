/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((((min(var_8, (arr_0 [20] [i_0])))) ? (((248 << (((~var_6) - 2207356684753354334))))) : (~var_5)));
        arr_3 [i_0] = var_1;
        var_14 = var_1;
    }
    var_15 -= (min(4955, (((486596451 > (var_10 > var_3))))));
    #pragma endscop
}
