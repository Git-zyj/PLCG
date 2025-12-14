/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_9));
    var_18 = (max(var_18, var_15));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_19 |= (33290 ? 33272 : 710848349);
        var_20 = (min(var_20, (((-((~(arr_1 [i_0 - 1]))))))));
        arr_2 [1] |= (max(710848338, 32245));
    }
    var_21 *= (max((((var_10 ? 82 : ((max(82, 51256)))))), (((!var_4) ? (-32767 - 1) : ((4867 ? 4873 : 1704960475653259886))))));
    #pragma endscop
}
