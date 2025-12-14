/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (min(((~(7353808382848439119 && var_0))), (min((~-120), (21 || 216)))));
        arr_3 [3] = 14;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = ((((((arr_4 [i_1]) ? (arr_4 [i_1]) : var_2))) ? ((-(arr_4 [i_1]))) : 214));
        arr_7 [i_1] = ((((((arr_5 [i_1] [i_1]) + var_14))) ? (((221 ? (-2147483647 - 1) : 251))) : (((arr_0 [7] [i_1]) + -124))));
        var_15 = 0;
    }
    var_16 = (min(-912967884, 0));
    var_17 = var_10;
    #pragma endscop
}
