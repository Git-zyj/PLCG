/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (min(((var_6 % ((var_6 ? var_5 : var_2)))), var_1));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (max(var_16, (!1)));
        arr_2 [i_0] [i_0] = var_6;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_17 = (arr_9 [i_0] [i_0] [i_2] [i_3]);
                            arr_15 [i_0] [i_2] [4] [i_2] [i_4] &= 1156496088;
                        }
                    }
                }
            }
            arr_16 [i_0] = ((arr_12 [i_1 - 1] [i_0]) - (((((arr_6 [20] [i_0] [i_1 + 1] [i_1 + 1]) && (arr_8 [i_0] [i_0] [i_1]))))));
        }
        for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
        {
            var_18 = (min((((arr_14 [i_0] [i_5 + 1] [i_0] [i_5 - 1] [i_0] [i_0] [1]) ? var_6 : (((arr_14 [i_0] [i_0] [i_0] [1] [14] [i_0] [i_0]) ^ (arr_6 [i_0] [i_5] [i_0] [i_0]))))), ((min(1, var_6)))));
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_19 = (((arr_13 [i_6]) ? (((var_13 ? (arr_20 [i_0] [i_7]) : ((max(var_10, (arr_14 [i_7] [i_7] [i_8] [i_7] [i_8] [i_8] [i_7]))))))) : (min((arr_17 [i_0]), (((arr_11 [i_0] [i_0] [i_0] [i_0]) - var_12))))));
                            var_20 += (arr_1 [i_0]);
                            arr_27 [i_6] [i_7 - 1] [i_5 - 1] [i_5 - 1] [i_6] = (max(((~(max((arr_18 [i_0] [i_0] [i_0]), -436547241619403354)))), var_14));
                        }
                    }
                }
            }
            arr_28 [i_0] [i_5 - 1] = ((arr_19 [i_0] [i_0] [i_0]) ? 2802564338 : -2438855411);
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            arr_38 [i_0] [i_5] [i_9] [7] [i_11] = ((!(((var_2 ? 277535497623224512 : var_10)))));
                            var_21 *= (((arr_31 [20] [i_11]) || 835814789));
                        }
                    }
                }
            }
            var_22 = (arr_20 [i_5] [i_5 + 1]);
        }
        for (int i_12 = 1; i_12 < 21;i_12 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 21;i_14 += 1)
                {
                    {
                        arr_46 [i_0] [i_0] = (((((-(arr_7 [i_0] [i_0] [i_0])))) ? ((max(((min(1, 1))), -120))) : (1 ^ 65201)));
                        var_23 = (max(var_23, var_10));
                        var_24 = (min(var_24, (((3894188184 ? var_14 : (arr_10 [0] [i_0]))))));
                    }
                }
            }
            var_25 ^= ((1156496076 ? (~var_8) : var_10));
        }
    }
    for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
    {
        var_26 = var_5;
        arr_49 [i_15] = (+((((((arr_48 [i_15] [11]) ? (arr_48 [i_15] [i_15]) : (arr_48 [i_15] [i_15])))) ? 104 : 1322880978)));
    }
    for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
    {
        var_27 = (((((~((max(125, var_13)))))) ? ((var_13 ? var_0 : ((var_4 ? var_0 : (arr_50 [i_16]))))) : ((var_0 ? var_7 : (max((arr_50 [i_16]), var_0))))));
        var_28 -= 2824824131;

        /* vectorizable */
        for (int i_17 = 0; i_17 < 24;i_17 += 1)
        {
            var_29 = ((-8182777263932798766 ? 2814979065 : 2869231696));
            arr_54 [12] = ((!(arr_50 [i_17])));
            arr_55 [i_16] [i_17] [i_16] = var_9;
            arr_56 [i_16] [i_16] [1] = (arr_48 [i_16] [i_17]);
        }
        for (int i_18 = 2; i_18 < 23;i_18 += 1)
        {
            /* LoopNest 2 */
            for (int i_19 = 1; i_19 < 23;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 23;i_20 += 1)
                {
                    {
                        var_30 = (arr_47 [i_16]);
                        arr_64 [i_16] [6] [i_18] [i_20] [i_16] = ((max(3138471220, var_10)));
                        var_31 = (((1479988230 & 3894188188) ? (~var_5) : 0));
                    }
                }
            }
            arr_65 [i_18] = ((0 ? (~var_6) : var_9));
        }
        for (int i_21 = 0; i_21 < 24;i_21 += 1)
        {
            var_32 += (~var_0);
            arr_68 [i_16] = (max(((max(((1 ? -71 : (arr_53 [i_21] [i_21] [i_16]))), ((~(arr_51 [i_16])))))), var_8));
            var_33 = (min(var_33, (arr_62 [i_16] [i_21])));
            var_34 -= (max(((var_6 ? 46 : 400779125)), var_4));
        }

        for (int i_22 = 1; i_22 < 23;i_22 += 1)
        {
            var_35 |= var_13;
            var_36 += var_11;
            /* LoopNest 3 */
            for (int i_23 = 0; i_23 < 24;i_23 += 1)
            {
                for (int i_24 = 2; i_24 < 23;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 0;i_25 += 1)
                    {
                        {
                            var_37 = ((((arr_53 [8] [i_23] [i_22 + 1]) > (arr_57 [0] [i_16] [i_22 + 1]))));
                            arr_78 [i_16] [11] [17] [i_16] [i_16] = 3516403951;
                            arr_79 [i_16] [13] [i_23] [i_23] [i_24 + 1] [i_25] = (min(((400779100 - ((400779096 ? 1 : 6086023676229508511)))), (arr_51 [i_16])));
                            var_38 = var_3;
                            arr_80 [i_16] [i_16] [i_16] [i_24] [i_16] = ((var_6 ? 3590430041 : (arr_59 [i_16] [i_22] [i_22])));
                        }
                    }
                }
            }
        }
        for (int i_26 = 0; i_26 < 24;i_26 += 1)
        {
            var_39 *= ((min((((arr_51 [i_16]) % var_7)), var_6)));
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 24;i_27 += 1)
            {
                for (int i_28 = 2; i_28 < 21;i_28 += 1)
                {
                    {
                        var_40 = (((arr_52 [i_27]) ? var_6 : (max(var_2, ((1 ? 1 : 84315008))))));
                        var_41 = (min(var_41, (((var_8 ? var_0 : (arr_47 [i_27]))))));
                        var_42 = var_9;

                        /* vectorizable */
                        for (int i_29 = 0; i_29 < 1;i_29 += 1)
                        {
                            var_43 = (arr_48 [i_16] [i_27]);
                            arr_91 [i_16] [i_16] [i_16] [i_16] [i_16] = 3894188174;
                        }
                        for (int i_30 = 2; i_30 < 22;i_30 += 1)
                        {
                            var_44 = (((arr_63 [i_16] [i_26] [i_16]) ? var_8 : ((((((-(arr_47 [i_28]))) != var_4))))));
                            var_45 = (((((((min(119, 15))) ? 1 : 62388))) ? var_11 : ((((var_2 || (!var_7)))))));
                        }
                    }
                }
            }
            var_46 = ((-(min(2932183529, var_9))));
        }
        for (int i_31 = 1; i_31 < 23;i_31 += 1)
        {
            var_47 = (max(var_47, ((((arr_87 [i_16] [i_31 + 1] [21] [6] [i_16] [i_31 + 1]) < (124 % 3782740579))))));
            var_48 -= (min(((-((1 ? 1479988230 : 62405)))), var_9));
            var_49 = (max(var_49, (!var_6)));
        }
        for (int i_32 = 0; i_32 < 24;i_32 += 1)
        {
            arr_101 [i_32] [i_32] [i_32] = (arr_73 [i_16] [i_16] [i_16]);
            arr_102 [i_16] [i_32] = (2814979056 + ((((min(var_8, (arr_81 [i_32] [i_16] [i_16])))))));
        }
    }
    #pragma endscop
}
