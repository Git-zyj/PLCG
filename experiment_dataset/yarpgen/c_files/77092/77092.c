/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = (((((((var_12 ? 8237640135057623792 : var_3))) ? 1 : (min(var_6, var_12)))) >= 4321144129518899452));
        var_14 = var_6;
    }
    var_15 = (max(((((56 | -86) && (((-18950 ? var_8 : var_1)))))), var_8));
    var_16 = (min(var_16, ((max(var_6, var_7)))));
    var_17 = (((((((var_6 ? -56 : var_2))) ? var_12 : 2169521687520423421)) >> (((((~var_1) & var_7)) - 2149590048))));
    #pragma endscop
}
