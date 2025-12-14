/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = ((min(((((arr_8 [i_0] [0] [i_2]) ? var_11 : (arr_7 [i_0] [i_2])))), (min(var_15, (arr_5 [i_2]))))));
                    arr_10 [i_0] [i_1] [i_2] = -1;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_13 [i_3] = ((max((arr_12 [i_3]), var_1)));
        arr_14 [i_3] = (((arr_0 [i_3] [i_3]) <= (~6686)));
        var_18 = (((((var_5 ? ((min((arr_9 [i_3] [i_3]), -46))) : 58849))) ? (((arr_2 [i_3] [i_3]) / var_15)) : ((-(arr_3 [i_3])))));
    }

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_19 = 58850;
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_20 |= (arr_16 [3]);
                    var_21 = (var_10 & var_13);
                    var_22 = ((((((((arr_11 [1]) - 129)) / ((min(var_5, 48)))))) ? (var_14 | 25941) : (((((-(arr_9 [i_4] [i_6])))) ? -8208150891859729627 : ((((arr_2 [i_4] [i_4]) / 86)))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        var_23 = 162;
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 10;i_9 += 1)
            {
                {
                    var_24 = ((-((268435200 ? (arr_17 [i_7] [i_8]) : -104))));
                    arr_33 [i_7] [1] [1] [3] = var_15;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_25 = (min(var_25, (arr_22 [4])));
                                var_26 = (arr_19 [i_11] [i_11] [i_8 + 2] [i_8]);
                                arr_38 [i_7] [i_8] [i_9] [i_10] [i_11] = (arr_18 [i_7] [i_8]);
                                var_27 = (var_9 & (arr_29 [i_7] [i_8 + 1] [i_11]));
                            }
                        }
                    }
                    var_28 = (arr_17 [i_7] [i_8]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                {

                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        arr_45 [i_7] [i_12] [i_14] = -268435201;

                        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                        {
                            arr_50 [i_7] [i_14] [i_12] [i_13] [i_14] [i_15] = 731933348895607664;
                            var_29 = (max(var_29, -41));
                            var_30 = (min(var_30, 657104995));
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                        {
                            arr_54 [i_7] [7] [i_13] [i_14] [i_16] [i_14] = 6524544787495272657;
                            arr_55 [i_7] [i_7] [i_14] [7] = -1357217508;
                            var_31 += (arr_26 [i_7] [i_12]);
                            var_32 = ((((11499 ? 64418 : 731933348895607640)) | (arr_19 [i_12] [i_12] [i_12] [i_14])));
                        }
                        for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
                        {
                            var_33 = (max(var_33, (((~(arr_21 [9]))))));
                            arr_58 [i_12] [i_14] [i_14] [i_14] [i_17] = (-71 ? (arr_27 [i_14] [i_13] [11]) : (arr_27 [i_14] [i_13] [i_7]));
                        }
                        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                        {
                            var_34 = (max(var_34, var_13));
                            arr_61 [i_18] [i_18] [i_18] [i_14] [i_12] = (((arr_34 [i_7] [i_7] [i_7] [i_14] [i_7]) >= 53714));
                        }
                    }
                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        var_35 = (min(var_35, 176));

                        for (int i_20 = 0; i_20 < 13;i_20 += 1) /* same iter space */
                        {
                            var_36 = var_5;
                            var_37 = -0;
                        }
                        for (int i_21 = 0; i_21 < 13;i_21 += 1) /* same iter space */
                        {
                            var_38 += arr_67 [i_21] [i_12] [i_19] [i_12] [9];
                            arr_69 [i_7] [1] [i_13] [i_19] [i_21] = (((arr_31 [i_7]) >= (arr_34 [i_19] [i_12] [i_13] [i_13] [i_12])));
                        }
                    }
                    for (int i_22 = 0; i_22 < 13;i_22 += 1)
                    {
                        var_39 = (((arr_34 [i_7] [i_7] [i_7] [i_7] [i_22]) | (arr_5 [i_22])));
                        var_40 = (arr_35 [i_7] [i_12] [i_13] [i_22] [i_13] [i_22]);
                        var_41 = (max(var_41, (var_5 / 15681)));
                        var_42 ^= ((var_14 ? var_6 : -2014062868));
                    }
                    arr_72 [i_13] [i_12] [i_7] = ((268435186 << (2293390645983097042 - 2293390645983097042)));
                    var_43 *= ((58852 ? (arr_6 [i_12] [i_13]) : 1));
                }
            }
        }
    }
    for (int i_23 = 0; i_23 < 1;i_23 += 1)
    {
        var_44 ^= 0;
        var_45 = (min(((min((arr_6 [i_23] [i_23]), (arr_3 [i_23])))), (max(((122 ? 1 : (arr_0 [i_23] [i_23]))), 1))));
    }
    for (int i_24 = 0; i_24 < 16;i_24 += 1)
    {
        var_46 = (min(var_46, ((((arr_3 [i_24]) < ((18446744073709551606 | (!32743))))))));

        /* vectorizable */
        for (int i_25 = 0; i_25 < 16;i_25 += 1)
        {
            arr_79 [i_24] [i_24] [i_24] = (~65526);

            for (int i_26 = 0; i_26 < 16;i_26 += 1)
            {
                arr_83 [0] [12] [12] [i_24] |= -59;
                /* LoopNest 2 */
                for (int i_27 = 1; i_27 < 15;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 16;i_28 += 1)
                    {
                        {
                            var_47 = (max(var_47, -652761747138190188));
                            arr_90 [i_24] [i_26] [i_26] = (!1);
                        }
                    }
                }
                arr_91 [i_24] [i_24] = (arr_85 [i_24] [i_24] [i_24] [i_24]);
            }
        }
        var_48 = (18446744073709551615 - -4976433574752549329);
    }
    #pragma endscop
}
