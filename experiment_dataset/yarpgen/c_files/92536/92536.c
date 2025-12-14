/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = min(var_4, var_1);
    var_12 = -75;
    var_13 = (min(var_13, -var_3));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = 251348153;
        arr_5 [i_0] [i_0] = ((4043619143 & (min(-1164473450, 3392453926))));
    }
    #pragma endscop
}
