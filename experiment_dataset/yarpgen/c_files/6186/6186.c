/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_0, 54731));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (~var_1);
        var_19 &= (max((~17705399027040731713), (((var_9 > (var_13 / 17705399027040731697))))));
        var_20 |= (((max((131210943 > 3761630910), (17705399027040731701 / 1))) * ((~(((arr_0 [i_0]) - -24283))))));
    }
    #pragma endscop
}
