/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (min(var_0, 4071838775));
        arr_4 [i_0] [i_0] = var_4;
    }
    var_18 = var_7;
    var_19 = var_0;
    var_20 = (min(-7410, ((-4071838775 / (var_9 >= 8)))));
    #pragma endscop
}
