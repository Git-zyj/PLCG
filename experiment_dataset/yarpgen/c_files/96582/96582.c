/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_17 = (arr_6 [i_0] [i_1] [i_2] [i_3]);
                        arr_8 [i_0] [i_0] = (-9223372036854775807 - 1);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_18 = (-18 ? ((var_2 ? var_16 : var_1)) : (33493 < var_1));
                        var_19 = -1;
                        var_20 = var_11;

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_2] [i_5] = ((+(((arr_12 [i_5] [i_2]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_12 [i_1] [i_4])))));
                            arr_15 [i_0] [i_0] [i_0] = (arr_1 [i_5]);
                            var_21 = (-9223372036854775807 - 1);
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_22 = (arr_2 [i_0] [i_0]);
                            var_23 = ((85 ? (arr_12 [i_0] [i_0]) : (arr_12 [i_0] [i_2])));
                            arr_18 [i_0] [i_1] [1] [i_1] [i_1] [i_1] [i_1] = -38853;
                            arr_19 [i_2] [i_0] [i_2] = var_4;
                            var_24 = (arr_5 [i_6] [11] [11] [i_6]);
                        }
                        var_25 = (arr_5 [10] [8] [i_2] [i_2]);
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_26 = var_3;
                        var_27 = ((((((arr_17 [i_7] [i_1] [i_2] [i_7] [i_7] [i_1] [i_0]) ? var_7 : var_5))) ? (min((arr_17 [i_7] [i_7] [i_7] [i_0] [i_2] [i_1] [i_0]), var_9)) : (arr_17 [i_0] [i_1] [i_1] [i_2] [i_7] [i_7] [i_7])));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        arr_26 [i_0] [i_0] [i_0] [1] [i_8] = ((var_11 ? (arr_25 [i_0] [i_1]) : (((arr_16 [i_0] [i_0] [i_2]) ? 0 : var_12))));
                        var_28 = ((1 ? 179734769 : var_8));
                        arr_27 [i_0] [i_0] [i_0] [i_0] = ((-(arr_24 [i_2])));
                        var_29 = ((var_9 * (((arr_10 [i_1] [i_8]) ? (arr_2 [i_1] [i_8]) : (arr_4 [i_0] [i_0] [3])))));
                    }
                    arr_28 [i_0] [i_0] [i_0] = (min(((min(var_5, var_2))), (arr_6 [i_0] [i_1] [i_1] [i_2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                var_30 = (max(153, ((4294967295 ? 41657 : -382774757))));

                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_31 = (max(var_31, ((max(var_14, (((arr_29 [i_12]) ? var_14 : (arr_29 [i_10]))))))));
                        arr_40 [i_10] [i_10] = (((((-(arr_34 [i_9] [i_11] [i_12])))) ? (((arr_29 [i_10]) ? 1190912772039059783 : (arr_29 [i_10]))) : ((((!(((-8887064138025374464 ? 0 : var_14)))))))));
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_32 += (!-124);

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            arr_48 [i_14] [i_10] [i_13] [i_11] [i_10] [i_10] [i_9] = -77;
                            var_33 -= var_4;
                            var_34 ^= ((var_11 ? var_14 : var_12));
                            arr_49 [i_10] [i_13] = ((177 < (arr_33 [i_10] [4] [i_10])));
                        }
                        var_35 = 72;
                        var_36 &= var_3;
                    }
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        arr_54 [i_15] [i_15] [i_10] [i_10] [i_9] [i_9] = (max(((var_3 ? ((max((arr_36 [i_9] [i_9] [i_15]), var_10))) : ((var_9 ? -57 : 26683)))), 179734769));

                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            var_37 = ((((((arr_39 [i_9] [i_16]) ? ((-62 ? var_5 : (arr_31 [i_16] [i_16]))) : (arr_51 [i_9])))) ? 0 : (~var_8)));
                            arr_59 [i_9] [i_9] [i_11] [i_11] [i_10] = ((~61308) != (179734769 / 18));
                            arr_60 [i_15] [i_15] [i_10] [i_15] [i_15] = (!28820);
                            arr_61 [i_10] [i_10] [i_15] = ((((max(60983, 128))) ? 6205989534851491778 : -var_14));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            arr_65 [i_17] [i_15] [i_11] [i_15] [i_9] |= -31381;
                            var_38 = (min(var_38, 179734769));
                            var_39 = var_14;
                            var_40 = ((var_1 << (((arr_56 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) - 185))));
                        }
                        arr_66 [i_15] [i_10] [0] [i_15] = ((((max(1, var_4))) ? ((13386 ? 7 : 138)) : 1524149581));
                        var_41 = (~-var_13);
                        var_42 ^= ((~(min(var_9, (arr_35 [i_15] [i_9] [i_11])))));
                    }
                    arr_67 [i_9] [1] [i_9] [i_10] = (arr_30 [i_9] [i_9]);
                }
                /* LoopNest 3 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 20;i_20 += 1)
                        {
                            {
                                var_43 = ((!((max(-1304331009742951466, var_3)))));
                                var_44 = max((arr_56 [i_9] [i_10] [i_18] [i_19] [i_20] [i_20]), (max((min(549755813887, 144)), (0 + 23))));
                            }
                        }
                    }
                }

                for (int i_21 = 0; i_21 < 20;i_21 += 1)
                {
                    arr_77 [i_9] [i_9] [i_21] [i_10] = var_2;
                    var_45 = (arr_29 [i_21]);
                    var_46 = ((!(arr_30 [i_10] [i_10])));
                }
            }
        }
    }
    #pragma endscop
}
