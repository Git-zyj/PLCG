/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 -= 4294967286;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (((((min((arr_0 [i_0] [i_0]), var_12))) ? (arr_2 [i_0]) : (var_7 ^ var_14))) | (((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : (arr_3 [i_0] [i_0]))));
        arr_5 [i_0] = 9;
    }
    #pragma endscop
}
