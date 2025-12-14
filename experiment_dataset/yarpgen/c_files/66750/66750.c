/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_20 = ((((((min(var_0, 4294967295)) >= (~var_0)))) * ((((((arr_1 [i_0 + 2]) - (arr_1 [i_0])))) ? ((min(var_5, 7))) : ((((arr_0 [i_0 + 2]) >= -18563)))))));
        var_21 -= min((min(var_16, ((11550763643641218101 ? (arr_0 [i_0]) : 29286)))), ((((-32767 - 1) - -65535))));
    }
    #pragma endscop
}
