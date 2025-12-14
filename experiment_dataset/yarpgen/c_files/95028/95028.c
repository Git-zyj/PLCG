/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_19 = ((min(var_7, (arr_0 [i_0 - 1]))));
        var_20 = ((((max((arr_3 [i_0 - 2]), (arr_3 [i_0 - 1])))) > (((arr_2 [i_0 - 1]) ? (max((arr_1 [i_0 + 1] [i_0 - 1]), var_16)) : (arr_1 [i_0 + 1] [i_0 - 1])))));
    }
    var_21 = (var_8 && var_6);
    #pragma endscop
}
