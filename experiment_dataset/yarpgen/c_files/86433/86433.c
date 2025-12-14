/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = (((2147483647 * -190) < var_1));
        arr_4 [8] [i_0] = var_7;
        arr_5 [6] = (!108);
    }
    var_18 = var_1;
    #pragma endscop
}
