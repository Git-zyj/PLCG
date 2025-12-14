/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((((arr_1 [i_0] [i_0]) ? 112644991 : (((min(var_1, (arr_1 [i_0] [i_0]))))))));
        arr_3 [i_0] [i_0] = -24;
    }
    #pragma endscop
}
