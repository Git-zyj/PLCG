/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (((((-16 ? var_7 : (arr_2 [i_0 + 2])))) ? (arr_3 [i_0 + 3]) : (((18446744073709551615 ? var_0 : 0)))));
        var_15 = (arr_1 [i_0]);
    }
    var_16 = (max(var_9, var_14));
    var_17 = ((-(min(-var_9, ((var_13 ? var_5 : var_12))))));
    #pragma endscop
}
