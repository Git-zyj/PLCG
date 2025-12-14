/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (((((1 ? 45444 : 20091))) ? (-32767 - 1) : (min(-23, (60 | 12919853496752518852)))));
        var_19 = var_0;
    }
    var_20 = (max((((((12404779764667700290 ? 28136 : 0)) & var_4))), (var_14 ^ var_10)));
    #pragma endscop
}
