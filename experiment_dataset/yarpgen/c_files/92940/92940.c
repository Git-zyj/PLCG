/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (max(var_12, (arr_0 [6] [i_0])));
        var_13 = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = var_4;
    }
    var_14 += (min(((1 - (var_8 - var_0))), (((242 + var_6) + 867506278479618333))));
    var_15 = ((var_6 ? (max(var_2, (max(0, 2097148)))) : -45095));
    #pragma endscop
}
