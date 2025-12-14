/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = ((!(arr_4 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = 33236;
                                var_19 = (min(((!((131 == (arr_7 [i_0] [i_2] [i_2 + 1] [7] [i_4] [i_2]))))), var_13));
                                var_20 -= (min(((((arr_9 [i_1 - 3] [i_1 - 3] [i_2 - 1]) ? 84 : var_15))), ((var_12 & (-127 - 1)))));
                                var_21 = (arr_1 [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_22 = (((var_15 ? var_9 : 4294967295)));
        var_23 -= ((((-(-127 - 1)))) ? 188256999967395970 : 33236);
        var_24 = ((((min((min((arr_11 [i_5] [i_5]), (arr_11 [i_5] [3]))), (arr_12 [i_5])))) ? ((min((arr_12 [i_5]), (arr_11 [i_5] [16])))) : (((((var_12 ? var_14 : 18446744073709551615))) ? (min(var_0, var_16)) : ((((arr_12 [i_5]) ? (arr_12 [i_5]) : var_13)))))));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        var_25 = ((96 ? var_8 : 171));

        for (int i_7 = 3; i_7 < 18;i_7 += 1)
        {
            var_26 = (arr_16 [i_6 - 2] [i_6 - 2]);
            var_27 = (min(var_27, ((((arr_11 [i_6 - 1] [i_7 - 1]) + var_12)))));
        }
        var_28 &= 171;
        var_29 = (max(var_29, (((var_11 && (arr_14 [i_6 - 2]))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {
                    var_30 = (((arr_18 [i_6 + 1] [i_6 + 1] [i_6 + 1]) ? ((6563348542433358249 ? 7972703034421358719 : var_3)) : (((15 ? 0 : 84)))));
                    var_31 = (((arr_19 [1] [i_6 + 1] [i_9]) ^ (arr_19 [i_6] [i_6 + 1] [i_9])));
                    var_32 = (min(var_32, ((((var_2 != 18446744073709551615) ? ((14521888719107556817 ? var_2 : 18446744073709551615)) : (arr_19 [i_6 - 2] [i_8] [i_9]))))));
                    var_33 = ((var_13 ? 14845109780499936160 : (arr_16 [i_6 + 1] [i_6 + 1])));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {

        /* vectorizable */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            var_34 = ((var_4 || (arr_25 [i_11])));
            var_35 = (~7255);
            var_36 = ((((((arr_29 [16] [i_11]) / 142))) ? 14521888719107556817 : ((var_7 ? var_8 : var_10))));

            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                var_37 = var_14;
                var_38 = ((173 ? 1756420089 : ((var_9 ? var_14 : 2))));
            }
            /* LoopNest 3 */
            for (int i_13 = 3; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 23;i_15 += 1)
                    {
                        {
                            var_39 = ((12605 ? 4294967295 : 32305));
                            var_40 = ((((arr_36 [i_10] [i_11] [i_13] [i_14] [i_10]) ? (arr_31 [i_11]) : var_3)));
                            var_41 = (((var_12 * var_11) ? var_2 : (arr_31 [i_15 + 2])));
                            var_42 = (arr_35 [i_13 - 2] [i_15] [i_13 - 2] [i_15 - 1]);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_16 = 2; i_16 < 24;i_16 += 1) /* same iter space */
        {
            var_43 -= ((-7245 ? 2860523721430388619 : 255));
            var_44 = (min(var_44, (((((3953 ? var_3 : (arr_37 [i_10] [i_10] [i_16] [i_16]))) != (arr_26 [i_16 - 1] [i_16 + 1] [i_16 - 1]))))));
        }
        for (int i_17 = 2; i_17 < 24;i_17 += 1) /* same iter space */
        {
            var_45 = (min(var_45, 126976));
            var_46 = (((36907 ? var_16 : var_8)));
            var_47 = 9348099429264838900;
        }
        var_48 = (((((9098644644444712746 ? (arr_26 [i_10] [i_10] [i_10]) : ((var_3 ? var_11 : (arr_38 [i_10])))))) ? (((arr_40 [i_10]) ? var_0 : -1972772684)) : var_13));
    }
    #pragma endscop
}
