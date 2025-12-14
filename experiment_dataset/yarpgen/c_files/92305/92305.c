/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((arr_0 [i_0] [i_0]) ? 19698 : (arr_1 [i_0])))) ? ((-23172 ? (arr_1 [i_0]) : (~4))) : ((((((arr_0 [i_0] [i_0]) ? 19698 : 19702))) ? (max((arr_1 [i_0]), var_17)) : (((~(arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] = -2897520755102511570;
        var_19 = (((((var_11 ? ((var_2 ? var_4 : (arr_0 [i_0] [i_0]))) : (var_13 || 304987807)))) ? 19698 : (arr_1 [i_0])));
        var_20 = ((!((!(arr_1 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_21 = ((!(!var_8)));
            var_22 = (min(var_22, (((var_15 ? ((var_13 ? var_16 : 16134)) : (((arr_1 [i_2]) ? (arr_6 [i_1] [i_1] [i_1]) : var_15)))))));
            arr_8 [i_1] [2] [i_2] = (((4554334381431920659 || -2041691607288545753) ? 4554334381431920667 : ((304987797 + (arr_1 [12])))));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_23 |= ((-(arr_4 [i_1])));
                    arr_15 [i_1] [i_4] [i_4] |= (((arr_4 [i_3]) ? var_17 : (arr_14 [i_1] [i_3] [i_4] [i_1])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_24 = (!0);
        var_25 = (((var_10 ^ 2147483647) > 461554768));
    }

    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    var_26 = ((((((((-1 ? 140911058 : (arr_23 [i_6] [i_6] [i_6] [i_6])))) | ((3730789236344110313 ? 4554334381431920665 : -908565120))))) ? (((~var_14) ? var_7 : ((var_12 ? var_6 : (arr_18 [i_7]))))) : (arr_23 [i_6] [i_7] [i_8] [23])));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_27 = (min(var_27, (arr_20 [i_6] [i_10] [i_6])));
                                var_28 = ((!((((((var_0 ? var_8 : (arr_19 [i_6])))) ? (1285497984 && var_16) : 81787554)))));
                            }
                        }
                    }
                    var_29 = (max((((arr_27 [i_6] [i_7] [i_7] [i_7] [i_7] [i_8]) ? (arr_27 [i_6] [i_7] [i_8] [i_6] [i_8] [i_7]) : 2147483647)), 2015152772));
                    var_30 = (min(var_30, var_2));
                    var_31 = -1;
                }
            }
        }
        var_32 = (arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);

        /* vectorizable */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            arr_31 [i_6] = ((-(56968 >= 127)));
            arr_32 [i_6] = ((~(arr_30 [i_6])));

            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                var_33 = var_3;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            var_34 = (var_5 ^ (arr_24 [i_6] [i_11] [i_11] [i_12] [i_13] [i_6]));
                            arr_44 [i_6] [i_6] [i_6] [i_6] [10] = ((!((((arr_27 [i_14] [22] [i_12] [i_11] [i_11] [i_6]) ? (arr_43 [i_6] [8]) : -461554783)))));
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
            {
                var_35 = (arr_36 [i_6] [i_6] [i_11] [i_11] [i_15]);
                var_36 = (min(var_36, ((((((0 - (arr_43 [i_15] [i_11])))) ? ((19692 ? var_8 : -2658034265205965748)) : (arr_36 [i_6] [i_6] [i_6] [i_6] [i_6]))))));
                var_37 = (min(var_37, ((!(arr_35 [i_6] [4] [i_6])))));
                var_38 = (((arr_24 [i_6] [i_6] [i_11] [i_11] [i_15] [i_6]) ? var_17 : 1));
            }
            for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
            {
                arr_51 [i_6] [i_11] [i_16] = (var_10 & 461554752);
                arr_52 [i_6] [i_16] [i_11] [i_6] = 13657;
                arr_53 [i_6] = (arr_26 [i_6] [i_11] [i_16] [i_11] [i_11] [i_11] [i_6]);
                var_39 = (max(var_39, (((3368312048 ? (arr_34 [i_16] [i_11] [i_16]) : (arr_34 [i_11] [i_11] [i_11]))))));
                var_40 = ((-(((arr_39 [i_6]) ? (arr_33 [i_6]) : 2097120))));
            }
            for (int i_17 = 1; i_17 < 23;i_17 += 1)
            {
                arr_56 [i_6] [i_6] [i_6] [i_6] = var_7;
                var_41 = var_17;
            }
            arr_57 [i_6] [i_11] [i_6] = 120;
            var_42 = (arr_22 [i_6] [0] [2]);
        }
        var_43 = -2220778840571874135;
    }
    #pragma endscop
}
