/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_1 < ((-((1379650248 ? 3799244121814748077 : 2178741477))))));
    var_18 = ((var_0 ? ((var_11 ? 1982457546 : var_8)) : (min((max(var_8, var_9)), (6035965478873904971 >= var_1)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = var_2;
        var_20 = (max(var_20, var_15));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((229 * ((((~1) == (1 % 1))))));
        var_21 = 3410409901;
    }
    var_22 |= ((1 < var_12) ? ((((100 ? 1506123268 : 30)) * 3860443571)) : var_15);
    #pragma endscop
}
