/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, -1533634367));
    var_19 &= var_5;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = arr_1 [i_0];
        var_20 += (max((max(var_7, var_16)), (arr_1 [10])));
    }
    var_21 = var_10;
    #pragma endscop
}
