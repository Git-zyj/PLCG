/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_7;
    var_13 = (max(var_7, (!17758)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = 1;
        var_15 = (min((arr_1 [i_0]), ((((~(arr_1 [i_0]))) << ((((~(arr_0 [1] [i_0]))) - 976862272))))));
    }
    var_16 = 47778;
    #pragma endscop
}
