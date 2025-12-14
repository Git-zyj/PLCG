/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-(((((1 ? var_7 : var_11))) ? var_11 : -4064))));
        arr_4 [i_0] = -1956284552;
    }
    var_13 = (max(var_13, (((((((~4064) / 83))) & ((~((15096 ? 58720256 : var_9)))))))));
    #pragma endscop
}
