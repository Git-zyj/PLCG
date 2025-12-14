/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(var_11, ((var_5 ? -9223372036854775796 : var_11))))) ? var_9 : ((var_17 ? 114 : var_8))));
    var_21 = var_16;
    var_22 = max(10280, 0);

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (0 ? (1435194403 ^ 1) : ((~(arr_2 [i_0]))));
        arr_5 [i_0] [i_0] = -9610970196376402161;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((var_3 & (arr_8 [i_1] [i_1])));
        var_23 = (-34 ? 1 : (arr_7 [i_1] [17]));
    }
    #pragma endscop
}
