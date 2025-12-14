/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_14 >> (12570812678229703723 - 12570812678229703699));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_21 = (min(var_21, ((((arr_2 [i_0 - 2]) + (var_16 && var_1))))));
        arr_4 [i_0 + 1] = (max(-13259, 687357063));
    }
    #pragma endscop
}
