/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((127 + var_14) ? (118 - var_1) : var_10))) ? (((var_10 + var_9) - var_8)) : (var_9 - var_9)));
    var_21 = (max(var_21, (((!(((var_1 ^ 451936338) || 18818)))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_22 |= var_10;
        arr_4 [6] &= (((arr_0 [i_0 - 1]) ? 17248920567214078734 : var_11));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1 + 1] = (var_16 - 46734);
        arr_8 [i_1] = ((((arr_0 [i_1 - 1]) ? 20649 : (arr_0 [i_1 + 2]))));
        var_23 -= (-98 / 11288);
        arr_9 [i_1 + 2] = (((31 < 6) % (arr_1 [i_1] [i_1 - 1])));
    }
    var_24 = (-2147483647 - 1);
    #pragma endscop
}
