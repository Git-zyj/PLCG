/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -8271085347253362052;
    var_14 = (max(var_11, (~var_6)));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = max((((((min((arr_0 [i_0 - 1] [i_0 - 2]), (arr_2 [i_0])))) ? (!63) : (!706)))), ((+(((arr_2 [i_0]) ? 4253 : (-9223372036854775807 - 1))))));
        arr_4 [i_0] [i_0] = (((9223372036854775807 ? ((arr_0 [i_0 + 2] [i_0 - 2]) : ((var_9 ? (arr_0 [i_0] [i_0]) : 4468415255281664))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_15 *= (!65472);
        arr_9 [i_1] = ((9223372036854775807 ? ((96 * (arr_6 [i_1]))) : (arr_6 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_16 = ((var_7 == (((arr_1 [i_2] [i_2]) / -1))));
        arr_12 [i_2] = (((arr_6 [i_2 + 1]) ? (87 ^ var_9) : (arr_6 [i_2 - 1])));
    }
    #pragma endscop
}
