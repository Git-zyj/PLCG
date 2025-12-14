/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = var_8;
    var_19 = (~(4294967276 - -3228));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (((((~(arr_2 [i_0])))) ? var_0 : ((-3335046057904212397 ? (arr_2 [i_0]) : (arr_2 [i_0])))));
        arr_3 [i_0] = var_14;
    }
    #pragma endscop
}
