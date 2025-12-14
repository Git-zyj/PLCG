/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((252 ? var_14 : (~var_18))))));
    var_20 = (30511 / 54);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 -= (((((~(((arr_2 [i_0]) + (arr_1 [i_0] [7])))))) ? (arr_0 [i_0]) : (((-0 >= (max((arr_2 [i_0]), (arr_2 [i_0]))))))));
        arr_4 [i_0] = (arr_1 [i_0] [9]);
    }
    #pragma endscop
}
