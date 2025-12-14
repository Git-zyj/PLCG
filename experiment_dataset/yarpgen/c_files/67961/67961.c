/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (min(((((!135) && 1337198095))), (var_8 - var_15)));
        arr_5 [i_0] [12] = var_1;
    }
    var_19 = -1337198104;
    var_20 -= 18446744073709551615;
    var_21 = ((var_6 ? var_13 : ((((var_7 ? 31 : var_0)) >> (1337198095 - 1337198064)))));
    #pragma endscop
}
