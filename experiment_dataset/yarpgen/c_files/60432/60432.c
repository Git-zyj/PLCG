/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        arr_3 [i_0] |= ((-((var_0 - (arr_0 [i_0 - 3])))));
    }
    var_18 = (max(var_18, var_7));
    var_19 = ((127 & ((var_15 ? (16396 ^ var_10) : var_5))));
    var_20 = (max(var_20, var_11));
    #pragma endscop
}
