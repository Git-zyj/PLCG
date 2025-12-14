/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_0);
    var_14 |= ((((((~var_2) / var_10))) ? var_11 : (((((var_3 ? var_10 : var_7))) ? 1 : ((var_6 ? -6994764682445604516 : var_7))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = (((6994764682445604516 >> 1) | (min(((var_11 ? 6994764682445604532 : -6994764682445604516)), var_12))));
        var_16 -= (((arr_3 [1]) == (((~var_10) * (((-1420609541 <= (arr_2 [20]))))))));
        var_17 = var_4;
        var_18 = var_0;
        arr_4 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_19 = (1 + 6994764682445604509);
        var_20 = (min(var_20, ((min((((arr_0 [i_1 - 1] [i_1 - 1]) ? (arr_0 [i_1 - 1] [i_1 - 1]) : (arr_0 [i_1 - 1] [i_1 - 1]))), (31269 ^ 1))))));
    }
    var_21 ^= (17125678091139892612 ? (min((~var_6), var_1)) : var_0);
    #pragma endscop
}
