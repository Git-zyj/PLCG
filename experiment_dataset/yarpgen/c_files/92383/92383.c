/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((-4522293351040744040 ? var_6 : var_2))) > ((var_6 ? var_14 : var_4)))) ? ((var_5 ? ((-4522293351040744018 ? var_14 : var_8)) : (!4522293351040744055))) : (((max(var_5, -4522293351040744040)) - var_2)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 &= ((((11022 ? var_1 : (arr_1 [i_0] [i_0]))) | (((var_6 ? var_14 : -4522293351040744060)))));
        var_18 &= (min(3839, -32744));
        var_19 = ((255 ? ((((arr_0 [i_0]) || (arr_0 [i_0])))) : ((-4233673333175702508 ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_20 = 119;
    }
    #pragma endscop
}
