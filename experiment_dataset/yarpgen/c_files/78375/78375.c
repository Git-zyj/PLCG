/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max(((((18 ? 9615755422222364515 : 115)) << ((var_5 ? var_0 : var_4)))), ((1 ? 13891448791344224358 : 115)));
    var_16 = (((((var_4 + var_12) - ((var_5 ? var_6 : var_4))))) ? (((((-18 ? -5 : 1890539850860681760))) ? ((var_6 ? var_10 : var_13)) : ((var_7 ? var_12 : var_5)))) : (((((var_2 ? var_11 : var_0))) + (var_9 - var_9))));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (((((15 % 14986085965099875235) ? 11 : 18169091069678971795))) ? (((((var_13 + var_6) == (var_1 | var_0))))) : ((((max(var_14, var_12))) ? (var_13 > var_5) : (var_13 ^ var_8))));
        var_17 = var_0;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_1] [i_0 + 2] = var_13;

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_18 ^= var_6;
                            arr_16 [i_2] [i_4] = var_0;
                            arr_17 [i_2] [i_2] [i_2] [i_3] = (((((min(((min(var_8, var_12))), (min(var_11, var_6)))))) | var_13));
                            arr_18 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_2] = min((min(((18446744073709551611 ? 7845624275413296892 : -124)), ((var_6 ? var_10 : var_10)))), (((var_7 % var_3) ? var_10 : var_7)));
                            arr_19 [i_3] [i_2] [i_0] = var_6;
                        }
                        var_19 *= ((min(14986085965099875235, var_5)) % (max((var_2 % var_10), ((var_0 ? var_8 : var_10)))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 12;i_6 += 1)
            {
                {
                    var_20 = (min(var_0, var_5));
                    arr_26 [i_6] = var_6;
                    arr_27 [i_5] [i_5] [i_6] = (max((((((var_11 ? var_0 : var_6))) ? (min(var_3, var_14)) : (var_7 + var_1))), (((((var_8 ? var_2 : var_5)) == (((var_0 ? var_2 : var_11))))))));

                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        arr_31 [1] [i_6] [i_6] [i_6] [i_6] = (((var_4 / ((var_6 ? var_9 : var_3)))) << (var_10 - 17305759716944991384));
                        var_21 = (min((min((min(var_1, var_14)), (max(var_9, var_8)))), ((var_6 + (min(var_10, var_5))))));
                        var_22 ^= (var_10 ? var_1 : (min(((min(var_11, var_2))), (97 + 7438296364060123800))));
                    }
                    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_23 = (max(var_23, ((((var_8 / var_13) | ((var_1 ? (min(var_14, var_12)) : ((var_9 ? var_3 : var_7)))))))));
                            arr_37 [i_0] [i_5] [i_0] [i_0] [i_6] = min(((var_5 ? (var_0 | var_5) : (var_14 != var_10))), var_3);
                            arr_38 [11] [i_5] [i_6] = (((min(var_14, (var_9 | var_3)))) ? (max((((var_1 ? var_12 : var_8))), ((var_10 ? var_5 : var_7)))) : ((var_5 ? var_9 : var_2)));
                            arr_39 [i_0] [i_6] [i_6] [i_6] [i_8] [i_9] = var_14;
                        }
                        var_24 = min(var_9, (((((var_2 ? var_10 : var_8)) < var_3))));
                        arr_40 [i_6] [i_6] [i_6] [i_6] = var_8;
                    }
                    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        arr_45 [i_5] [i_6] [i_6] = min(var_8, (min(((var_8 ? var_9 : var_6)), (var_13 % var_2))));

                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_48 [i_0] [i_0] [i_0] [i_0] [i_6] = (((((max(var_6, var_13))) && (min(var_3, var_8)))) ? ((((max(var_11, var_7))) ? (((var_2 ? var_11 : var_6))) : ((var_4 ? var_10 : var_13)))) : ((((min(var_4, var_8)) ? (var_12 || var_1) : ((var_3 ? var_3 : var_2))))));
                            var_25 = (((var_9 ? (min(var_7, var_1)) : ((var_1 ? var_1 : var_14)))) + (((max(var_7, var_11)) | (var_7 / var_7))));
                        }
                    }
                    var_26 = (min(var_26, ((((min(((var_12 ? var_4 : var_6)), var_0)) + var_8)))));
                }
            }
        }
    }
    for (int i_12 = 3; i_12 < 15;i_12 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_13 = 2; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    {
                        arr_61 [i_12 - 2] [i_12 - 2] [i_12 - 2] [3] [i_12] = (((max(((min(var_11, var_3))), var_14))) ? (((var_0 * var_13) + var_6)) : ((((((min(var_12, var_2))) < (var_6 - var_3))))));
                        arr_62 [i_12] [i_12] = (((((((max(var_8, var_3))) + var_6))) ? (15542571833130789450 + -83) : (((((var_7 << (var_6 + 23)))) ? var_9 : var_12))));
                    }
                }
            }
        }
        var_27 = (((var_11 ? ((var_6 ? var_12 : var_13)) : ((var_13 << (var_6 + 54))))) < ((var_13 ? (var_14 ^ var_1) : var_10)));
        var_28 ^= ((max((((var_12 ? var_12 : var_12))), var_5)) << ((((((min(var_6, var_6)))) < ((var_0 ? var_10 : var_12))))));
    }
    for (int i_16 = 3; i_16 < 15;i_16 += 1) /* same iter space */
    {
        var_29 = ((((var_8 || (((var_9 ? var_2 : var_11))))) ? (((min(var_6, var_5)) * (var_14 / var_7))) : (min(var_11, var_7))));

        for (int i_17 = 0; i_17 < 0;i_17 += 1)
        {

            /* vectorizable */
            for (int i_18 = 1; i_18 < 15;i_18 += 1)
            {
                arr_71 [i_16 - 3] [i_16 - 3] [i_16] [i_18] = var_0;
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 14;i_19 += 1)
                {
                    for (int i_20 = 1; i_20 < 15;i_20 += 1)
                    {
                        {
                            arr_76 [i_16] [i_19] [i_18 + 1] [i_16] = var_1;
                            var_30 = (((var_5 << (var_9 - 12910088962469731680))) << ((((var_12 ? var_12 : var_1)) - 11723690251313249229)));
                            var_31 = var_7;
                            var_32 = var_8;
                        }
                    }
                }
                arr_77 [i_16 - 1] [i_16 - 1] [i_16] = var_14;
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 16;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 15;i_22 += 1)
                    {
                        {
                            var_33 = ((var_13 < var_5) ? ((var_8 ? var_2 : var_1)) : var_5);
                            var_34 = (min(var_34, var_9));
                            var_35 ^= var_1;
                        }
                    }
                }
            }
            var_36 = max((min(var_11, var_12)), ((((min(var_5, var_13)) < (var_5 + var_12)))));
            var_37 = min((((var_3 >= var_14) ? (min(var_5, var_2)) : (((min(var_8, var_8)))))), var_13);
            var_38 = ((((((var_4 ? var_11 : var_11))) ? var_3 : var_13)) + var_11);
            var_39 = ((var_6 / 1) ? (min(((min(-5, 0))), 16899506643795822176)) : (((max(126, var_12)))));
        }
    }
    #pragma endscop
}
