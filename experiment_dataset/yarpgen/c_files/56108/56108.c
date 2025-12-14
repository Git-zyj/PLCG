/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (max((-44 / 18446744073709551615), (11602009266368884796 - 59)));
    var_12 = ((!(((max(-63, -11))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_13 = 17;
        var_14 -= (-120 | -18);
        var_15 = (((956238115101363027 & 29) <= 23));
        var_16 = (min(var_16, (-1 ^ 2)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_17 ^= 956238115101363027;
        var_18 &= (2072851289835267351 && 2144186233067010602);
        arr_6 [i_1] = -11;
        var_19 = (min(var_19, 4980254096243850106));
        var_20 = 60;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_9 [i_2] = -85;
        var_21 ^= ((-(-29 / 10)));
    }
    #pragma endscop
}
