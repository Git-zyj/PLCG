/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = var_14;
        var_19 = (!var_11);
    }
    var_20 = var_2;

    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_21 -= (max((arr_3 [i_1] [i_2]), ((min((arr_5 [i_1] [6]), (arr_5 [i_1] [i_2]))))));
            var_22 = ((min((arr_8 [6] [i_2]), (((arr_2 [i_1] [i_1]) & var_2)))));
            var_23 *= 0;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_24 = ((-(arr_2 [i_1] [i_3])));
            var_25 = (max(var_25, var_8));
            arr_13 [i_1] [i_3] [i_1] = (((((arr_10 [i_1] [i_1] [i_1]) ? var_5 : (arr_7 [i_1]))) - (((var_12 + (arr_9 [i_3]))))));
        }
        var_26 = (min((min((arr_7 [i_1]), 2422)), -332787568));

        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            arr_17 [i_1] [i_4 - 1] [i_4] = (((arr_8 [1] [1]) ? ((((!(arr_14 [i_1]))))) : 61));
            var_27 = (arr_5 [i_4 - 1] [i_4 + 1]);
        }
        for (int i_5 = 3; i_5 < 13;i_5 += 1)
        {
            var_28 = (arr_10 [i_1] [i_5] [i_5 + 2]);
            var_29 -= ((((min(65535, 0))) ? ((min(64, (min(var_10, (arr_3 [i_1] [i_1])))))) : 65520));
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
    {
        var_30 = ((+((0 ? (arr_21 [i_6]) : var_2))));
        var_31 *= (arr_15 [i_6] [i_6] [i_6]);
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
    {
        arr_25 [i_7] = (((var_18 >> 3) ? ((((max((arr_16 [i_7] [i_7] [i_7]), (arr_18 [i_7])))) << (((var_5 - 11) - 54)))) : (((!97) ? (arr_20 [6] [i_7]) : (((arr_9 [i_7]) ? 114 : (arr_19 [i_7] [i_7])))))));
        arr_26 [i_7] = (+-8);
        var_32 -= (arr_18 [i_7]);
        var_33 = (((arr_15 [i_7] [i_7] [i_7]) ? ((((!(arr_1 [i_7] [i_7]))) ? ((65535 ? var_16 : 65520)) : ((1 ? 1 : (arr_6 [i_7]))))) : -1));
        var_34 = (((arr_10 [i_7] [i_7] [i_7]) < var_17));
    }
    var_35 = var_6;
    #pragma endscop
}
