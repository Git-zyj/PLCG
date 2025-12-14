/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (((((var_9 ? (var_10 > var_1) : ((var_10 ? var_15 : var_2))))) ? ((min(var_17, -var_1))) : ((((max(var_11, var_6))) ? var_11 : (var_3 || var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = ((((((max(var_17, var_8))) <= ((var_6 ? var_13 : var_15))))) > var_10);
                arr_4 [i_1] = (min(((((var_8 ? var_15 : var_15)) ^ var_14)), var_7));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_21 *= (min(((min((var_5 - var_1), ((min(var_1, var_2)))))), (((((var_9 ? var_8 : var_2))) ? (max(var_4, var_0)) : var_8))));
                            var_22 = var_7;
                            var_23 = var_2;
                            arr_9 [i_0] [i_1] [i_2] = var_16;
                        }
                    }
                }
                arr_10 [i_0] [i_1] = (max((var_8 * var_16), (var_7 / var_17)));
                var_24 = (var_9 || ((min(var_14, var_17))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            {

                /* vectorizable */
                for (int i_6 = 1; i_6 < 8;i_6 += 1)
                {
                    var_25 = ((-((var_4 ? var_9 : var_6))));
                    var_26 = (((var_9 / var_6) ^ (var_16 | var_3)));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    arr_23 [i_7] [i_5] [i_7] &= ((var_3 ? ((var_10 ? var_14 : var_10)) : var_18));

                    for (int i_8 = 3; i_8 < 10;i_8 += 1)
                    {
                        var_27 = (~var_3);
                        var_28 = (min(var_28, var_8));
                        arr_27 [i_4] = ((var_0 ? var_7 : var_13));
                        arr_28 [i_4] [i_4] [1] [i_7] [i_4] [i_8] = (((~var_15) ? (var_16 & var_11) : (var_3 - var_14)));
                        arr_29 [i_4] [i_4] = var_12;
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_32 [i_4] [i_5 - 2] [i_7] [i_9] = (-(var_14 ^ var_14));

                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            arr_35 [i_4] [i_9] [i_5 - 2] [i_4] = ((-((var_16 ? var_18 : var_11))));
                            var_29 += var_15;
                        }
                        arr_36 [i_4] [i_4] [i_7] [i_5] [i_4] [i_9] = (var_2 ? var_12 : ((var_7 ? var_15 : var_7)));
                        arr_37 [i_4] [i_5 + 1] = ((((var_11 ? var_1 : var_17))) ? var_12 : ((var_12 ? var_8 : var_8)));
                        var_30 = (var_9 ^ -var_15);
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_31 = var_12;

                        for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                        {
                            arr_44 [i_4] = var_18;
                            var_32 = (((var_11 ? var_3 : var_5)) > var_12);
                        }
                        for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                        {
                            var_33 &= ((!(var_15 > var_0)));
                            arr_48 [i_4 - 2] [i_4] [i_5 - 1] [3] [i_7] [i_11] [i_13] = var_3;
                        }
                        for (int i_14 = 2; i_14 < 9;i_14 += 1)
                        {
                            arr_51 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [7] = ((~((var_12 ? var_2 : var_14))));
                            var_34 *= ((var_16 > ((var_11 ? var_2 : var_2))));
                            var_35 = (((((var_5 ? var_10 : var_14))) ? var_5 : (!var_9)));
                            arr_52 [i_4] [i_7] [i_4] [6] [i_4 - 1] [i_4 - 1] |= ((var_12 ? var_10 : var_10));
                            var_36 = var_11;
                        }
                    }
                    var_37 = ((!(!var_12)));
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    var_38 = (!var_16);
                    arr_55 [1] [i_5 - 2] [0] [i_15] &= (((((var_1 ? var_3 : var_18))) ? ((var_13 ? var_9 : var_10)) : (var_1 < var_12)));
                    var_39 = (min(var_39, (~var_1)));
                    arr_56 [i_4] [i_4] [i_15] = var_7;
                    var_40 = (((var_8 > var_7) ? var_12 : ((var_3 ? var_2 : var_1))));
                }
                /* vectorizable */
                for (int i_16 = 1; i_16 < 7;i_16 += 1)
                {
                    var_41 = -var_0;
                    var_42 += var_8;
                }
                var_43 = ((((min((((var_10 ? var_5 : var_8))), ((var_2 ? var_14 : var_17))))) == (max((var_4 - var_15), var_0))));
            }
        }
    }
    var_44 = (min(var_44, ((min(var_17, (((~((var_5 ? var_13 : var_1))))))))));
    #pragma endscop
}
