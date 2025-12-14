/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_0, ((((~var_5) ? (min(var_4, 858000252)) : var_7)))));
    var_12 = (min(var_12, (~var_10)));

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((!((min(-7374, (arr_1 [i_0 + 1] [i_0 + 1]))))));

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_13 |= ((47 ? ((min(-7393, var_5))) : var_7));
            arr_5 [i_0] [1] &= (((((209 ? -858000266 : 3485134527))) ? ((max(209, 2427801029))) : 8889763816282176161));
        }
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_14 = (-858000263 ? -12 : -858000243);
                            var_15 = (~-1740113763);
                            var_16 |= (arr_1 [1] [i_4]);
                        }
                    }
                }
            }
            arr_16 [6] |= (min((max((arr_7 [i_2 - 2]), ((1701330597 ? -48 : (arr_13 [i_0] [i_2] [i_2] [i_0] [i_0 + 1] [i_0] [i_0]))))), (!var_3)));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_26 [1] [i_2] [i_2] [i_7 + 2] [i_2] = (arr_24 [i_0 - 1] [i_2] [i_6] [10] [i_8]);
                            var_17 = 50;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    {
                        arr_32 [i_0] [i_2] [i_9] [i_10] = (arr_31 [i_9 - 3] [i_9] [i_9] [i_9 - 1]);
                        var_18 = var_4;

                        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                        {
                            var_19 = (arr_15 [7] [i_2] [i_2]);
                            arr_37 [i_0] [i_2] [i_9] [i_10] [i_11] [2] |= ((((max((7 * var_3), (963353229 || var_9)))) ? ((min(var_7, (arr_9 [i_2] [i_9] [i_11])))) : var_5));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                        {
                            var_20 = (min(var_20, 0));
                            arr_41 [i_2] = (arr_31 [i_0 - 1] [i_9] [i_0 - 1] [7]);
                            arr_42 [i_2] = (var_6 >= 40363);
                            var_21 = (((arr_22 [i_2 + 4] [i_2 + 2] [i_2] [i_2 + 4] [i_2 - 3]) && 0));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            var_22 = var_5;
                            var_23 = (min(var_23, ((var_6 ? 47 : (arr_17 [i_0] [i_10])))));
                            var_24 = 181;
                            var_25 = var_10;
                        }
                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            var_26 = (min(-963353246, -7));
                            arr_49 [i_14] [i_0 + 1] [i_2] [i_2] [i_0 + 1] [i_0 + 1] = ((((((var_7 && -7) ? (max(var_8, (arr_12 [i_2] [i_2] [i_2] [i_10]))) : (arr_23 [i_0] [0] [i_9] [12] [i_14] [5])))) ? var_2 : ((18446744073709551615 ? (((arr_46 [i_0] [i_2] [i_2] [i_0] [i_2]) ? (arr_25 [i_0] [i_0] [i_2] [i_2] [i_9 - 3] [i_2] [i_14]) : var_0)) : var_0))));
                            var_27 = (!-858000266);
                            var_28 = var_10;
                        }
                        arr_50 [i_2] = var_2;
                        arr_51 [i_2] [i_2] = (~-7);
                    }
                }
            }
            var_29 += (~var_3);
        }
    }
    for (int i_15 = 1; i_15 < 13;i_15 += 1) /* same iter space */
    {

        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            var_30 = (((3058448359 + (((0 ? 1 : 209))))));
            var_31 = (min(var_31, 18446744073709551609));
            arr_58 [7] = ((((min((arr_46 [i_15] [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_16]), (arr_46 [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_16])))) ? (arr_43 [i_16] [i_15] [i_16]) : (((arr_55 [i_15 + 1] [i_15 + 1] [i_15 - 1]) - (arr_55 [i_15 + 1] [12] [i_15 - 1])))));
        }
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            var_32 = (max(var_32, (arr_35 [i_17] [0] [i_17] [0] [i_15])));
            var_33 |= 0;
        }

        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            var_34 = (min(var_34, ((min(((~(var_2 >> var_8))), ((min(var_4, 6))))))));
            var_35 = (!7);
        }
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            arr_65 [i_15 - 1] [i_19] = (((!18446744073709551615) ? (min(((min((arr_33 [i_15] [i_19] [i_19]), -76))), ((3058448374 & (arr_10 [i_19] [i_19] [i_19] [i_19]))))) : ((((!(arr_17 [i_19] [i_19])))))));
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 14;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 14;i_21 += 1)
                {
                    {
                        arr_73 [9] [i_19] [1] [i_19] = var_0;
                        var_36 = (min(var_36, ((((min((arr_8 [i_15 - 1] [i_15 - 1] [i_15]), (arr_8 [i_15] [i_15 - 1] [i_20]))) >> (var_10 - 1751025478))))));
                        arr_74 [i_15] [i_19] [i_15] = ((-(max((!-7484212705029483052), 17))));
                    }
                }
            }
        }
        for (int i_22 = 0; i_22 < 1;i_22 += 1)
        {
            arr_79 [i_15] = var_6;
            var_37 = -17;
        }
    }
    #pragma endscop
}
