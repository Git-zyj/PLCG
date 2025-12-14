/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((0 ? var_5 : var_8))));
    var_20 = (max(var_20, (-9 + 8)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_21 = (var_12 ? var_9 : var_14);
        arr_3 [i_0] = (((!-9) ? ((((!(-127 - 1))))) : var_16));
        var_22 = (max(var_22, var_0));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_23 = ((~((2653247730 | (arr_0 [i_1] [i_1])))));
        var_24 = var_14;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] = ((-((((arr_5 [24]) < 14380733329688974163)))));
                    var_25 = (min(var_25, var_0));
                    var_26 = (((((((arr_2 [i_1]) <= (arr_6 [i_1]))) ? var_14 : ((max(var_13, 2))))) * var_14));
                    var_27 = (((var_17 >= 1) != (((arr_4 [i_2 - 1] [i_2 - 2]) ? 3455576697 : 1017570127))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    {
                        var_28 = (max(var_28, var_14));
                        var_29 = -839390599;
                        var_30 -= var_0;
                    }
                }
            }
        }
        arr_19 [i_1] = (min((min(((-126 ? var_16 : var_1)), (var_14 || 3912785810182476007))), 29));
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 23;i_9 += 1)
            {
                {
                    var_31 = (min(((((arr_1 [i_8] [i_8]) ? var_3 : -17))), (((-17 - var_14) * ((31924 ? var_4 : var_12))))));
                    arr_28 [i_7] [i_7] [i_7] [i_7] = ((var_16 != (arr_0 [i_9 - 2] [i_8])));
                }
            }
        }
        var_32 = (3455576702 + 31924);
    }
    for (int i_10 = 2; i_10 < 9;i_10 += 1)
    {
        var_33 = (max(var_33, (((var_13 / (arr_24 [i_10] [i_10] [i_10 + 1]))))));
        var_34 = (!48);
        var_35 = ((-(((17 == -26512) ? ((-31944 / (arr_10 [i_10] [i_10]))) : (var_7 && var_4)))));
        var_36 = ((((((((-1578245389795443320 > (arr_22 [i_10 - 2] [i_10 - 2])))) / ((164 ? 96 : 1))))) ? ((-(!0))) : ((((arr_14 [i_10]) >= (arr_14 [i_10]))))));
    }
    #pragma endscop
}
