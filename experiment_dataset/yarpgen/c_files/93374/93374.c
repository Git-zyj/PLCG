/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 1] = (min(((var_4 ? ((17523466567680 ? 1 : var_15)) : (((114 ? 1 : var_6))))), ((((~13825) ? var_13 : (var_7 == var_1))))));
        var_20 = (((!1634) ? 1 : (var_8 > -6135)));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_14 [i_3 - 1] [9] [i_1] = min((((var_16 > var_15) << ((((max(var_1, var_2))) - 14820)))), 0);
                        var_21 = (max(var_21, ((((((var_5 ? ((141 ? var_8 : var_12)) : ((var_10 ? 64 : var_1))))) ? var_11 : (max(var_16, ((61 ? var_10 : 59)))))))));
                        arr_15 [i_1] [i_1 - 1] [i_1] [13] = (((min((65522 - 255), ((19 ? 65523 : 24)))) * var_2));
                        var_22 = (((0 || (var_2 - var_10))));
                    }
                }
            }
            arr_16 [i_1] = ((((((max(var_4, 2022002872))) && var_2)) ? ((var_1 ? ((65523 ? -19 : 65517)) : ((var_19 ? var_12 : var_10)))) : ((var_0 ? (var_2 || var_12) : 61))));
        }
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
    {
        var_23 = (min(var_23, ((var_16 ? (((1 >> ((var_11 >> (var_1 - 169)))))) : (max((((var_14 ? var_4 : 240))), ((var_19 ? var_0 : var_17))))))));
        arr_19 [0] [i_4] = var_18;
        arr_20 [i_4 - 1] [1] = ((((max((max(65535, var_5)), (((!(-127 - 1))))))) << ((((((1 ? var_14 : var_5))) || var_16)))));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        arr_25 [i_5] = (253 / var_19);
        var_24 = ((var_19 ? var_9 : var_5));
    }

    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        var_25 -= (((((85 ? ((max(var_14, 111))) : ((var_14 ? var_17 : var_2))))) ? ((((40778 >= var_3) ? var_5 : ((var_5 ? var_9 : var_9))))) : var_0));
        var_26 = (max(var_26, var_18));
        arr_29 [2] [i_6] = ((((((((var_9 ? 240 : 2272964424))) ? (var_18 & var_5) : ((min(var_14, var_16)))))) ? (((var_14 >> var_3) >> ((((var_6 ? 244 : 2022002858)) - 242)))) : ((((var_1 != 0) && ((max(var_7, var_2))))))));
        var_27 = ((~(1 / 10374)));
        var_28 -= var_8;
    }
    var_29 = var_15;
    var_30 = ((var_4 ? ((((((-127 - 1) ? 114 : -15701))) ? (((min(248, -86)))) : (max(var_19, var_8)))) : (((((var_9 ? var_8 : 0))) ? ((var_19 ? var_19 : var_17)) : (var_1 || var_5)))));
    #pragma endscop
}
