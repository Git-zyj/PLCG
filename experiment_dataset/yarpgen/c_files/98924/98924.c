/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 ^= ((~(((arr_1 [i_1] [1]) | (((arr_5 [i_0] [i_1] [i_2] [i_1]) % (arr_2 [i_0] [i_1] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_15 = ((-((((min(var_0, var_3))) ? -119 : ((max((arr_4 [i_0]), var_5)))))));
                                var_16 = var_10;
                                arr_10 [i_4] [i_0] [i_2] [i_0] [i_4] [i_3] = (((((((min((arr_6 [i_0] [i_0] [i_2]), var_1))) ? ((max(var_4, 50860))) : (max((arr_7 [i_1]), (arr_0 [i_0])))))) ? (max((!var_2), (arr_0 [i_0]))) : var_3));
                                arr_11 [i_4] [i_2] [i_3 + 3] [i_0] [i_2] [i_1] [i_0] = -60822;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_14 [i_0] = ((~(((arr_1 [i_0] [i_5]) ? (var_3 | var_3) : (arr_9 [i_0] [i_0] [i_1] [i_2] [i_5])))));
                        var_17 = arr_6 [i_0] [i_0] [i_5];
                        var_18 &= (min(((min((arr_1 [i_1] [i_1]), (arr_2 [15] [i_1] [i_2])))), (((arr_4 [i_0]) ? var_2 : -var_0))));
                        var_19 *= (min(((((arr_3 [i_5] [i_2]) << (var_6 - 60992)))), 288230376151711744));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_6] = (~61006900);
                        var_20 = -643561609;
                    }
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        arr_22 [i_0] [i_2] [i_0] [i_7 - 1] = var_8;

                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            var_21 = (((((~(arr_21 [i_2] [i_7 + 1] [i_2] [i_0])))) % (((-(arr_9 [i_0] [i_0] [i_2] [i_7 - 1] [i_8]))))));
                            var_22 = (max(var_22, ((min((max(19216, (arr_20 [i_0] [i_2] [i_0]))), (max(10561371853488775855, (arr_9 [i_2] [i_2] [1] [i_7] [i_2]))))))));
                            var_23 = (min(var_1, (max((((~(arr_16 [i_1] [i_0] [i_1])))), 1))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_24 = (((arr_20 [i_7 + 1] [i_0] [i_7 - 1]) % var_2));
                            var_25 += ((arr_15 [i_1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) ? var_7 : (arr_23 [i_1] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_1]));
                        }
                        for (int i_10 = 3; i_10 < 19;i_10 += 1)
                        {
                            arr_31 [i_0] [17] [i_2] [i_0] [i_0] = (arr_21 [i_0] [i_0] [i_2] [i_0]);
                            var_26 = (((!3705308907) & (((arr_3 [i_0] [i_7]) ? (arr_9 [i_2] [i_0] [i_10] [i_10 - 1] [9]) : var_6))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_27 = (((~((var_3 ? -8599978917469974260 : 0)))));
                        var_28 = ((18493 ? var_13 : (~1291562729)));
                    }
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        var_29 = (((max((arr_30 [i_12] [i_12] [i_12] [i_12] [11] [i_12] [i_12]), (arr_35 [i_12])))));

        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            var_30 = arr_16 [i_12] [i_13] [i_13];

            for (int i_14 = 2; i_14 < 13;i_14 += 1)
            {
                var_31 = arr_30 [i_12] [i_12] [i_12] [i_13] [i_13] [i_14] [i_14 - 2];
                var_32 = (((((((((arr_13 [i_12] [i_13] [i_14] [i_14] [i_14]) ? var_5 : var_7))) ? ((2023658381 ? 20509 : (arr_35 [i_12]))) : (arr_37 [i_13] [i_12] [i_13])))) ? ((~(((arr_30 [i_14] [i_14] [i_14] [i_14 + 2] [i_14] [i_14 - 2] [i_14]) ^ (arr_1 [i_13] [i_14]))))) : ((min(var_6, (arr_38 [i_12] [i_13]))))));
            }
            var_33 &= (arr_27 [i_13] [i_13] [i_13] [i_13] [i_13]);
        }
        var_34 = (min(((((arr_39 [i_12] [i_12] [i_12]) ? (arr_24 [1] [i_12] [1] [i_12] [14]) : 10727))), ((((min((arr_9 [2] [i_12] [i_12] [i_12] [i_12]), var_10))) ? (max(var_7, (arr_30 [i_12] [i_12] [11] [i_12] [i_12] [i_12] [13]))) : ((((arr_7 [6]) ? var_7 : 58844)))))));
        arr_43 [i_12] [4] = (max((arr_25 [i_12] [i_12]), (max((arr_41 [i_12]), (arr_41 [i_12])))));
    }
    for (int i_15 = 2; i_15 < 14;i_15 += 1)
    {
        var_35 = var_5;

        /* vectorizable */
        for (int i_16 = 0; i_16 < 15;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                arr_53 [i_17] [i_17] [i_17] [i_15] = var_13;
                var_36 = -1924;
                var_37 = ((~(arr_24 [i_15 - 1] [i_15 - 2] [i_15] [i_15 - 1] [i_15])));
                var_38 = (((var_6 ? var_2 : var_1)));
            }
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {

                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    var_39 = (arr_32 [i_15 - 1] [i_15 - 1] [i_15]);
                    var_40 = 67108352;
                    var_41 = (((~var_7) ? 0 : var_3));
                    var_42 = (((arr_36 [i_15 + 1]) ? (arr_39 [i_19] [i_15 - 1] [i_15 - 1]) : (arr_36 [i_15 - 1])));
                }
                var_43 = (((arr_4 [i_15]) ? (((arr_0 [i_15]) % var_11)) : var_8));
                var_44 = (min(var_44, ((((arr_7 [i_16]) ? (arr_50 [i_15 + 1] [i_15] [i_18]) : (~173))))));
            }
            var_45 = (arr_15 [i_15] [i_15] [i_15 + 1] [i_15 - 2]);
            /* LoopNest 2 */
            for (int i_20 = 2; i_20 < 13;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 15;i_21 += 1)
                {
                    {
                        var_46 = (arr_32 [i_15 + 1] [i_15 + 1] [i_21]);
                        var_47 = (var_12 ? ((-(arr_61 [i_15] [i_15] [i_21] [i_15]))) : (arr_55 [i_20 + 2]));
                        var_48 = (-(arr_20 [i_16] [i_21] [i_15 + 1]));
                        var_49 &= (arr_49 [i_15]);
                    }
                }
            }
            var_50 = 3445;
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 15;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 15;i_23 += 1)
                {
                    {
                        var_51 *= (arr_1 [i_15 + 1] [i_15 - 1]);
                        var_52 = ((-(arr_39 [i_22] [i_15 - 1] [i_22])));
                        var_53 |= ((var_1 ? (arr_40 [2] [i_16] [i_23]) : ((-28804 ? (arr_5 [i_15] [2] [i_15] [i_23]) : (arr_37 [i_23] [i_22] [i_23])))));
                    }
                }
            }
        }
    }
    for (int i_24 = 0; i_24 < 22;i_24 += 1) /* same iter space */
    {
        var_54 = (min(var_54, 0));
        var_55 = (min(var_55, (arr_71 [i_24] [1])));
        arr_73 [i_24] [i_24] = var_0;
    }
    /* vectorizable */
    for (int i_25 = 0; i_25 < 22;i_25 += 1) /* same iter space */
    {
        arr_76 [15] = var_2;
        var_56 = (-(arr_74 [i_25] [i_25]));
    }
    var_57 = (min(var_57, var_0));
    /* LoopNest 2 */
    for (int i_26 = 0; i_26 < 23;i_26 += 1)
    {
        for (int i_27 = 2; i_27 < 22;i_27 += 1)
        {
            {
                arr_83 [i_26] [1] [i_27] = var_13;
                arr_84 [3] = (min((arr_79 [i_26] [1]), (arr_82 [i_26] [i_27 - 1] [i_27])));
            }
        }
    }
    #pragma endscop
}
