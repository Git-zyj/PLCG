/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [16] = (min((max(25723, -8)), ((min(1, 28)))));
        var_12 += max((-9223372036854775807 - 1), 1);
    }
    var_13 = (max(var_13, ((max(((max(var_9, (max(var_9, var_9))))), var_4)))));
    var_14 *= (max(var_1, (max(((min(var_3, -13))), (max(-8, var_7))))));
    #pragma endscop
}
