/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!-var_7);
        arr_3 [9] = var_7;
    }
    #pragma endscop
}
