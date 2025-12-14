/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((1 ? 1 : -2));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = ((~(min((~187), ((max(1, 10320)))))));
                    var_15 = (!65523);
                }
            }
        }
        var_16 = (max(var_16, 41033));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] |= ((5 ? 1 : 1998586805114180225));
        var_17 = arr_7 [i_3] [i_3] [i_3] [i_3];
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_18 = ((((min(127, (arr_3 [i_4] [i_4])))) < 10320));
        var_19 = (min(var_19, (arr_1 [i_4])));
        var_20 = (max((((arr_5 [6]) ? (arr_5 [14]) : (arr_5 [8]))), (((!(arr_5 [8]))))));
        var_21 ^= ((var_5 ? var_4 : var_4));

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_18 [i_5] = var_0;
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        var_22 = (max(var_22, -18));
                        var_23 = (max(var_23, (arr_16 [i_5] [i_6])));
                        arr_25 [i_4] [i_4] [i_7] [i_7] [i_4] = (i_7 % 2 == zero) ? ((((max((arr_10 [i_6 - 2]), (~30))) << (((((((1 * (arr_3 [i_4] [i_5])))) ? (((min((arr_5 [i_7]), var_0)))) : (~var_10))) - 20178))))) : ((((max((arr_10 [i_6 - 2]), (~30))) << (((((((((1 * (arr_3 [i_4] [i_5])))) ? (((min((arr_5 [i_7]), var_0)))) : (~var_10))) - 20178)) - 18446744073709546109)))));
                        arr_26 [i_7] = ((6712 ? ((-(min(1414044897, -10892)))) : -30967));
                        var_24 = ((~(((arr_20 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7]) ? (((1 ? 31400 : 43487))) : (((arr_21 [i_6] [i_6] [i_5] [i_4]) ? 0 : (arr_12 [i_6 - 3])))))));
                    }
                }
            }
            var_25 = (((((44 / var_1) ? (!1436611783) : var_3))) ? var_2 : ((var_3 ? 24487 : ((141 ? 1 : 11)))));
        }
    }

    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        arr_29 [i_8] = ((114 ? (arr_28 [i_8]) : ((max(15434, 152)))));
        var_26 = (min(var_26, (((((((30967 + 64717) ? -30989 : ((max(var_8, -30976)))))) ? ((-var_12 ? ((var_7 ? 65408 : var_2)) : 837)) : ((var_12 & (arr_27 [i_8] [i_8]))))))));
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        arr_33 [i_9] = ((~((1 ? 1436611784 : 8191))));
        var_27 = 31478;
        var_28 = ((var_2 ? 5377130568190928330 : (((-10299 ^ ((max(255, 78))))))));
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        arr_37 [i_10] [i_10] = 113;
        arr_38 [i_10] = (~1);
        var_29 = arr_35 [i_10] [i_10];
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 18;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 19;i_12 += 1)
        {
            {
                arr_44 [i_11] [i_12 - 1] [i_12 + 1] = -117084573;
                var_30 = (((arr_40 [i_12]) ? (arr_43 [i_11] [i_11] [i_11 + 2]) : 1436611791));
            }
        }
    }
    #pragma endscop
}
