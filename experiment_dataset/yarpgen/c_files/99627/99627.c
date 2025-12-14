/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_16 &= (min((~0), (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 1])))));
        arr_3 [1] = (max((arr_1 [i_0] [i_0 + 1]), (max(var_5, (arr_0 [i_0])))));
        arr_4 [i_0] &= (arr_1 [i_0 - 1] [i_0 + 1]);
    }
    var_17 = var_7;
    #pragma endscop
}
