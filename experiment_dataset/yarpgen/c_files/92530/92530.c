/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_1;
    var_14 = var_12;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((!(arr_2 [i_0])));
        var_15 &= ((arr_1 [18] [i_0]) ? ((((-9223372036854775807 - 1) ? 2147483636 : 1048575))) : ((var_12 ? var_1 : (arr_1 [9] [i_0]))));
    }
    #pragma endscop
}
