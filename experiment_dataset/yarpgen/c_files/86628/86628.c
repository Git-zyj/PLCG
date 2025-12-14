/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = 4294967280;
        arr_4 [4] = (arr_0 [i_0]);
        var_19 -= max((((max((arr_2 [i_0]), (arr_2 [8]))))), 535822336);
    }
    var_20 = var_13;
    var_21 = (((((2097151 >> ((((3759144960 ? var_17 : var_3)) - 3649104))))) & ((var_5 | (~535822336)))));
    #pragma endscop
}
