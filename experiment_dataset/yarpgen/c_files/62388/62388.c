/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_13 *= ((((((arr_0 [i_0 - 1]) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (-32767 - 1)))) ? ((16128195682334242181 ? ((163 ? 32762 : 56202)) : var_8)) : (((var_5 == (arr_1 [i_0 - 1] [i_0 + 2]))))));
        var_14 = ((((arr_0 [i_0 + 2]) / (arr_0 [i_0 + 2]))));
    }
    var_15 = (min(var_15, (((~(((var_2 && var_10) ? var_5 : var_4)))))));
    #pragma endscop
}
