/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] |= ((max((arr_0 [i_0]), 5584)));
        arr_4 [i_0] &= (max((1488531839 & 65514), (arr_0 [i_0])));
        var_11 = (max(var_11, ((((1516565203 ? 1488531867 : -1088))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_12 = (max(18179589241343003508, (-127 - 1)));
        var_13 = (max(var_13, (((((var_1 && var_2) >> (32767 - 32744)))))));
        var_14 = (((((((var_4 ? var_6 : (arr_5 [i_1])))) ^ (19752251 ^ 16062039183852156103))) == (((385006115 < (arr_6 [i_1]))))));
        var_15 = 2;
    }
    var_16 = (max(var_16, ((((((max(var_4, var_10)) >= (max(var_10, 32560)))) ? ((9223372036854775807 ? 27679 : (max(19752251, 8070450532247928832)))) : var_1)))));
    var_17 = (max(var_17, (((min(var_3, 590945305048577015)) * var_7))));
    #pragma endscop
}
