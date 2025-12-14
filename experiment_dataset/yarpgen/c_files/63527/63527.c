/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_10 &= (min((~-50), (((!(arr_0 [10]))))));
        var_11 = ((min(2076106590, 2218860679)));
    }
    var_12 = var_0;
    var_13 = var_7;
    var_14 = var_1;
    #pragma endscop
}
