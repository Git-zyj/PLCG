/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = ((-(!var_2)));
        var_11 += (268435455 == 32745);
    }
    var_12 = (((((((var_3 ? var_4 : var_8)) != 2612034225689001425)))));
    var_13 = (((((((var_2 ? -31661 : var_8))) ? (!var_8) : 1755753172))) ? ((~((var_1 ? var_4 : var_7)))) : var_6);
    var_14 += (-(!var_4));
    var_15 = var_9;
    #pragma endscop
}
