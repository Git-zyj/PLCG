/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (((((max(var_1, 1))) ? (arr_8 [i_0] [i_1]) : -40)))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                            {
                                var_15 = (min(var_15, ((-874724428 ? 874724422 : 1))));
                                var_16 = ((((((65527 ? var_8 : var_12)))) > 1));
                                var_17 = ((((max((arr_11 [1] [i_1] [i_2] [i_1] [1] [i_1] [i_1]), (arr_8 [i_0] [i_3])))) ? ((min(var_5, (arr_11 [i_0] [i_1] [i_2] [i_2] [i_0] [i_3] [i_4])))) : ((~(arr_8 [i_1] [i_1])))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                arr_16 [14] [i_1] [i_2] [i_1] [i_5] = -14730;
                                var_18 = (max(var_18, 54));
                                var_19 *= var_12;
                                arr_17 [4] [i_1] [i_2] [i_2] [i_5] = ((222 ? (!9082) : (arr_7 [i_2])));
                            }
                        }
                    }
                }
                arr_18 [i_0] = ((((1936025909 <= (max(1936025911, var_4)))) ? ((((min(var_11, (arr_10 [22] [i_0] [i_0] [i_0] [i_1] [i_1])))) ? (min(var_13, 1)) : var_12)) : (((((max((arr_7 [i_1]), var_11))) ? (min(0, 0)) : ((min(9082, 874724422))))))));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_20 = (!(!10093560059314167499));
                    arr_21 [i_0] [i_1] [i_6] = (((var_5 ^ 42) ? 1536 : ((51032 ? 6831172238888317157 : 110))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_26 [i_0] = -874724427;
                                arr_27 [i_0] [i_6] [i_7] [i_0] = (arr_6 [0] [i_0] [i_6]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                var_21 = (!26);
                                var_22 = (((134217728 ? 874724434 : 11623121275062523648)));
                                arr_32 [1] [0] [0] [i_6] [i_9] [0] [0] &= ((var_3 ? 58 : 1905841637));
                            }
                        }
                    }
                    var_23 = (min(var_23, var_6));
                }
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    var_24 = (!32046);

                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 22;i_12 += 1)
                    {
                        var_25 = -1543521589769798298;
                        arr_37 [i_11] = ((var_7 ? 2 : var_3));
                        var_26 = (arr_31 [i_12 + 2] [i_12 + 2] [i_12] [i_12] [i_12 - 2] [i_12 - 1]);
                        var_27 = (((arr_2 [i_0] [i_1] [i_11]) / var_5));
                    }
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        arr_42 [1] [i_1] [i_11] = var_1;
                        var_28 = (min((911414047 ^ 4294967294), ((var_8 ? 6823622798647027968 : (arr_19 [i_0] [i_0] [i_0])))));
                        var_29 = -64003;
                        var_30 = ((44359 ? ((-16777216 ? 1382653223 : 1)) : (((-874724428 ? 1 : 255)))));
                    }
                    var_31 -= ((!((((arr_3 [i_11] [i_1]) >> var_6)))));
                    var_32 = (!var_0);
                }
                var_33 = var_12;
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        {
                            arr_47 [i_0] [i_0] [i_1] [i_14] [i_15] = ((((((((var_5 ? (arr_9 [i_0]) : 5865416649908569828))) ? 63999 : ((1 ? -131072 : (arr_29 [i_0] [i_1] [i_1] [i_0] [i_15 - 1])))))) - (min(1898457766, 1536))));
                            var_34 = (arr_44 [14]);
                            var_35 = 1167315374;
                            var_36 = 1;
                        }
                    }
                }
            }
        }
    }
    var_37 = ((((1073741824 ? var_3 : ((1 ? var_5 : var_12)))) % (109 || 54761)));
    #pragma endscop
}
