/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((-(arr_6 [i_0 + 1] [4] [8])))));
                            arr_14 [i_1] [i_1] [i_2] = (arr_2 [i_4]);
                            arr_15 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 - 1] = 1;
                        }
                    }
                }
            }

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_20 [i_1 + 1] [i_1] [i_1 + 1] [i_0] [i_1] [i_0] = 3412778499;
                    var_17 = (min(var_17, ((((((3412778515 ? 3412778515 : (arr_5 [i_6] [0] [i_1 + 2])))) ? (arr_19 [i_1 + 2] [i_6] [1] [i_6]) : 18446744073709551615)))));
                    var_18 -= (((((~(arr_19 [i_0 + 1] [i_1] [1] [i_0 + 1])))) == (arr_11 [i_0 - 1] [i_0 - 1] [i_5] [i_6] [i_1])));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    var_19 = (max(var_19, (((3412778480 / (1 << var_0))))));
                    arr_23 [i_1] [1] [i_1] [i_1] = var_7;
                    var_20 = (max(var_20, (((9223372036854775807 ? (arr_5 [i_0] [i_1 - 1] [i_5]) : (arr_1 [i_0]))))));
                    var_21 = (((93 ? var_10 : var_15)));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [i_5] [i_1] = var_0;
                    var_22 = (max(var_22, var_4));
                    var_23 = (max(var_23, (((~(arr_11 [i_1] [i_1] [i_1 + 2] [i_1] [i_1 + 1]))))));
                    var_24 = (((arr_17 [i_0 - 1] [i_8]) ? 64493 : (arr_2 [i_0 + 1])));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    var_25 = (min(var_25, var_13));
                    arr_30 [i_1] [i_5] [i_1] [i_1] = (((arr_6 [i_1 - 1] [i_1] [0]) ? (arr_6 [i_1 + 1] [i_1] [i_1]) : 16383));
                    var_26 = (min(var_26, 2335058278341820406));
                    arr_31 [i_0] [i_1] [i_1] [i_1] [i_5] [i_9] = ((arr_4 [i_1 - 1]) & (arr_6 [i_0 + 2] [i_1] [i_0]));
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_27 = (arr_32 [i_1] [i_0] [i_1 - 1] [i_5] [i_1] [i_11 - 1]);
                            var_28 = ((((16730581328076659492 ? 1 : 1))) <= var_15);
                        }
                    }
                }
                arr_36 [i_1] = ((-(arr_33 [i_1])));
            }
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                var_29 = ((var_3 ? (arr_12 [11] [11] [11] [i_0 + 2] [i_1 - 1]) : var_14));
                var_30 = (min(var_30, (var_0 ^ 882188763)));
                var_31 ^= (((((-(arr_9 [i_0 + 2] [i_0 - 1] [10] [i_1] [i_12])))) ? ((var_10 + (arr_37 [1] [i_1] [i_12]))) : (arr_3 [i_0 + 2] [i_1] [13])));
            }
            for (int i_13 = 2; i_13 < 18;i_13 += 1)
            {
                arr_44 [i_0] [i_1] = var_4;
                arr_45 [i_1] = 60;
                arr_46 [i_0] [i_1] [i_13 + 2] = (-25 - var_12);
            }
            var_32 = (max(var_32, (arr_34 [i_0] [i_0] [i_1] [i_1 + 1])));
            var_33 = (~var_0);
        }
        for (int i_14 = 3; i_14 < 18;i_14 += 1)
        {
            var_34 *= 882188776;
            var_35 = 4722036531371686824;
            var_36 |= ((var_12 ? 1 : 23921));
            var_37 = (max(var_37, ((-1 / (arr_28 [i_0 + 1] [i_14 + 1] [0] [i_0 + 1] [i_14 - 1])))));
        }
        for (int i_15 = 3; i_15 < 19;i_15 += 1)
        {
            var_38 = (!var_12);
            var_39 = -7917254104730867126;
            arr_53 [i_15] [i_15] = var_11;
            var_40 = (max(var_40, ((-(arr_48 [7])))));
        }
        arr_54 [i_0] &= (((arr_4 [i_0 + 1]) ? (arr_25 [i_0] [i_0] [i_0] [i_0]) : ((var_2 ? 14441746378053665257 : 1))));
    }
    for (int i_16 = 1; i_16 < 20;i_16 += 1)
    {
        /* LoopNest 3 */
        for (int i_17 = 3; i_17 < 18;i_17 += 1)
        {
            for (int i_18 = 1; i_18 < 18;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 21;i_19 += 1)
                {
                    {
                        var_41 ^= ((!(((1 * (-9223372036854775807 - 1))))));
                        arr_65 [i_16] [i_16] [i_19] [11] = (((((max(var_2, var_7)))) ? 2105 : (~1)));
                        var_42 = ((((-28894 ? 65535 : 22544)) & (((!(arr_64 [i_18 + 3] [i_16 - 1] [i_16]))))));
                        var_43 = (((arr_63 [i_19] [i_19] [i_19] [14]) ? (((!var_10) ? (((arr_58 [i_17]) ^ var_14)) : var_2)) : var_1));
                    }
                }
            }
        }
        var_44 = (max(var_44, var_5));
        var_45 = ((min(var_9, ((-(arr_55 [i_16 + 1]))))) <= ((((!(!var_6))))));
        var_46 += (~-13411);
    }

    for (int i_20 = 0; i_20 < 18;i_20 += 1)
    {
        var_47 = (min(var_47, (((-((max((max((arr_39 [18] [i_20] [i_20] [i_20]), var_10)), (!var_7)))))))));
        var_48 = ((((((-5020743270458064000 ? (arr_39 [i_20] [i_20] [i_20] [i_20]) : 15)) == (arr_43 [i_20]))) ? (((((min(var_10, (arr_63 [i_20] [i_20] [i_20] [i_20]))) != var_2)))) : ((882188755 ? 13419 : 16795220267398782687))));
    }
    #pragma endscop
}
