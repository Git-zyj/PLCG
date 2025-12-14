/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1316002942;
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                    {
                        var_15 = ((-6626713766722876525 ? (arr_10 [i_0] [i_1] [i_0]) : var_9));
                        var_16 = (max(var_16, 31));
                        arr_13 [i_2] [i_1] [i_0] = var_11;
                        var_17 &= (((((arr_8 [i_2] [i_1] [i_1] [1]) <= 134209536)) ? (arr_2 [i_3]) : 66));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_18 &= 1;

                        for (int i_5 = 4; i_5 < 9;i_5 += 1) /* same iter space */
                        {
                            var_19 = (arr_18 [i_5 - 3] [i_5 - 4] [i_5] [i_5] [i_5] [i_5]);
                            var_20 = (arr_8 [i_5 - 1] [i_5] [i_5 - 3] [i_5 + 1]);
                            arr_19 [i_0] [i_0] [0] = (((((1316002942 ? 379940051 : 1))) ? var_10 : (arr_12 [i_1] [i_2] [1] [3])));
                        }
                        for (int i_6 = 4; i_6 < 9;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_6 - 2] [i_4] [i_2] [i_1] [i_0] = (arr_21 [i_6 - 2] [i_6 - 3] [i_6 - 3] [i_6 - 2] [i_6] [i_6 - 2] [i_6 - 3]);
                            var_21 = 0;
                            arr_24 [i_6 - 2] [10] [6] [i_0] [i_0] = ((((((arr_14 [i_2]) ? (arr_9 [i_0] [i_0] [1] [1]) : var_10))) / (arr_6 [i_0] [i_1])));
                            arr_25 [i_0] [1] [i_2] [5] [i_4] [i_4] [6] = var_7;
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            arr_30 [i_7] [i_4] [i_2] [1] [i_0] = ((1316002942 == (arr_9 [i_1] [i_2] [i_4] [i_7])));
                            arr_31 [i_0] [8] [i_2] [i_2] [i_4] [i_7] = 6626713766722876528;
                            arr_32 [i_0] = ((890612330 ? (((61 ? -92 : 19))) : (((arr_1 [i_0] [i_0]) ? 0 : var_5))));
                            var_22 |= (var_8 ? (arr_5 [i_0]) : ((var_11 ? (arr_20 [i_0] [1] [i_2] [6]) : var_9)));
                        }
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            var_23 |= var_8;
                            var_24 = (min(var_24, ((((arr_21 [i_8] [i_4] [i_2] [i_2] [i_2] [i_1] [i_0]) <= var_8)))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_42 [9] [7] [5] [i_9] [10] = -2014728455;
                                var_25 = (((((var_10 ? 43 : (arr_15 [i_0])))) <= 6626713766722876532));
                                var_26 = (min(var_26, (!0)));
                            }
                        }
                    }
                }
                for (int i_11 = 3; i_11 < 9;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                    {
                        arr_47 [i_0] [4] [i_1] [i_0] = 3915027244;
                        var_27 = (arr_35 [i_0] [i_1] [i_1] [i_12]);
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                    {
                        var_28 = (arr_20 [i_0] [1] [i_11] [i_13]);
                        arr_50 [i_0] [i_0] [i_0] [9] [i_0] [1] = (1 * 3501852581895157012);
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        arr_55 [i_14] [i_1] [i_1] [i_1] [i_0] = (-(arr_6 [i_11 - 2] [i_11 - 1]));
                        var_29 ^= var_4;
                        arr_56 [i_1] = -22;
                    }
                    var_30 = ((+((var_10 ? (arr_45 [i_11] [i_11 - 1] [i_11 + 2] [i_11] [3] [i_11 - 2]) : var_7))));
                    var_31 = 63;
                }
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 8;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        {
                            var_32 -= 190;
                            var_33 = ((!(0 + var_1)));
                            arr_61 [i_0] [i_1] [i_15] [i_1] [i_16] = (((((var_9 ? 0 : (arr_43 [i_15 + 1] [i_15 + 2] [i_15 + 1])))) || (arr_43 [i_15 + 2] [i_15 - 2] [i_15 + 1])));
                            var_34 = (min(var_34, ((((-10 || var_11) || ((((arr_51 [i_0] [i_0]) ? (max(var_1, (arr_8 [0] [i_15] [i_1] [i_0]))) : (!var_7)))))))));
                        }
                    }
                }
                arr_62 [i_1] [i_1] [9] = (arr_52 [i_0] [2]);
                arr_63 [0] [i_0] [i_1] = var_10;
            }
        }
    }
    #pragma endscop
}
