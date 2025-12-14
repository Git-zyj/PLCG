/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_6 ? var_10 : var_13)), var_10));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_16 = ((0 == (536870911 / 26563)));
        var_17 ^= (((((arr_2 [i_0 - 3]) == 3475496452)) && var_10));
        arr_3 [i_0] = ((((max((arr_1 [i_0 - 1]), 33137))) ? 33137 : (min((15 <= 2872820470), (((arr_0 [i_0]) ? 11225930022774640163 : 3))))));
        var_18 = (((max(33137, (arr_1 [i_0 - 2]))) * (max((arr_1 [i_0 - 2]), 4676))));
    }
    #pragma endscop
}
