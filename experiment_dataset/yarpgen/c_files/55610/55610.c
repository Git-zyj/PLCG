/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_12 ? (min(((max(var_4, var_7))), (var_8 * 635130229))) : var_3));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = var_12;
        arr_3 [i_0] [i_0] |= ((var_1 & ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [7]) : (arr_1 [18] [i_0]))))));
    }
    var_15 = ((-4 ? 2875952924 : 1054221725));
    #pragma endscop
}
