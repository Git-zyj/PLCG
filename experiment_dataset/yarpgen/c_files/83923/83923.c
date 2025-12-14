/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_16 = (((3897726381 ^ 254) & var_1));

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_17 = ((((15 | ((397240915 ? 255 : 2)))) & var_3));
                            var_18 = ((((min(var_4, 0)) != ((((65519 && (arr_10 [i_3] [11] [i_3] [i_3] [i_3]))))))));
                            var_19 -= (max((((arr_6 [i_1 - 2]) ? (arr_9 [i_0 - 1] [i_0 - 1]) : var_11)), (!var_13)));
                            var_20 = (arr_0 [i_0]);
                        }
                        var_21 = -21239;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_22 += (arr_5 [i_0 - 3] [i_1 - 2]);
                        var_23 = (((~(arr_12 [i_1 - 2] [i_2] [i_5]))));
                        var_24 = ((((((arr_2 [21] [i_1] [8]) / (arr_3 [1] [1])))) ? (arr_13 [i_0 - 3] [i_0 - 3] [2] [i_0] [i_0 + 1] [i_1 - 2]) : (arr_0 [i_0 - 4])));
                        var_25 = var_11;
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_26 = (arr_4 [i_0 + 1] [i_0 + 1]);
                        var_27 = ((((arr_12 [i_0] [20] [i_6]) + (arr_4 [i_2] [i_2]))));
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_20 [i_8] = (((((-6265360155610375941 ? var_9 : var_13))) || (arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 2])));
                                arr_21 [i_8] [i_1] [i_2] [0] [i_8] = (arr_19 [i_8] [i_1] [i_0 - 2] [i_1] [13]);
                                var_28 = ((~(max(-1562191369, (~9547)))));
                            }
                        }
                    }

                    for (int i_9 = 1; i_9 < 19;i_9 += 1)
                    {
                        var_29 |= (arr_6 [i_2]);
                        var_30 = var_13;
                        var_31 = (((arr_18 [i_0] [14] [i_0] [i_0] [2] [1] [i_0 - 4]) ? (((max(1, var_1)))) : ((((min(397240917, var_1))) ? ((var_7 ? 6265360155610375930 : (arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2]))) : (!var_4)))));
                        var_32 = (((((((var_7 / (arr_13 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1])))) ? ((var_12 / (arr_24 [i_2] [i_2] [i_2] [i_0] [i_2]))) : (((var_5 - (arr_4 [i_9] [i_9])))))) ^ (arr_12 [i_0] [i_0] [i_9])));
                    }
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    var_33 = (arr_7 [i_0 - 4] [i_0] [i_0] [i_1 + 1] [i_1] [i_10]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            {
                                var_34 = (((var_4 | (((var_7 ? 3536304449 : var_13))))));
                                var_35 = 1048575;
                                var_36 = (max(((((var_15 && (arr_18 [i_0 - 3] [i_1] [15] [1] [15] [18] [7]))) ? -9950 : (!var_3))), var_9));
                                arr_32 [i_0] [21] [i_10] = var_14;
                                var_37 = arr_3 [i_0] [i_10];
                            }
                        }
                    }
                    arr_33 [1] [1] [i_0 - 1] = (min((arr_22 [6] [i_1]), ((1 << ((((127 ? var_3 : -21232)) + 1258547835))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 22;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            {
                                var_38 += ((!(min((!var_4), var_9))));
                                var_39 = (((((32704 | -18) == var_10)) ? 1 : ((min(var_4, var_9)))));
                            }
                        }
                    }
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        var_40 = (arr_8 [17] [7] [i_15] [i_15]);
                        var_41 += var_14;
                        var_42 = (min(var_42, ((max((max(((var_15 ? var_10 : var_1)), 16)), var_6)))));
                    }
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        arr_44 [i_0] [i_1] [i_15] = ((-((((arr_11 [i_0] [i_1 - 2] [i_1] [i_15] [i_17]) != (arr_4 [i_15] [i_17]))))));
                        var_43 = ((-(max((arr_3 [i_0] [i_0]), (max(var_14, 1663408243))))));
                        var_44 = var_3;
                    }
                    arr_45 [i_15] [5] = var_6;
                }
                arr_46 [18] [i_0 + 2] = -27709;
                arr_47 [i_1] [i_1] [i_1] = ((((((arr_27 [i_0 + 1] [i_0 - 3]) ? (arr_27 [i_0 + 2] [i_0 - 3]) : (arr_27 [i_0 - 3] [i_0 + 2])))) - ((14459 ? 1048575 : 0))));
            }
        }
    }
    var_45 = (min((max(((var_9 >> (var_4 - 1392983732490748258))), var_1)), var_12));
    var_46 = var_7;
    var_47 -= (44 & var_15);
    #pragma endscop
}
