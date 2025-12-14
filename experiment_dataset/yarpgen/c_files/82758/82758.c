/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_8 / ((var_8 ? var_9 : var_9))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_15 = (~var_7);
        arr_4 [i_0] = ((-(((~var_8) ? ((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) : ((~(arr_1 [i_0] [i_0])))))));
    }
    var_16 = ((~((~((var_10 ? var_1 : 670358573))))));
    #pragma endscop
}
