/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (max((4221452571716561260 % 1), -var_5));
        var_15 -= (((+(((arr_3 [i_0]) ? var_12 : 1)))));
    }
    #pragma endscop
}
