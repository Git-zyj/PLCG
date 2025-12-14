/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((((!((min(12, 49)))))) <= (((((8729799855066386341 ? 1882542308 : var_0)) >= -95)))));
        var_16 -= 95;
        var_17 = (min((max(((20111 + (arr_0 [7]))), (arr_0 [i_0]))), (!var_14)));
    }
    var_18 = (min(var_18, var_2));
    #pragma endscop
}
