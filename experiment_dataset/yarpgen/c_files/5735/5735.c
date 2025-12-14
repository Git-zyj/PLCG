/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (((max((arr_1 [i_0] [i_0]), (var_4 << var_13))) + ((((((min(140, (arr_2 [i_0] [i_0])))) && var_13))))));
        arr_3 [21] [21] = ((-125 ? 110 : 122880));
    }
    var_16 -= var_2;
    var_17 = (min(var_17, var_3));
    #pragma endscop
}
