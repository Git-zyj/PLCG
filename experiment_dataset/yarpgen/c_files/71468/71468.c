/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 += var_4;
    var_13 = 9734623077077544434;

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 = (((var_7 / 9734623077077544426) ? (var_7 * 90) : ((8712120996632007194 ? var_9 : var_5))));
        arr_3 [i_0] [i_0] = 4339;
        arr_4 [i_0] [i_0] = 1422214795930641898;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_15 = (((((2879586757 * 69) ? -1 : ((var_9 ? 8712120996632007194 : 240))))) ? (1757348691 || var_7) : (((((var_3 ? 1588733061 : 10228198776728169811))) ? (var_5 * var_1) : (((-1 ? 1 : var_0))))));
        var_16 = 1152640029630136320;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] = 16202;
        var_17 = ((((2879586761 ? var_5 : 5666697304398262008)) << (354121932 - 354121921)));
        arr_12 [i_2] &= (((((var_8 ? var_10 : 186))) ? (-4440859752452219536 && var_1) : ((var_6 ? 6455794562796606178 : var_4))));
        var_18 = (((((var_10 ? var_0 : var_10))) ? ((var_9 ? var_2 : 21)) : ((var_9 ? 90 : var_2))));
    }
    #pragma endscop
}
