/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_0 << ((((var_13 || 155) || (var_12 && var_18)))));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_20 = ((((max((arr_0 [i_0 - 4]), (arr_1 [i_0 + 1])))) ? (max(var_6, (arr_0 [i_0]))) : (((1 | ((max(-16561, var_2))))))));
        var_21 = ((((max((arr_1 [i_0 - 1]), (((arr_0 [3]) ? 18446744073709551606 : var_18))))) ? (arr_1 [i_0 - 3]) : var_4));
    }
    var_22 = var_2;
    #pragma endscop
}
