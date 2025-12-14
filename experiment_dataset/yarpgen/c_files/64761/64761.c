/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((((~var_0) + 2147483647)) << (((~var_2) ? var_4 : 1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_14 ^= (~var_4);
        var_15 ^= ((var_3 * (~1)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_4 [1] = ((((-var_3 ? (arr_1 [i_1]) : ((1 << (arr_1 [i_1])))))) ? (((((1 ? 1 : 1))) ? var_10 : (arr_2 [i_1]))) : (((~(1 || var_7)))));
        var_16 *= (var_0 >= var_8);
        var_17 += ((~((min(1, 1)))));
        arr_5 [i_1] = ((18446744073709551615 ? 11 : (max(0, (1 * var_10)))));
        arr_6 [1] [1] = var_12;
    }
    var_18 = (min(var_18, var_0));
    var_19 = var_6;
    #pragma endscop
}
