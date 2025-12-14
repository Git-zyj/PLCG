/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_7 >= var_10);

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_19 |= (min(114, var_9));
        var_20 = (-114 * 45068);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_21 = (min(var_21, ((max(24270, 1408364965)))));
        var_22 = (((!46) % ((var_17 ? var_13 : (arr_3 [i_1])))));
        var_23 *= (max((~210), ((~(arr_4 [i_1])))));
        var_24 = (max((((~8184) ? (((max(87, 46)))) : 46)), (((min(14339, 7166))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_25 = (arr_2 [i_2]);
        var_26 = (max(var_26, ((((arr_3 [i_2]) ? ((7160 ? var_10 : -14339)) : (((57352 ? var_3 : var_9))))))));
    }
    #pragma endscop
}
