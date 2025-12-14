/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = 2305040771;
        var_14 = (max((20 / 46), 1));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = (!-20);
        var_15 += max(((((arr_3 [4]) ? (arr_3 [4]) : var_5))), (max((((-(arr_5 [6])))), (((arr_4 [i_1]) ? 255 : 16777152)))));
        var_16 *= -194;
    }
    var_17 += var_5;
    var_18 = var_12;
    #pragma endscop
}
