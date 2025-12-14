/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60234
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_0))));
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7824310816977544547ULL)) ? (((/* implicit */int) (short)-21667)) : (((/* implicit */int) var_17)))))))) & ((((-(((/* implicit */int) (short)21667)))) & (((/* implicit */int) ((short) var_3))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */short) arr_2 [i_0]);
                    arr_10 [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [(_Bool)1]);
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (((((~(((/* implicit */int) ((var_9) >= (arr_6 [i_0] [i_0] [i_2] [i_2])))))) + (2147483647))) >> ((((-(((/* implicit */int) var_5)))) + (12202))))))));
                }
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            {
                                arr_20 [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_3] [i_4] [i_5] [i_1]))));
                                arr_21 [i_1] [i_0] [i_1] [i_4] [i_1] = (~(((/* implicit */int) arr_3 [i_1] [i_1] [i_0])));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (2609457589U) : (((/* implicit */unsigned int) var_9))))));
                    var_24 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [10U]))) | (arr_4 [9] [i_0])));
                    var_25 += ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) (!(((/* implicit */_Bool) (short)21667))))));
                }
                /* vectorizable */
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_6])) ? (arr_25 [i_0] [i_0] [22]) : (arr_25 [i_0] [i_1] [i_1]))))));
                    var_27 ^= (~(((((/* implicit */_Bool) 16773120)) ? (((/* implicit */unsigned int) 370423199)) : (arr_18 [i_1] [i_1]))));
                    /* LoopSeq 4 */
                    for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                        {
                            var_28 *= ((/* implicit */unsigned long long int) (_Bool)0);
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (~(arr_11 [i_6] [i_1] [i_1] [i_1]))))));
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) var_17))));
                        }
                        for (int i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
                        {
                            arr_34 [i_0] [3] [i_0] [i_7] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_6]))));
                            arr_35 [i_0] [i_0] [i_6] [i_7] [i_0] &= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_13 [i_0] [i_1] [i_6] [(short)5] [i_7] [i_9])) * (((/* implicit */int) arr_33 [i_0] [i_1] [i_1] [i_9]))))));
                        }
                        var_31 *= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_6]);
                    }
                    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        arr_39 [i_0] [i_0] [i_0] [(_Bool)1] = (-(((/* implicit */int) (_Bool)0)));
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_32 &= arr_28 [i_6] [9] [i_6] [i_10];
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [20] [i_6])))))));
                            var_34 = ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_1] [i_6] [(unsigned char)13] [i_11] [i_11])) ? (((/* implicit */int) arr_5 [i_6] [(short)13] [i_6])) : (arr_19 [i_0] [i_1] [i_1] [i_1] [i_6] [i_1] [i_11]));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_44 [5U] [i_1] [i_0] [i_0] [i_6] = arr_19 [i_0] [i_1] [i_1] [i_10] [i_1] [i_12] [i_0];
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) 7168))));
                        }
                    }
                    for (int i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_49 [i_14] [i_14] [i_14] [i_14] [i_0] = ((/* implicit */int) var_10);
                            var_36 *= ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
                            var_37 ^= 9420156803024616316ULL;
                            arr_50 [i_0] [i_0] [i_1] [i_6] [2ULL] [i_0] = (+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])));
                        }
                        var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        arr_51 [i_0] [i_0] [i_0] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) <= (arr_31 [i_0])));
                    }
                    for (unsigned char i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned char) (((_Bool)1) ? (arr_47 [i_15] [i_15] [i_6] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0)))))));
                        arr_54 [i_0] [i_0] [i_1] [i_6] [i_0] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (~(-1091714787)))) : (arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 1) 
                        {
                            arr_58 [i_0] [i_1] [i_15] [i_16] = ((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) < (arr_15 [4ULL] [i_1] [i_1] [i_1] [i_1] [i_1]));
                            arr_59 [i_0] [i_0] [i_6] [i_0] [i_0] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)21667))) > (((((/* implicit */_Bool) -387979840)) ? (552752011U) : (((/* implicit */unsigned int) 387979857))))));
                            arr_60 [i_15] [(_Bool)1] [i_15] [i_0] [(_Bool)1] [(_Bool)0] [(_Bool)1] = ((/* implicit */int) var_10);
                            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                        }
                        arr_61 [i_0] [i_1] [i_6] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) (((((~(1263905776457373043LL))) + (9223372036854775807LL))) >> (((arr_32 [i_0] [i_1] [i_6] [i_6] [i_6] [i_0]) + (1011973352501183495LL)))))) : (((/* implicit */unsigned long long int) (((((~(1263905776457373043LL))) + (9223372036854775807LL))) >> (((((arr_32 [i_0] [i_1] [i_6] [i_6] [i_6] [i_0]) + (1011973352501183495LL))) - (4301107948072891315LL))))));
                    }
                    arr_62 [i_0] [i_0] [i_0] = ((unsigned char) arr_46 [i_0] [i_0] [i_1] [i_0]);
                }
                /* LoopSeq 2 */
                for (int i_17 = 0; i_17 < 25; i_17 += 4) 
                {
                    var_41 = ((/* implicit */int) min((var_41), ((((+(((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_17])))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_17])) || (((/* implicit */_Bool) arr_52 [i_0] [i_17] [i_0] [i_0] [i_0] [i_0])))))))));
                    arr_66 [i_0] [i_1] [i_17] [i_0] = ((/* implicit */short) (+((+(var_13)))));
                }
                for (int i_18 = 0; i_18 < 25; i_18 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (int i_20 = 0; i_20 < 25; i_20 += 2) 
                        {
                            {
                                arr_77 [i_0] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) var_10);
                                var_42 = (+(((int) (!(((/* implicit */_Bool) arr_57 [i_0] [i_0] [i_18] [i_18] [i_18]))))));
                                arr_78 [2LL] [i_20] [i_19] [i_0] [i_1] [(short)17] [(short)17] = ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_5)) ? (arr_30 [i_0] [i_1] [i_18] [i_19] [i_0] [i_0]) : (((/* implicit */unsigned int) arr_6 [i_19] [i_19] [i_18] [i_19])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
                                var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) (-(((((/* implicit */unsigned long long int) arr_25 [i_19] [i_20] [i_18])) | (arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                    arr_79 [i_0] [i_18] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_0] [i_1] [(_Bool)1] [i_0])) ? (((((/* implicit */_Bool) -370423200)) ? (((/* implicit */int) var_17)) : (2071474565))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_1] [i_18])) : (arr_63 [i_0] [i_1] [i_18] [i_18])))))) : ((+(arr_8 [i_0] [i_0] [i_0])))));
                }
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 25; i_21 += 1) 
                {
                    for (unsigned char i_22 = 3; i_22 < 23; i_22 += 4) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned int) ((int) ((arr_36 [i_0] [20ULL] [20ULL]) | (arr_36 [9U] [i_1] [i_1]))));
                            var_45 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_63 [i_22 + 2] [i_22 - 3] [i_22 - 1] [i_22 - 1])))) ? (((arr_53 [i_21] [i_1] [i_21] [i_22 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24531))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) / (arr_84 [(short)4]))))));
                            /* LoopSeq 1 */
                            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                            {
                                var_46 = (short)-21665;
                                arr_87 [i_0] [i_0] [i_21] [i_21] [i_21] = ((/* implicit */short) (~(var_16)));
                                var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) ((((/* implicit */_Bool) (~(arr_38 [i_22 + 2] [i_22 - 1] [i_22 - 3] [i_22 - 3])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_72 [i_22] [i_22 - 3] [i_22 - 1] [18]))))) : (2901389078U))))));
                                arr_88 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [(short)15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? ((+(((/* implicit */int) arr_56 [i_22 - 3] [i_22 - 3] [i_22 + 1] [i_22 - 1])))) : (((((/* implicit */_Bool) arr_56 [i_22 - 2] [i_22 - 3] [i_22 - 1] [i_22 - 3])) ? (arr_37 [i_22 - 3] [i_22 + 1]) : (arr_37 [i_22 + 1] [i_22 - 2])))));
                                arr_89 [i_0] [i_1] [i_21] [i_22 + 2] [i_23] = (-(((((arr_6 [i_0] [i_22 + 1] [i_22 + 1] [i_0]) + (2147483647))) << (((((/* implicit */int) var_17)) - (235))))));
                            }
                            /* LoopSeq 3 */
                            for (unsigned char i_24 = 0; i_24 < 25; i_24 += 1) /* same iter space */
                            {
                                arr_92 [i_0] [i_1] [i_21] [i_22 + 2] [i_21] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) (-((-(((((/* implicit */int) var_5)) >> (((arr_84 [i_0]) - (1396599739U)))))))))) : (((/* implicit */short) (-((-(((((/* implicit */int) var_5)) >> (((((arr_84 [i_0]) - (1396599739U))) - (3660068680U))))))))));
                                var_48 = ((/* implicit */int) min((var_48), ((+(((/* implicit */int) arr_1 [22]))))));
                                var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_72 [i_22 - 3] [i_22 - 3] [i_22 - 3] [i_0])) : (-16773120)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_21] [i_22 + 1] [i_0])) > (1295378892))))) : (((((/* implicit */_Bool) arr_3 [i_21] [i_22 - 2] [i_0])) ? (arr_23 [i_22 - 3] [i_1]) : (arr_83 [i_0] [(unsigned char)13] [i_22 + 1] [i_0])))));
                            }
                            /* vectorizable */
                            for (unsigned char i_25 = 0; i_25 < 25; i_25 += 1) /* same iter space */
                            {
                                var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) (~(arr_8 [i_22 + 1] [i_22 - 1] [i_22 + 2]))))));
                                var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) (+(arr_26 [i_22] [i_22] [i_22] [i_22]))))));
                                var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [23] [i_21] [i_22 + 1] [i_22 - 3])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)21667))) - (6869327672498299665ULL))) : (((/* implicit */unsigned long long int) ((int) var_3)))));
                            }
                            for (unsigned char i_26 = 0; i_26 < 25; i_26 += 1) /* same iter space */
                            {
                                arr_97 [i_0] = ((/* implicit */unsigned int) var_5);
                                var_53 = ((/* implicit */int) (-((-(arr_68 [i_0])))));
                                arr_98 [i_0] [18] &= ((/* implicit */int) ((unsigned char) ((unsigned long long int) (~(((/* implicit */int) var_1))))));
                            }
                            /* LoopSeq 3 */
                            for (int i_27 = 0; i_27 < 25; i_27 += 1) 
                            {
                                arr_102 [i_1] [i_22 + 2] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_57 [i_0] [i_22 - 2] [i_22 - 3] [i_22 - 3] [i_22 - 3])))) ? ((~(arr_57 [i_0] [i_22 - 2] [i_22 - 3] [i_22 - 2] [i_22]))) : ((+(arr_57 [i_0] [i_22 - 2] [i_22 - 2] [i_22] [i_22 - 2])))));
                                arr_103 [i_0] = ((/* implicit */short) ((arr_11 [i_0] [i_1] [i_22 + 1] [i_22 + 2]) + (((/* implicit */long long int) (~((-(((/* implicit */int) (_Bool)1)))))))));
                                arr_104 [i_0] [i_0] = ((int) (!(((/* implicit */_Bool) (short)21663))));
                            }
                            /* vectorizable */
                            for (short i_28 = 0; i_28 < 25; i_28 += 1) 
                            {
                                var_54 += ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_12))))));
                                var_55 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_22 - 2] [i_22 - 3] [i_22 - 2] [i_22 + 1])) ? (arr_6 [i_22 - 1] [i_22 - 2] [i_22] [i_22 - 1]) : (arr_6 [i_22 + 2] [i_22 - 1] [23ULL] [i_22 - 2])));
                                var_56 = ((/* implicit */short) (-(arr_40 [i_0] [i_1] [i_22 - 3])));
                            }
                            for (unsigned int i_29 = 0; i_29 < 25; i_29 += 1) 
                            {
                                var_57 = ((/* implicit */unsigned int) ((int) ((int) 1376546652)));
                                var_58 = ((/* implicit */unsigned char) ((((2097151) % (arr_16 [i_22] [i_22] [i_22 - 3] [i_22 - 2] [i_22 + 2]))) < (arr_16 [i_22] [i_22] [i_22 - 2] [i_22] [i_22 + 2])));
                                var_59 ^= ((int) (-(var_15)));
                                var_60 = ((/* implicit */_Bool) max((var_60), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_46 [i_22 + 1] [i_22 - 1] [i_22] [12U])) ? (((/* implicit */int) arr_46 [i_22 - 2] [i_22 + 1] [i_22 - 2] [0U])) : (((/* implicit */int) arr_46 [i_22 - 2] [i_22 + 2] [i_22] [(short)0])))))))));
                                arr_111 [i_0] [i_1] [i_1] [16U] [i_22] [(unsigned char)2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_46 [i_0] [i_1] [i_21] [24ULL])) ? (var_2) : (((/* implicit */unsigned long long int) var_10))))))) && (((/* implicit */_Bool) (short)-27742))));
                            }
                        }
                    } 
                } 
                var_61 = ((/* implicit */int) arr_33 [i_0] [i_1] [i_0] [i_0]);
            }
        } 
    } 
    var_62 = ((/* implicit */unsigned int) min((var_62), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 867532759)) ? (((/* implicit */int) var_17)) : ((+(var_19))))))));
}
