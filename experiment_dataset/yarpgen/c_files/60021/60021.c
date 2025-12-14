/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((((var_11 / (min(3125643711157955053, var_8)))) / (min(((max(250, var_3))), (min(255, var_8))))));
    var_16 = (min(23, (var_3 < 191500188)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = 899111244;
        var_17 += 1;
        var_18 = ((1 != (arr_1 [i_0])));
        arr_4 [i_0] = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : 244))) && ((1 || (arr_1 [i_0]))));
    }
    var_19 = 191500188;
    #pragma endscop
}
