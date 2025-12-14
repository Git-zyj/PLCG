/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((~(var_18 % var_18)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    var_20 = (max(var_20, (((var_0 - (arr_7 [i_0] [i_2 - 2] [i_1 - 2] [i_2]))))));
                    arr_9 [i_0] [i_1 - 1] = (((arr_2 [i_2 + 2] [i_1 + 1]) ? 0 : (arr_5 [i_1] [i_1] [3])));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_21 = (~var_8);
                    var_22 = (max(var_22, (((!((!((!(arr_0 [i_3] [i_0]))))))))));
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    arr_14 [i_0] [11] = (0 == 40);
                    var_23 = (((arr_10 [i_0] [i_1 - 1] [i_4 - 1]) | ((0 ? var_2 : (arr_11 [i_4 - 1] [i_1] [i_0])))));
                    arr_15 [i_0] [i_1] [i_4] [i_4] = ((((((arr_13 [i_4 + 1] [i_1 - 2] [i_0]) + 249))) ? var_10 : var_2));
                    var_24 &= 0;
                    var_25 -= ((!(arr_13 [i_1 - 2] [i_4 + 1] [i_1 - 2])));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_26 = (min(var_26, (((((((arr_8 [i_6 - 1] [8]) ? (arr_8 [i_6 - 1] [i_6]) : 7157306183674865465))) ? 1 : (arr_8 [i_1] [i_0]))))));
                        var_27 = -9;
                        var_28 = ((-(arr_13 [i_5] [i_0] [i_0])));
                        var_29 ^= 1;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                var_30 = (max(var_30, ((((~-1291634337639424558) - (~var_16))))));
                                arr_26 [i_0] [i_0] [4] [i_0] [i_7] = -7621569195465402115;
                                var_31 = var_14;
                            }
                        }
                    }
                    var_32 = (4294967279 ^ 3118630896);
                    var_33 = (min(var_33, (((-1291634337639424558 | (!-1789374875052940324))))));
                }

                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    arr_30 [i_0] [i_0] [i_1] [i_0] = var_17;
                    var_34 = (((0 >= 0) ? ((-((((arr_21 [i_1] [i_9 + 1]) < (arr_23 [i_0] [8] [i_0] [i_0] [12])))))) : ((((!(arr_3 [i_0])))))));
                    var_35 = (max(var_35, -5472687160455024218));
                    var_36 = ((-var_18 ? ((((!(var_0 - var_14))))) : (min((arr_28 [i_9 + 1] [i_1 - 2] [i_0] [i_0]), var_7))));
                }
                for (int i_10 = 3; i_10 < 11;i_10 += 1)
                {
                    var_37 = (((-574944450048348012 / (5472687160455024202 - -19664))));
                    var_38 = max((((arr_33 [i_10 - 2] [i_1 + 1]) * var_3)), (((!(arr_33 [i_10 - 1] [i_1 - 2])))));
                    var_39 = (!(((((!(arr_32 [i_10] [i_10] [i_10] [i_0]))) ? 1291634337639424551 : (((var_17 ? (arr_22 [i_0] [i_1] [i_1 - 1] [i_10] [i_10 - 2]) : 0)))))));
                }
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    var_40 = var_3;
                    var_41 = (arr_16 [i_11] [i_11] [i_11]);
                    var_42 = ((~(arr_19 [i_11])));
                    var_43 = (min(var_43, ((max((((((arr_21 [i_0] [i_1]) ? 0 : 20018)))), ((791553975 ? var_1 : (arr_7 [i_0] [i_1 - 1] [0] [i_11]))))))));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_44 = var_17;
                                var_45 = (1 || 0);
                                var_46 *= ((var_7 != (arr_22 [i_0] [i_1 - 2] [i_12] [i_13] [i_14])));
                                var_47 = (209 ^ 0);
                            }
                        }
                    }
                    arr_43 [i_0] [1] [i_1] [i_12] = ((16326 >> (((arr_29 [i_0]) - 15856))));
                    var_48 = (arr_6 [i_0]);
                }
                var_49 &= (arr_28 [i_0] [i_1] [i_0] [6]);
            }
        }
    }
    #pragma endscop
}
