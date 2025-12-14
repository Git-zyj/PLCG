/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = ((~(min((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))), (arr_0 [i_0] [i_0])))));
        var_19 = (arr_0 [i_0] [i_0]);
        var_20 = (arr_1 [7] [i_0]);
    }
    var_21 = (min((((((var_0 ? var_3 : var_13))) ? 1 : 31487)), ((var_10 ? (var_16 > var_14) : var_4))));
    #pragma endscop
}
