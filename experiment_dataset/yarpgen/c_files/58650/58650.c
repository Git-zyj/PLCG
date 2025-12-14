/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_19 = ((((((var_11 && ((min(-12627, var_18))))))) | ((~(~2183870273)))));
        var_20 = (~((((max(983176076, -1212819249)) == (var_17 != var_7)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [3] [i_1] = (((var_10 + var_17) + 1));
        arr_8 [i_1] = ((~(min((0 < var_5), ((511 ? 2147483647 : 511))))));
        var_21 = var_15;
    }
    var_22 = ((+((var_3 ? (var_0 / var_5) : var_1))));
    #pragma endscop
}
