/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = 10245971321979627833;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_17 = ((~((7 ? ((55623 ? var_2 : 248)) : 30))));
        arr_3 [i_0] = var_8;
    }
    var_18 = var_3;
    #pragma endscop
}
