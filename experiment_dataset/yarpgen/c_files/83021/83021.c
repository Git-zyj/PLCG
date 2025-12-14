/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = (min(var_10, ((min((arr_1 [10] [10]), (~var_0))))));
        arr_3 [i_0] = (((arr_2 [i_0]) && ((min((-32767 - 1), 133169152)))));
    }
    var_11 = 130023424;
    var_12 = -var_9;
    #pragma endscop
}
