/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_19 = ((var_2 ? (((!(((2205990042 ? 12001580718930167328 : 6445163354779384267)))))) : ((var_2 ? var_9 : var_6))));
        arr_2 [i_0 - 2] = (var_5 - var_3);
        var_20 = ((var_8 ? var_9 : ((-(var_1 || var_5)))));
    }
    var_21 = var_18;
    #pragma endscop
}
