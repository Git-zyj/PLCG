/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_4 ? var_6 : 603790470));
    var_12 -= var_5;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = max(((20 & ((var_7 ? (arr_0 [i_0] [i_0]) : 12)))), ((54 & (((31 >> (var_5 - 158)))))));
        var_14 *= (max(((max(var_0, 250))), ((max(var_7, 31)))));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_15 = (min(var_15, ((((((arr_3 [i_1 - 3]) ? (arr_3 [i_1 + 1]) : 108)) < ((((((arr_4 [7]) <= (arr_5 [i_1] [i_1])))))))))));
        var_16 = (min(((((min(var_0, 101))) ? ((var_6 & (arr_3 [14]))) : (arr_3 [i_1 + 2]))), var_5));
    }
    var_17 = (!var_1);
    var_18 = var_1;
    #pragma endscop
}
