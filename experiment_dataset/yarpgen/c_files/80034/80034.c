/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_12 = (min((((~(arr_0 [i_0 - 1] [i_0])))), ((17993449333104301800 ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0])))));
        var_13 = (min(var_13, (((~(arr_1 [i_0] [8]))))));
        var_14 ^= (((arr_2 [i_0]) > (2133078629 <= 13248644483725891949)));
    }
    var_15 = var_8;
    #pragma endscop
}
