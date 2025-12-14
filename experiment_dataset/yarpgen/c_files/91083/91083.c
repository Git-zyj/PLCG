/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((3727671274 || -10) ? (((var_13 ? var_9 : 28))) : (((var_11 || var_0) & (567296024 | 12601)))));
    var_18 ^= (max(var_5, ((var_10 ? ((min(567296046, 949141981))) : ((var_7 ? -10918581 : var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 18;i_4 += 1)
                            {
                                var_19 = -12601;
                                var_20 ^= (((var_8 - 8) * 28634));
                                var_21 = (max(var_21, ((16176 ? (((((min(var_16, -12603))) >= var_10))) : var_0))));
                            }
                            var_22 ^= var_8;

                            for (int i_5 = 2; i_5 < 19;i_5 += 1)
                            {
                                var_23 = ((((203 ? var_16 : var_1))) ? 1 : var_0);
                                var_24 ^= ((1579523245 == (~-12601)));
                                arr_15 [i_2] [i_1] [i_0] [i_3] = var_1;
                            }
                            for (int i_6 = 0; i_6 < 20;i_6 += 1)
                            {
                                var_25 = (max(var_25, ((max((((var_2 & var_0) | var_4)), (~1579523245))))));
                                arr_18 [i_6] [i_0] [10] [i_0] [i_0] = min(var_8, 2958500988);
                            }

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                            {
                                var_26 = var_16;
                                arr_23 [i_0] [i_1] [i_1] [i_3] [3] = (-12599 || 0);
                                var_27 ^= (!var_5);
                                var_28 = (((var_16 ? var_15 : var_15)));
                            }
                            for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                            {
                                arr_26 [i_0] [i_3] [7] [i_1] [i_0] = ((var_5 || var_10) ? ((241 ? 2715444050 : 99)) : (85 <= var_7));
                                arr_27 [i_0] [i_0] = ((((-(min(var_4, var_15)))) * (max(1, (-9223372036854775807 - 1)))));
                                arr_28 [i_0] [15] = (-((max(1475475916, var_4))));
                                var_29 ^= (min((min(((var_13 ? 1 : var_10)), (~14336))), -14337));
                            }

                            for (int i_9 = 0; i_9 < 20;i_9 += 1)
                            {
                                var_30 = (((var_3 | var_7) ? (((((((26812 ? var_8 : var_0))) || 12588)))) : (min((~255), (min(var_2, var_0))))));
                                var_31 = 1;
                                arr_31 [11] [i_0] [i_0] [11] = ((!(((var_9 ? var_6 : ((12 ? 0 : 0)))))));
                            }
                            for (int i_10 = 0; i_10 < 20;i_10 += 1)
                            {
                                var_32 ^= (24035 * -28);
                                var_33 = ((((((((var_8 ? var_2 : var_16))) ? (max(34, 775922969)) : (((4294967283 ? var_16 : -1237250094)))))) ? ((((3727671294 ? var_2 : -12935)) ^ (~var_5))) : 0));
                                arr_36 [i_0] [13] [1] [i_0] [i_10] [i_1] [13] = min((min(var_11, var_16)), 9192);
                                var_34 = ((var_12 ? ((-((28 ? var_6 : 1)))) : var_7));
                                var_35 = ((((((-10918581 ? 1 : 9194))) ? var_11 : (306666922 <= var_16))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 17;i_12 += 1)
                    {
                        {
                            arr_43 [i_0] [i_11] [5] [i_0] = 5226;
                            var_36 = (max(var_36, (((545109045 << ((((var_9 ? 4009874900456812345 : 200)) - 4009874900456812323)))))));
                        }
                    }
                }

                for (int i_13 = 1; i_13 < 16;i_13 += 1)
                {

                    for (int i_14 = 4; i_14 < 16;i_14 += 1)
                    {

                        for (int i_15 = 1; i_15 < 16;i_15 += 1)
                        {
                            arr_51 [i_15 + 3] [i_0] [i_15] [i_15 + 4] [19] [i_15 + 3] = (max(((!((min(var_1, -12602))))), ((!(228 || var_16)))));
                            arr_52 [i_0] [5] [i_13] [6] [i_14] [i_0] [3] = (((((var_11 ? var_9 : var_8))) <= (min(((-9193 ? var_4 : 1)), (!var_7)))));
                            var_37 = 139;
                            var_38 ^= (var_7 == var_10);
                            var_39 = (min(var_39, (((min(var_1, var_4))))));
                        }
                        /* vectorizable */
                        for (int i_16 = 2; i_16 < 19;i_16 += 1)
                        {
                            arr_57 [i_0] = 21177;
                            var_40 = (max(var_40, (~var_1)));
                        }
                        for (int i_17 = 1; i_17 < 19;i_17 += 1)
                        {
                            arr_60 [i_0] [i_0] [9] [i_14 + 2] [i_17] [i_17] = (((-21 ^ ((21 ? 4294967285 : 1)))));
                            var_41 ^= (min((((((18446744073709551615 ? var_6 : 2018941504)) + (833717401 > 111)))), ((1189338155 ? var_5 : -690488714))));
                            var_42 ^= 28;
                        }
                        arr_61 [i_0] = (min((max(var_3, var_8)), ((92 ? var_0 : 3502963699))));
                        var_43 = var_9;

                        for (int i_18 = 0; i_18 < 20;i_18 += 1)
                        {
                            var_44 = var_1;
                            var_45 = (((((var_5 ? 0 : 50105))) ? (((min(12462, 65535)))) : (var_9 | var_3)));
                            var_46 = (max(var_46, (((((min(174, var_13))) ? (min(var_15, 28)) : ((65535 ? ((var_12 ? 222 : var_8)) : (!-8198023968905726846))))))));
                            arr_64 [i_0] = var_3;
                        }
                    }
                    for (int i_19 = 1; i_19 < 17;i_19 += 1)
                    {
                        arr_68 [i_0] [i_1] [i_1] [i_1] = 0;
                        var_47 = (min(-13, (~var_4)));
                    }
                    var_48 = (max(var_48, (((!((min(var_10, ((4010704061 ? var_6 : 108))))))))));
                }
            }
        }
    }
    var_49 = (((((199 ? 30930 : -9192))) + ((max(8198023968905726829, 15359427694468061290)))));
    #pragma endscop
}
