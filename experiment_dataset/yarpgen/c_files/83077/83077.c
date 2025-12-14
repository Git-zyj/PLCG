/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 += (((((((arr_1 [8]) ? 2147483647 : var_1))) ? var_9 : ((min(var_6, 32272))))));
        arr_3 [i_0] = ((~((~(arr_1 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = 16383;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3] [i_2] = (((((var_5 ? ((16380 | (arr_11 [i_0] [i_1]))) : (arr_8 [i_3 + 3] [i_3 + 3])))) ? (~var_4) : ((((min(var_1, (arr_2 [i_4])))) ? (min(72057594037927935, -7986315513200360154)) : ((((arr_11 [i_4] [i_2]) & var_7)))))));
                                arr_13 [i_4] [i_1] [i_1] [i_1] = ((-72057594037927935 ? 72057594037927935 : 1));
                            }
                        }
                    }
                    var_15 = (!var_11);

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_16 = ((~(arr_6 [i_0] [4] [i_2] [i_5])));
                        arr_16 [i_0] [i_0] [5] [i_0] = (((((arr_0 [i_5]) ? 255 : var_7))) ? (arr_2 [i_0]) : ((var_11 % (arr_1 [2]))));
                        arr_17 [0] [i_1] [i_0] = (arr_4 [i_0] [i_0] [i_0]);
                        arr_18 [i_1] [6] [i_1] [i_1] [i_1] = (arr_4 [i_2] [i_1] [i_0]);
                    }
                    arr_19 [1] [i_1] [i_0] = (var_4 ? ((((arr_8 [i_0] [i_0]) ? ((min(31921, 49150))) : 16383))) : var_8);
                }
            }
        }
        arr_20 [i_0] [i_0] = ((((var_6 + ((43 ? 73 : 16386)))) == ((var_0 ? (arr_15 [i_0] [i_0] [i_0] [i_0]) : ((~(arr_2 [i_0])))))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_17 = (~-1516308683);

            /* vectorizable */
            for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 8;i_9 += 1)
                    {
                        {
                            var_18 = (arr_26 [1] [8] [i_7] [i_7] [i_7] [i_7]);
                            arr_30 [i_7] [i_8] [i_0] [i_6] [i_7] = (~-47);
                            arr_31 [i_0] [2] [2] [i_7] [i_9 + 3] = (arr_27 [i_7] [i_6] [i_0] [i_8] [7] [7]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            arr_39 [i_11] [i_7] [i_7] [i_6] [i_7] [i_0] = (((((-37 ? (arr_14 [0] [i_6]) : -102))) ? 49145 : (arr_11 [i_0] [i_0])));
                            arr_40 [i_7] [i_6] [i_7] = ((var_5 >= 84) ? ((49178 ? var_9 : (arr_1 [i_0]))) : (arr_6 [i_0] [i_0] [i_0] [i_0]));
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        {
                            arr_50 [i_13] [i_13] = (850468495160488621 < 246);
                            var_19 = min(var_6, (242 - 246));
                        }
                    }
                }

                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    var_20 = (arr_10 [i_0] [i_6] [i_0] [i_6] [i_15]);
                    arr_53 [4] [2] [i_6] [5] [2] = ((((((15048 ? var_9 : (arr_22 [i_0])))) ? -var_2 : -var_9)));

                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        var_21 ^= (arr_47 [i_16] [5] [i_6] [i_0]);
                        var_22 = ((var_3 ? (arr_51 [i_0] [i_16] [i_12] [i_16]) : var_9));
                        arr_56 [i_0] [i_6] [i_12] [8] [i_15] [8] [8] = (((arr_21 [i_0]) ? (((16400 ? var_6 : (arr_24 [i_6] [2] [i_15])))) : (arr_38 [i_0] [i_15] [i_12] [i_15] [i_16])));
                    }
                }
                arr_57 [6] [i_0] = ((((((96 % 72057594037927946) ? (min((arr_32 [i_12] [i_12] [i_12] [i_12] [i_6]), var_1)) : (47166 / -107)))) ? ((min(var_2, var_3))) : (min((arr_44 [i_0] [i_0] [i_12] [i_12]), (arr_44 [i_12] [i_12] [i_12] [i_12])))));
                arr_58 [i_0] [i_6] = ((((var_8 ? (((arr_0 [5]) - var_5)) : ((((arr_52 [i_0] [i_6] [i_6] [i_0] [i_6] [1]) < (arr_48 [i_12]))))))) ? ((min(2305843009213693951, var_2))) : (min(var_5, var_5)));
            }
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    {
                        var_23 = ((~(min(528077334, -1))));
                        arr_65 [i_18] [i_18] [i_17] [i_17] [i_17] = (((((2370992899 ? 6581952234606009221 : 55))) ? (arr_48 [i_0]) : (min(((var_2 ? -117 : var_0)), ((203 ? 228 : 1))))));
                    }
                }
            }
        }
    }
    for (int i_19 = 0; i_19 < 23;i_19 += 1) /* same iter space */
    {
        var_24 -= ((~(min((((arr_68 [6]) ^ var_8)), (((var_9 ? (arr_67 [i_19]) : (arr_68 [i_19]))))))));
        var_25 *= (((var_7 ? (arr_66 [i_19]) : 254)));
    }
    for (int i_20 = 0; i_20 < 23;i_20 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 23;i_21 += 1)
        {
            for (int i_22 = 4; i_22 < 20;i_22 += 1)
            {
                {
                    arr_75 [1] [i_21] [i_21] [i_20] = ((((min(139, -var_9))) ? var_5 : ((((24080 ? (arr_73 [i_20] [8]) : var_9))))));
                    var_26 = var_10;

                    for (int i_23 = 0; i_23 < 23;i_23 += 1)
                    {
                        arr_78 [i_23] [i_23] [i_21] = (min((~var_10), ((~(!var_6)))));
                        var_27 -= 255;
                    }
                    for (int i_24 = 0; i_24 < 23;i_24 += 1)
                    {
                        var_28 = (-((var_6 ? (arr_73 [i_24] [i_20]) : ((2836132535 * (arr_81 [i_24] [i_21] [21] [i_21] [i_20]))))));
                        arr_82 [i_21] [i_21] [i_22 - 1] [i_24] [16] [i_21] = var_9;
                        var_29 = ((var_1 / ((((arr_74 [i_20] [i_21] [i_20]) ? (arr_69 [i_20]) : (((arr_80 [i_20] [i_21] [i_22] [18]) ? var_2 : var_11)))))));
                    }
                }
            }
        }
        var_30 = (min(var_30, (~-1)));
    }
    var_31 -= ((min(26532, 24080)));
    #pragma endscop
}
