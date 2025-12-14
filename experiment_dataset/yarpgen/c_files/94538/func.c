/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94538
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 *= ((/* implicit */unsigned char) arr_2 [i_0] [i_1]);
                arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((signed char) (short)-20921))) + (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [(short)3])) : (((/* implicit */int) arr_2 [i_1] [i_0]))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (var_15)));
                                arr_12 [i_3] [(signed char)16] [i_4] = ((/* implicit */unsigned char) (short)6933);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_19 [i_6] [i_6] [i_6 + 2] [i_6 + 1] [i_6 + 2])), (var_1)))) >> (((((/* implicit */int) ((unsigned char) arr_19 [(signed char)16] [i_6] [i_6 + 1] [i_6 + 2] [i_6 - 1]))) - (34)))));
                                var_19 = ((/* implicit */unsigned char) var_12);
                                arr_23 [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) ((short) (-((~(((/* implicit */int) arr_0 [i_5])))))));
                                arr_24 [i_5] [i_1] [i_5] [i_6] = ((unsigned char) (signed char)1);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) arr_14 [(signed char)1] [(signed char)1] [(unsigned char)16] [(signed char)1]);
                }
                for (short i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                    {
                        var_21 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-26751))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            arr_36 [i_0] [i_0] [i_9] [i_10] [i_10] [i_8] = ((/* implicit */short) ((signed char) var_12));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_0])) ? (((((/* implicit */int) var_13)) - (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_11 [i_10] [i_10] [i_10] [i_9] [i_8] [i_1] [i_0]))));
                        }
                        arr_37 [(short)16] = ((/* implicit */short) ((((/* implicit */int) arr_26 [i_0] [i_0] [i_8])) ^ (((/* implicit */int) var_9))));
                        arr_38 [(unsigned char)16] [i_1] [(signed char)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_9] [i_8] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_35 [i_9] [i_8] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_35 [i_9] [i_8] [(signed char)3] [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        arr_41 [i_0] [i_1] [i_1] [i_11] = ((/* implicit */short) var_2);
                        var_23 = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0] [i_11]))));
                    }
                    /* vectorizable */
                    for (short i_12 = 3; i_12 < 16; i_12 += 1) 
                    {
                        arr_46 [i_1] = arr_17 [i_0] [i_0] [i_12 - 3] [i_12 - 1];
                        var_24 = ((short) ((((/* implicit */int) arr_33 [i_0] [i_8])) <= (((/* implicit */int) arr_22 [i_0] [i_0] [(short)2] [i_8] [i_12 - 1]))));
                        arr_47 [i_0] [i_8] [i_8] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)-26772)) - (((((/* implicit */int) arr_5 [i_1])) + (((/* implicit */int) (unsigned char)173))))));
                        arr_48 [i_0] [i_0] [i_8] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((signed char) (signed char)28));
                    }
                    arr_49 [i_0] [(signed char)13] [i_1] [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_0] [(signed char)2] [i_8])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)119)) >= (((/* implicit */int) (short)14944))))) : (((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_0])))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_13 = 3; i_13 < 8; i_13 += 3) 
    {
        for (short i_14 = 1; i_14 < 10; i_14 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (short i_17 = 0; i_17 < 11; i_17 += 2) 
                            {
                                arr_63 [i_14] [i_14] = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) (short)-26751)))));
                                var_25 = ((/* implicit */short) min((((((/* implicit */int) arr_27 [i_14 - 1])) % (((/* implicit */int) var_11)))), (((/* implicit */int) arr_53 [i_13 - 2] [i_13 - 1]))));
                            }
                            arr_64 [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) == (((((/* implicit */int) var_3)) + (((/* implicit */int) var_7))))))) : (((((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_10))))) % (((/* implicit */int) var_13))))));
                        }
                    } 
                } 
                var_26 *= ((/* implicit */signed char) var_7);
                arr_65 [i_14] [i_14] = ((/* implicit */short) (-(((((/* implicit */int) max(((short)377), (((/* implicit */short) (unsigned char)212))))) - (((/* implicit */int) max(((unsigned char)78), (var_1))))))));
                arr_66 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)-97)))) && (((/* implicit */_Bool) (signed char)-62))))) * (((/* implicit */int) ((short) (~(((/* implicit */int) var_4))))))));
                /* LoopNest 2 */
                for (unsigned char i_18 = 0; i_18 < 11; i_18 += 2) 
                {
                    for (short i_19 = 0; i_19 < 11; i_19 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_20 = 0; i_20 < 11; i_20 += 2) 
                            {
                                arr_74 [i_13] [i_13] [i_19] [i_19] [i_14] = ((/* implicit */unsigned char) var_0);
                                arr_75 [i_13] [i_20] [i_18] [i_14] [i_20] [i_13] = arr_54 [i_13] [i_13];
                            }
                            /* vectorizable */
                            for (unsigned char i_21 = 0; i_21 < 11; i_21 += 1) 
                            {
                                var_27 = ((/* implicit */unsigned char) min((var_27), (((unsigned char) (!(((/* implicit */_Bool) (signed char)-37)))))));
                                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)192))))) ? (((((/* implicit */int) arr_77 [i_13] [i_13] [i_13] [i_18] [(signed char)0] [(unsigned char)8] [i_21])) + (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_22 [i_13 - 2] [i_14 - 1] [i_18] [i_19] [i_21]))));
                            }
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_22 = 0; i_22 < 11; i_22 += 3) 
                            {
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_16 [i_13] [i_13 + 2] [i_13 - 3]))));
                                var_30 = ((/* implicit */signed char) ((short) arr_21 [i_14 + 1] [i_14 + 1] [i_22]));
                                arr_82 [i_22] [(signed char)2] [i_14] [i_14] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)6383))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)377))));
                            }
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) var_13))));
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_13] [i_19])) ? (((/* implicit */int) arr_32 [i_13 - 2] [i_13 - 2] [i_13 - 2] [i_19] [i_13 - 2] [i_19])) : ((((~(((/* implicit */int) (short)-26486)))) >> (((((/* implicit */int) min((((/* implicit */short) var_15)), (var_0)))) + (115)))))));
                            arr_83 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_14 + 1] [i_13])) ? (((/* implicit */int) arr_52 [i_14 + 1] [i_14])) : (((/* implicit */int) arr_26 [i_14 + 1] [i_18] [i_18]))))) ? (((/* implicit */int) arr_8 [i_19] [(signed char)13] [i_14 + 1] [(signed char)13])) : (((/* implicit */int) arr_60 [i_14 + 1] [i_13 + 3]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_23 = 0; i_23 < 21; i_23 += 3) 
    {
        for (unsigned char i_24 = 0; i_24 < 21; i_24 += 3) 
        {
            for (signed char i_25 = 0; i_25 < 21; i_25 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_26 = 0; i_26 < 21; i_26 += 2) 
                    {
                        for (unsigned char i_27 = 0; i_27 < 21; i_27 += 4) 
                        {
                            {
                                var_33 = arr_86 [i_25];
                                var_34 *= ((/* implicit */unsigned char) max((((((/* implicit */int) arr_89 [i_23] [i_23] [i_25])) >> (((((/* implicit */int) arr_92 [i_27] [i_26] [i_24] [i_23])) + (98))))), (((/* implicit */int) var_12))));
                                arr_95 [i_23] [i_24] [i_25] [i_25] [i_27] &= ((signed char) ((((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (signed char)-86)))) | (((/* implicit */int) min((var_7), (((/* implicit */short) (signed char)127)))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */signed char) var_13);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_28 = 0; i_28 < 23; i_28 += 3) 
    {
        for (unsigned char i_29 = 0; i_29 < 23; i_29 += 3) 
        {
            for (short i_30 = 2; i_30 < 21; i_30 += 3) 
            {
                {
                    arr_105 [(signed char)10] [(short)2] [i_28] [(signed char)0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) var_3)), (var_7)))))))));
                    arr_106 [i_28] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)63))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_31 = 0; i_31 < 25; i_31 += 2) 
    {
        arr_111 [i_31] = ((/* implicit */short) ((((/* implicit */int) (signed char)73)) % (((/* implicit */int) (signed char)-120))));
        arr_112 [i_31] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_107 [i_31] [i_31])))) | (((/* implicit */int) var_3))));
        /* LoopSeq 1 */
        for (signed char i_32 = 0; i_32 < 25; i_32 += 3) 
        {
            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) var_0))))))))));
            var_37 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_107 [i_31] [i_32]))));
        }
        arr_115 [i_31] [i_31] = ((/* implicit */signed char) ((unsigned char) arr_108 [i_31]));
        /* LoopNest 2 */
        for (unsigned char i_33 = 0; i_33 < 25; i_33 += 4) 
        {
            for (short i_34 = 3; i_34 < 24; i_34 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_35 = 0; i_35 < 25; i_35 += 3) 
                    {
                        for (signed char i_36 = 0; i_36 < 25; i_36 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */short) ((((/* implicit */int) var_12)) & (((((/* implicit */int) var_5)) << (((((/* implicit */int) (short)-10467)) + (10472)))))));
                                arr_127 [i_36] [i_35] [i_31] [i_33] [i_31] = ((/* implicit */signed char) ((short) arr_122 [i_31] [i_33] [i_31] [i_33]));
                            }
                        } 
                    } 
                    arr_128 [i_31] [i_31] [i_34] = ((/* implicit */short) arr_109 [i_34]);
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_9))));
                    /* LoopSeq 2 */
                    for (short i_37 = 0; i_37 < 25; i_37 += 3) 
                    {
                        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_109 [i_31])) ? (((/* implicit */int) arr_120 [i_34 - 1] [i_34 + 1] [i_34 - 3] [i_34 + 1])) : (((/* implicit */int) ((short) arr_129 [i_31] [i_33] [i_31] [i_31])))));
                        var_41 *= ((/* implicit */short) (signed char)75);
                        arr_131 [i_33] [i_33] [i_31] = ((/* implicit */short) ((((/* implicit */int) ((signed char) (unsigned char)108))) <= (((((/* implicit */int) (unsigned char)167)) >> (((((/* implicit */int) var_1)) - (41)))))));
                        arr_132 [i_31] [i_33] [i_33] [i_34] [i_33] [i_31] = ((/* implicit */short) var_10);
                        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_7))))) < (((((/* implicit */int) var_14)) << (((((/* implicit */int) var_6)) - (3485))))))))));
                    }
                    for (signed char i_38 = 0; i_38 < 25; i_38 += 3) 
                    {
                        var_43 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                        arr_135 [i_33] [i_34 - 1] [i_33] [i_31] = ((short) var_1);
                        arr_136 [i_34 + 1] [i_34 + 1] = var_0;
                    }
                    arr_137 [i_34] [i_33] [i_33] [i_31] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_108 [i_31])) ? (((/* implicit */int) ((signed char) (short)-10467))) : (((((/* implicit */int) var_3)) >> (((((/* implicit */int) (short)-377)) + (402)))))));
                }
            } 
        } 
    }
}
