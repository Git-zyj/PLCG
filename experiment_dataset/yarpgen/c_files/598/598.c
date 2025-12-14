/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = ((+((var_1 ? (arr_3 [i_0] [i_0]) : var_5))));
        arr_5 [i_0] [7] = var_11;
        var_17 |= (((arr_2 [i_0]) >= 14969231506169077774));
        arr_6 [i_0] = var_9;
        var_18 = ((((((188 & (arr_1 [i_0])))) - 14969231506169077772)));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_19 &= (((arr_7 [10]) ? ((((min((arr_9 [i_1]), 1974257271660598511))) ? -65 : (arr_8 [i_1 + 1]))) : (arr_7 [20])));
        arr_10 [i_1] = 7677719137287267948;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_20 = (((((arr_13 [i_1 + 1] [i_1 + 1] [i_1] [i_3]) ? 53559 : (arr_9 [i_1 - 1]))) + var_3));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_21 [i_5] [i_5] [i_5] [i_5] [i_1] [0] [i_5] = var_11;
                                arr_22 [i_1] [i_1] [i_1] [13] [i_1] [i_1] = (((((210 ? -1796192399 : (arr_17 [i_3] [i_2] [i_3] [i_2] [i_5])))) ? ((((arr_8 [i_1 + 2]) && (((-(arr_15 [16]))))))) : ((-(arr_12 [i_2 + 1] [i_2 + 1] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_21 = 2133662642;
        var_22 ^= (min((arr_15 [i_6 - 1]), (7855324116466747702 >= 46)));
        var_23 = 17023951563191969966;
    }
    for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
    {
        var_24 = (min(var_24, ((((((arr_28 [10]) >= (arr_20 [i_7] [i_7] [4] [i_7] [18]))) ? (var_13 != var_10) : (201 > 192))))));
        var_25 = (max(var_25, (((((!(var_6 && 3))) ? 0 : (~50))))));

        /* vectorizable */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            var_26 = (((!180) * (!1974257271660598489)));
            arr_31 [i_7 + 2] [i_7 + 2] [i_7] = (((41939 * var_12) & 64));
        }
        for (int i_9 = 3; i_9 < 18;i_9 += 1)
        {
            var_27 = (min(var_27, ((((((((!-1802359015) >= var_4)))) & var_14)))));
            arr_35 [i_7] [i_7] [i_9] = 16;
        }

        for (int i_10 = 3; i_10 < 18;i_10 += 1)
        {
            arr_38 [i_7] [i_10] = 45;
            var_28 = ((349845166 ? -3867 : 205));
        }
    }
    var_29 = var_12;
    #pragma endscop
}
