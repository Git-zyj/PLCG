/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] [i_0] = (max(-134941149, 134941154));
    }
    var_14 = (min(var_12, var_13));
    #pragma endscop
}
