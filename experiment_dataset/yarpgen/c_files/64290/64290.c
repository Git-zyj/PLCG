/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (+((var_9 ? (arr_1 [i_0]) : var_2)));
        var_18 = ((((((arr_0 [i_0]) + 2147483647)) << (((((arr_0 [i_0]) + 19357)) - 17)))));
        arr_2 [i_0] = ((4 != ((((var_13 <= (arr_0 [i_0]))) ? (min((arr_0 [i_0]), var_13)) : (min((arr_0 [i_0]), var_9))))));
    }
    var_19 = (min(var_19, (((var_12 ? ((~((255 ? var_15 : var_10)))) : var_3)))));
    #pragma endscop
}
