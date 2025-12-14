/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_16 -= (arr_0 [i_0] [i_0 + 1]);
        var_17 = (max(var_17, (((((min((arr_0 [i_0 - 1] [i_0 - 3]), 238))) ? (((((arr_0 [i_0 - 3] [i_0 + 3]) + 9223372036854775807)) << (9223372036854775807 - 9223372036854775807))) : (((arr_1 [i_0 + 1] [i_0 + 3]) ? 17136 : (arr_0 [i_0 + 1] [i_0 + 1]))))))));
        var_18 = (min(var_18, ((max(1425906543, ((~(max(-59, -7254039492606805762)))))))));
    }
    #pragma endscop
}
