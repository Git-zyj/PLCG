/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = ((-7886 ? (max(((var_5 ? 7886 : 7885)), var_1)) : (!var_7)));
        arr_2 [i_0] = (max((((-(!3463893872)))), ((-(max(var_2, 504403158265495552))))));
        var_14 = (min(var_1, ((+(((-127 - 1) ? var_8 : 831073436))))));
    }
    var_15 = ((var_10 ? -7886 : (~var_12)));
    var_16 = (min(((max(17928811219738315048, 24))), (~123)));
    #pragma endscop
}
