/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_0 ? (!-var_5) : var_5));
    var_12 = (var_1 | -7885822525928647699);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 = (arr_0 [i_0]);
        var_14 ^= (arr_1 [i_0]);
    }
    var_15 &= (127 >= var_2);
    var_16 = (var_3 < 1);
    #pragma endscop
}
