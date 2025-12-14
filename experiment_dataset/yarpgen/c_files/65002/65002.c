/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0] [20]);
        arr_3 [i_0] = -72022409665839104;
    }
    var_13 = -var_4;
    var_14 = min(var_9, 1);
    #pragma endscop
}
