/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_17 = ((((max(71, (arr_0 [i_0 + 3] [i_0 + 3])))) | ((2686753648 ? (arr_0 [i_0 + 2] [i_0 - 1]) : -10))));
        arr_3 [i_0] = (max(3568, (((((min(60117, 42915))) == ((min(21722, 0))))))));
        arr_4 [i_0] [i_0 + 2] = -1;
        arr_5 [i_0] [i_0] &= 61;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_0] [0] [0] = (((arr_2 [i_0 + 2]) * (min(3575, 1437124082))));

                    for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_18 = (((min(21722, 2275398727)) | (((min(var_3, 185))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_19 ^= ((255 & ((-39 << (-130427621 - 4164539667)))));
                            arr_16 [0] [i_1] [i_2] [i_3] [i_2] = 30975;
                        }

                        for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_20 = ((!((max(21722, 1)))));
                            var_21 = ((((max(2686753626, 185) * (60117 - 48078)))));
                            var_22 ^= (min((57659 & 229), ((max(226, 185)))));
                        }
                        for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_1] [i_2] [1] [i_6] = (max((((!var_15) ? (!var_11) : ((var_15 ? 26 : var_0)))), 5418));
                            var_23 = (min(var_23, ((((arr_18 [i_1] [i_3] [15] [i_3] [i_3 + 1] [15] [i_6]) ^ (max((~-116), -28747)))))));
                            arr_23 [1] [1] = var_5;
                            arr_24 [4] [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0] = ((var_0 ? ((max(-26686, -111))) : ((min(-116, 65533)))));
                        }
                    }
                    for (int i_7 = 3; i_7 < 15;i_7 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 16;i_8 += 1)
                        {
                            arr_29 [i_0] [i_1] [i_2] [0] [6] [i_8] = (((arr_25 [i_0 + 2] [i_7 - 2] [i_8] [i_8] [i_8] [i_8]) / 185));
                            var_24 = ((52 * ((19421 ? var_3 : (arr_26 [3] [i_1] [i_2] [i_1])))));
                        }
                        var_25 = -7680;
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            var_26 = (max(3568, (!29)));
                            arr_36 [7] [i_1] [i_2] [i_2] [i_10] = ((!((min(43813, 0)))));
                        }
                        for (int i_11 = 3; i_11 < 16;i_11 += 1)
                        {
                            var_27 *= (arr_0 [i_0 + 1] [i_0 + 2]);
                            var_28 *= (max(((((225 >> (-124 + 140))) | 108)), ((((max(3568, 18))) ? -123 : -125))));
                        }
                        var_29 = ((-((max(109, (arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_1] [i_1] [i_1]))))));
                        var_30 = (max((~var_4), ((-(arr_1 [i_0 - 1])))));
                        var_31 = (3484836074 & 6650);
                    }

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {

                        for (int i_13 = 1; i_13 < 13;i_13 += 1)
                        {
                            var_32 = ((-27 ^ ((-7582 ? 65528 : var_2))));
                            arr_43 [i_1] [i_2] [4] = ((~(arr_8 [i_13 + 1])));
                            arr_44 [i_1] = (!29798);
                            var_33 = arr_20 [i_1] [i_2] [3] [i_13 + 3];
                        }
                        for (int i_14 = 4; i_14 < 14;i_14 += 1)
                        {
                            arr_47 [i_0 + 3] [i_12] [i_2] [10] = ((-21 ? (arr_21 [i_0 + 3] [i_0 + 3]) : 0));
                            arr_48 [i_0] [i_12] [0] [6] [i_1] [6] [2] = (~0);
                            var_34 ^= (((var_8 && 65519) == (~0)));
                            arr_49 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] = ((0 ? var_13 : 0));
                        }
                        for (int i_15 = 3; i_15 < 16;i_15 += 1) /* same iter space */
                        {
                            var_35 = (((arr_25 [i_15 - 1] [i_15 - 1] [i_0 - 1] [2] [i_0 - 1] [i_0 + 1]) ? var_6 : 0));
                            arr_52 [0] [i_2] [i_12] [i_15] = -111;
                        }
                        for (int i_16 = 3; i_16 < 16;i_16 += 1) /* same iter space */
                        {
                            arr_55 [i_0] [9] [i_2] [i_12] [i_16] = (((arr_0 [i_16 - 1] [i_0 + 1]) + 59771));
                            var_36 = (min(var_36, 3568));
                        }
                        var_37 = ((-111 ? 1 : ((43657 ? 3573 : -111))));
                    }
                }
            }
        }
    }
    var_38 = var_9;
    #pragma endscop
}
