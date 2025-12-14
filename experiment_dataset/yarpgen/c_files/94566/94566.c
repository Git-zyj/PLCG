/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (max(var_11, (((-(((arr_1 [i_0]) - 251658240)))))));
        var_12 = (max(var_12, ((1 ? 1 : 4095))));
        arr_4 [i_0] = ((-(((arr_1 [i_0]) + 2626544655743687552))));
    }
    #pragma endscop
}
