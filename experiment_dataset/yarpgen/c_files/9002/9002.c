/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = (max((!var_0), (max(((4165732787 ? var_5 : 73)), (~var_0)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (min(var_12, -2781));
        arr_3 [i_0] = ((~((var_5 ? var_5 : var_6))));
    }
    #pragma endscop
}
