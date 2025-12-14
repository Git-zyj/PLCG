/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = (max(var_19, (((((min(var_10, (((38025 ? var_17 : var_11)))))) ? ((((min(-194645487, 1733107274))) ? var_14 : ((var_8 ? var_6 : var_4)))) : ((((((var_2 ? -47 : var_2)) == var_17)))))))));
    var_20 = (min(((((min(98, 11143))) ? var_10 : ((min(var_3, var_11))))), (max(-var_12, var_10))));
    var_21 = (min((((var_6 || ((max(var_6, 0)))))), ((min(var_13, var_10)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_22 = (min(var_22, (((((min((var_4 != var_14), var_16))) ? (((min((!-1457259031), var_6)))) : ((var_5 ? (var_8 != var_16) : ((var_0 ? var_10 : var_8)))))))));
        var_23 -= (((((!var_10) <= ((var_10 ? var_15 : var_6)))) && ((((var_10 != var_16) ? var_7 : (max(var_13, -1457259040)))))));
        var_24 |= max(-6790912418423658340, -1457259065);
        arr_3 [i_0] [i_0] = var_1;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (((~1) ? ((max(((29 ? 26696 : var_7)), var_7))) : (((((var_13 ? var_2 : var_5))) ? var_8 : var_13))));
        var_25 += (max(((max(1, 10507))), (max(var_11, var_4))));
        var_26 = var_4;
        arr_9 [0] &= max((((var_9 > ((var_15 ? 100 : var_2))))), ((var_15 ? ((var_7 ? var_6 : var_14)) : (var_15 == var_1))));
        var_27 += ((+(max((var_7 > 10), (max(var_7, var_9))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_28 = ((-(min(var_9, var_4))));
        arr_13 [i_2] = (((((var_6 ? var_3 : var_16))) ? ((((((max(var_2, var_11))) && var_5)))) : ((-10 ? ((max(var_9, var_1))) : (var_12 - var_14)))));
        var_29 &= ((((((var_0 != var_9) ? ((0 << (var_5 + 96007564))) : var_1))) ? ((((((min(194645504, -194645487))) > ((815117164 ? 1 : 3479850131)))))) : ((((max(var_8, -10))) ? var_13 : ((max(var_9, var_8)))))));
        arr_14 [i_2] = (((((((var_12 ? -4353652769139251020 : var_14)) / (max(4934138538305183027, 4017548688))))) && ((max((((var_6 ? var_7 : var_8))), ((var_15 ? var_10 : var_0)))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_30 = var_1;
        arr_19 [6] [6] &= (var_12 > var_3);
    }
    #pragma endscop
}
