/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = 0;
        var_12 = (min(((((2147483647 > (arr_1 [i_0] [i_0]))) ? (arr_0 [7]) : ((-656877367 ? 12466 : 15825)))), (!11675)));
        var_13 = (min((((31363 ? ((255 ? (arr_1 [i_0] [i_0]) : 31363)) : -340509894))), (max(2995068812, 170))));
        var_14 += ((102 ? (min(0, -1851451573)) : ((min(656877356, 101)))));
    }

    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_15 = (max(var_15, ((((((arr_4 [i_1] [20]) >= (34172 ^ 187))) ? ((-(var_1 % var_9))) : (arr_3 [i_1 + 1]))))));
        var_16 |= ((~((+((1716573327 ? (-2147483647 - 1) : var_1))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_17 = 17395967445590771135;
        var_18 += (((arr_0 [i_2 + 1]) <= 53074));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_9 [i_3] = (min((((12461 << (((arr_7 [i_3]) - 1031229086))))), -17395967445590771135));
        arr_10 [i_3] |= (min(12461, (min((18743 - -734096205), ((min(var_4, 72)))))));
    }
    #pragma endscop
}
