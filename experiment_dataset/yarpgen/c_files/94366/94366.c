/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 18720;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_16 = (((((var_8 ? var_10 : var_14))) * ((max(var_1, (arr_0 [i_0 + 1]))))));
        arr_2 [i_0] [i_0] = ((-1606997746 & (arr_1 [i_0 + 1])));
    }
    var_17 = ((!((((((var_4 ? 0 : 1606997744))) ? 1606997737 : var_12)))));
    #pragma endscop
}
