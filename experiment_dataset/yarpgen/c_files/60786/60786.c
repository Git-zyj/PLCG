/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((((((min(-220589074, 0))) ^ var_6))) ? var_3 : var_10));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 -= 9222809086901354496;
        arr_2 [i_0] [i_0] = (~(arr_0 [i_0]));
    }
    var_17 = (62368 % 1);
    #pragma endscop
}
