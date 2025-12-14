/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (max(((max(var_0, (arr_3 [i_0] [i_1])))), var_12));

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_20 = ((arr_2 [i_2]) ? var_12 : ((max((!3863005865), (min(462142922, var_11))))));
                    var_21 -= (((max(var_5, -462142917)) != 1420));
                    arr_7 [i_0 - 1] [i_0] [1] = 15378;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_22 = (max(var_22, var_12));
                        arr_12 [i_0] = ((((min(var_14, 32767))) | (((arr_10 [23] [i_0] [i_0 + 1]) ? (arr_3 [i_0] [23]) : 121))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        var_23 = var_14;
                        var_24 ^= (462142918 / var_10);
                        var_25 = 0;
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [12] [i_0] [i_0] [i_0] = var_14;
                        arr_19 [i_0] = (((((var_16 ? var_11 : (arr_4 [i_0 - 1] [i_0] [i_0 - 1])))) ? -1441 : (((max(var_6, 233))))));

                        for (int i_7 = 3; i_7 < 23;i_7 += 1)
                        {
                            var_26 -= var_10;
                            arr_22 [6] [i_1] [i_0] [i_6] [16] = (((((arr_2 [i_0 - 1]) < 1460462963))) >= ((var_1 | ((var_0 / (arr_5 [i_3] [17]))))));
                            var_27 = (max(var_27, ((min((min((max((arr_13 [i_1] [14] [14] [0]), var_0)), (var_0 * var_9))), -32767)))));
                            var_28 = (min(var_28, 2));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_29 = (max(((min(944276489, var_2))), ((((min(var_10, 1))) ? var_7 : (!var_10)))));
                            var_30 *= var_17;
                            var_31 = (((15 / 462142914) >= (var_17 || var_3)));
                            arr_26 [i_0] [i_1] [i_0] [i_0] [i_0] [i_8] = max(var_11, (max(462142917, var_4)));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_32 = ((var_16 ? var_9 : var_0));
                            arr_30 [1] [i_1] [i_0] [i_6] [i_9] = ((-(arr_1 [i_0])));
                            var_33 = (!4095);
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_34 ^= -var_8;
                            var_35 |= (((arr_0 [i_0] [23]) >= (-9223372036854775807 - 1)));
                            arr_34 [i_0 + 1] [i_0 + 1] [6] [i_0 + 1] [i_0] = ((var_1 >> (var_2 + 473749046)));
                            var_36 -= var_16;
                        }

                        for (int i_11 = 2; i_11 < 23;i_11 += 1)
                        {
                            var_37 = ((!(((arr_5 [i_1] [i_11 - 2]) <= var_4))));
                            arr_37 [19] [19] [19] [i_6] [i_0] = (max(((~((max((arr_29 [i_0 - 1] [i_0] [i_0] [i_6] [i_6]), -4096))))), -462142889));
                        }
                    }

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_38 = ((!(var_16 | var_6)));
                        var_39 = ((-(arr_16 [i_0 - 1] [i_0 + 1])));

                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            var_40 = (min(var_40, 3350690830));
                            var_41 = (((((-8829 == (arr_20 [1] [i_0] [11])))) & (((var_1 < var_10) ? ((min(var_6, var_13))) : var_11))));
                        }
                        arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((!((!((min(2068496113655250807, 22545)))))));
                        arr_45 [i_0] [i_0] = var_17;
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        var_42 ^= (((-(var_0 % 81))));
                        var_43 = var_12;
                    }
                }
                for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 24;i_17 += 1)
                        {
                            {
                                var_44 = ((!((((1 ? 3350690806 : var_1)) >= (arr_17 [i_0 + 1] [i_0] [i_0 + 1] [13] [i_0] [i_0])))));
                                var_45 -= ((35 || ((max((arr_52 [10] [i_16] [i_1] [i_0] [i_0 - 1]), var_5)))));
                                var_46 = (((((var_4 / var_11) / 3350055740637517029))) ? (((var_8 == (arr_40 [i_15] [i_17] [i_0 + 1] [i_17] [1])))) : (((var_1 ? var_2 : (arr_55 [i_0] [i_0 + 1] [i_1] [22] [4] [i_17] [i_1])))));
                            }
                        }
                    }

                    for (int i_18 = 2; i_18 < 23;i_18 += 1)
                    {
                        arr_58 [i_0] [7] [i_0 + 1] [i_0] [i_0 - 1] [i_0] = ((var_12 + ((((arr_52 [13] [i_18 - 1] [i_0] [i_0 + 1] [19]) + 0)))));
                        var_47 = -35;
                    }
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        var_48 = -30;
                        var_49 = (~var_8);
                    }
                }
            }
        }
    }
    var_50 = var_14;
    #pragma endscop
}
