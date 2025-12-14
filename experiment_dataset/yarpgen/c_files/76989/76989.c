/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 2668;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (min(var_19, (((2668 ? -23530 : 3711579847898796362)))));
        arr_3 [i_0] = (max((min((arr_0 [i_0]), 60783)), ((-(((arr_0 [i_0]) ? var_8 : var_6))))));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = (var_0 == 60783);
        arr_7 [i_1] = 36011;
    }
    var_20 = var_2;
    #pragma endscop
}
