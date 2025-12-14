/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (((((var_3 ? var_2 : -713652284))) != var_5));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] = var_11;
                                var_13 = (((var_11 > var_3) < var_2));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_14 = (max(var_14, var_4));
                        arr_16 [i_0] [i_0] [i_2] [i_5 - 1] = (var_0 & var_6);
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_15 = (var_2 ? (((var_7 ? 4095 : var_11))) : ((var_1 ? 3291706824490178817 : var_1)));
                            var_16 -= (17 ^ 15155037249219372799);
                            arr_22 [i_0] [i_1] |= var_1;
                        }

                        for (int i_8 = 3; i_8 < 19;i_8 += 1)
                        {
                            arr_26 [5] [i_1] [i_0] [i_1] = (15155037249219372774 + 4294967295);
                            var_17 = (min(var_17, -58));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_18 |= (178 ? 2305883202254850237 : -588099758);
                            arr_29 [i_0] [i_0] [10] [i_0] [i_1] [8] &= 18446744073709551593;
                            var_19 -= var_0;
                        }
                        arr_30 [i_0] [i_6] = ((((288230376151711740 << (15123873167436377110 - 15123873167436377060))) > -588099736));
                        arr_31 [i_0] = ((0 ? ((var_11 ? var_9 : var_6)) : var_9));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_20 &= var_0;
                        var_21 &= ((var_7 ? ((34 ? 3291706824490178841 : -20489)) : (((var_6 ? var_1 : var_10)))));
                        var_22 = 1;
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        arr_36 [i_0] [i_0] [i_2] [i_11] [i_11] [i_11] = ((((var_0 ? var_7 : 15155037249219372799)) + (66 / var_8)));
                        var_23 = (min(var_23, var_9));
                        var_24 = (((var_11 % var_5) ? 14851 : var_0));
                    }
                    var_25 = (((var_8 == var_3) ? ((var_5 ? 1048568 : 15155037249219372791)) : (((var_10 ? var_1 : 1)))));
                }
                for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    arr_41 [i_0] = (((((var_0 ? ((3322870906273174506 ? var_3 : var_4)) : 125))) ? (3322870906273174506 * var_11) : var_5));
                    arr_42 [i_0] [i_0] [i_12] = var_0;
                    var_26 = var_6;
                    var_27 -= (((((max(var_10, var_8)))) ? 77 : var_10));
                    arr_43 [i_0] [i_1] &= ((var_10 != ((153 >> (16080080872841711142 - 16080080872841711113)))));
                }
            }
        }
    }

    for (int i_13 = 0; i_13 < 16;i_13 += 1)
    {
        var_28 = (max(var_28, 0));
        var_29 = (max(var_29, 102));
    }
    #pragma endscop
}
