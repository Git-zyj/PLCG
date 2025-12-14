/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (((((~(arr_0 [i_0] [i_0])))) ? (min(1802892104, 2755057092)) : (~var_11)));
        var_14 = -1;
        var_15 = (min(var_5, var_11));
    }
    #pragma endscop
}
