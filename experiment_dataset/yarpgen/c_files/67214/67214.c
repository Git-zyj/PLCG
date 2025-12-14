/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [1] = -26;
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = 1145967335;
    }
    var_17 = var_10;
    #pragma endscop
}
