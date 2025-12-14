/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (min(64, 1538375602796223519));
        var_12 = min((max((arr_1 [i_0] [i_0]), (-9223372036854775807 - 1))), (arr_1 [i_0 - 1] [i_0]));
    }
    var_13 = ((var_1 ? (var_4 != var_4) : -65));
    #pragma endscop
}
