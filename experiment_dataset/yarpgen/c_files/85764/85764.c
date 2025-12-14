/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((var_19 && (((var_0 ? ((max(32765, var_0))) : ((((arr_1 [i_0]) && (arr_0 [14])))))))));
        arr_3 [i_0] = var_18;
    }
    var_20 = var_8;
    var_21 ^= var_10;
    #pragma endscop
}
