/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_17 += var_2;
        var_18 = (max(var_18, ((((arr_0 [6] [i_0]) * (arr_1 [i_0 - 1] [i_0 + 2]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = (((((43693 ? (arr_1 [i_0] [i_0]) : var_15))) ? 161 : (var_5 + 0)));
                    var_20 |= var_15;
                }
            }
        }
        var_21 = (((!0) || (arr_0 [i_0 + 2] [i_0 + 2])));
        var_22 = var_10;
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_23 |= (max(((max(var_3, ((1 % (arr_10 [i_3])))))), (((arr_9 [i_3]) | var_11))));
        arr_11 [i_3] = (((arr_9 [i_3]) ? var_11 : (((((1 ? (arr_10 [i_3]) : (arr_8 [i_3]))) <= 1)))));
        arr_12 [i_3] = (arr_8 [i_3]);
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_24 = max(((1 * (arr_9 [i_4]))), ((var_1 ? 1 : (arr_9 [i_4]))));
        arr_17 [i_4] = (arr_7 [8]);
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_25 = ((min(1, (arr_21 [i_5] [i_5]))));
        arr_22 [i_5] [i_5] = ((((min(((max(var_6, 1))), ((-(arr_14 [4])))))) ? ((((arr_21 [i_5] [i_5]) >= var_7))) : 1));
    }

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_26 = (min(((max(1, (var_6 && var_13)))), (((1 * 1) + -1))));
        var_27 += (arr_18 [i_6]);
        var_28 = (var_15 ? var_2 : (max((max(var_4, var_8)), ((var_3 ? (arr_23 [i_6] [i_6]) : 1)))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        var_29 = (((arr_28 [i_7]) <= 1));
        var_30 = 1;
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_31 += (1 * 1);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 24;i_10 += 1)
            {
                {
                    var_32 = (max(var_32, ((((((((1 ? 1 : 1))) ? (((!(arr_31 [i_9] [i_8])))) : 1)) > (arr_31 [i_8] [i_9]))))));
                    var_33 += (max((max(1, 1)), ((1 <= (arr_36 [i_9] [i_10 + 1] [i_10 - 1])))));
                    var_34 += (arr_35 [i_10 - 1] [i_10 - 1] [12]);
                }
            }
        }
        var_35 = 0;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        var_36 = 0;
        var_37 = var_8;
    }
    #pragma endscop
}
