/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = 19687;
        var_21 = (arr_1 [i_0]);
        arr_2 [18] [i_0] |= (((arr_0 [i_0]) >= (((arr_0 [i_0]) ? ((min(19687, var_10))) : ((45849 ? 19687 : var_10))))));
    }

    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_22 ^= -2147483626;
        var_23 = (~23534);
    }
    #pragma endscop
}
