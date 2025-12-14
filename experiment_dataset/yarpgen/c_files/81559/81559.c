/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = 0;
        arr_2 [i_0] = (((~94175184) >= 15702));
    }
    var_16 += var_7;
    #pragma endscop
}
