/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 118;
        var_16 = (((((~(arr_0 [i_0])))) ? (min((((-118 + 2147483647) << (((-71 + 75) - 4)))), ((min(127, 89))))) : var_5));
    }
    #pragma endscop
}
