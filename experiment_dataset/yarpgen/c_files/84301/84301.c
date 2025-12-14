/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (!var_8);
    var_16 = (~var_12);
    var_17 = (-(!4503591037435904));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (((~53024) ? (((!(arr_0 [i_0 - 1] [i_0 - 1])))) : var_13));
        arr_4 [i_0] [i_0] = 243;
        var_18 = (max(var_18, var_11));
    }
    #pragma endscop
}
