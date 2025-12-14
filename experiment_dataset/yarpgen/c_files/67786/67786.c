/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!var_2) ? var_5 : (((64 ? var_5 : 1)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        var_12 = (min((((arr_0 [i_0]) | (arr_0 [i_0]))), (((181 | 182) & (arr_1 [i_0] [i_0])))));
        var_13 = (min(var_13, (((-((8781705382953889339 - (((-8781705382953889340 ? 69 : 1568265651))))))))));
    }
    var_14 = ((((((var_8 == (31451 * 6423291813881239700))))) % -8781705382953889340));
    var_15 = (((var_5 + var_5) + var_4));
    #pragma endscop
}
