/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max((5 % var_5), var_8)), var_18));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = ((!(arr_2 [i_0] [i_0])));
        arr_4 [i_0] = ((!(-127 - 1)));
        arr_5 [i_0] [i_0] = (arr_2 [i_0] [i_0]);
    }
    #pragma endscop
}
