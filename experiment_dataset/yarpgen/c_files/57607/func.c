/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57607
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
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] [i_0 - 1] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0])) & ((+(((/* implicit */int) (short)-1))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_3)) ? (4160455984U) : (1535025145U)))));
        /* LoopSeq 2 */
        for (short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((unsigned int) ((unsigned char) var_3))) != (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                var_15 *= ((unsigned char) -4278253098792353151LL);
                arr_12 [i_2] = ((/* implicit */unsigned int) (signed char)82);
            }
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                /* LoopSeq 4 */
                for (signed char i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
                {
                    arr_19 [i_3] = var_4;
                    var_16 = ((/* implicit */signed char) max((min((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) 2805272656U)) ? (((/* implicit */long long int) 1471091649U)) : (-1LL))))), (((/* implicit */long long int) arr_18 [i_3] [i_1] [i_3] [i_3]))));
                    arr_20 [i_0] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), ((((!(((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196))) : (var_4)))));
                    arr_23 [i_3] [i_1] [i_1 - 1] [i_1] [i_3] [i_5] = ((/* implicit */unsigned char) ((((4294967281U) | (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_11 [i_3] [i_1]))))));
                }
                for (signed char i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) var_14)) ? (2665357019U) : (var_4))))), (min((((((/* implicit */_Bool) var_9)) ? (arr_15 [i_0] [i_0] [i_3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned int) (unsigned char)244))))));
                    arr_26 [i_3] [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(arr_25 [i_0] [i_3] [i_3] [i_3])));
                }
                for (signed char i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                {
                    var_19 &= ((/* implicit */short) (unsigned char)145);
                    arr_29 [i_0] [i_3] [i_3] [i_3] [i_7] = var_5;
                    var_20 = ((/* implicit */long long int) ((unsigned char) ((arr_9 [i_0 - 1] [i_3] [i_3]) | (arr_9 [i_0 + 2] [i_1] [i_3]))));
                }
                var_21 = ((/* implicit */unsigned int) min((var_21), (max((((((var_3) ^ (1154105962U))) & (max((var_12), (var_4))))), (((((/* implicit */_Bool) ((unsigned char) 2042628461U))) ? (max((8160U), (((/* implicit */unsigned int) (unsigned char)244)))) : (((unsigned int) (short)-23310))))))));
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((short) (unsigned char)255)))));
            }
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((unsigned int) max((((((/* implicit */_Bool) var_9)) ? (arr_10 [i_0] [i_0] [i_0] [i_1]) : (4014227948U))), (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (925120350U)))))))));
        }
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_9 = 3; i_9 < 23; i_9 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        var_24 += ((/* implicit */unsigned char) (-(((3324972242U) >> (((1154105962U) - (1154105962U)))))));
                        var_25 *= ((/* implicit */unsigned char) ((long long int) arr_1 [i_9]));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((((unsigned int) (unsigned char)255)) ^ (((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74)))))))));
                        arr_40 [i_8] [i_8] [i_8] [i_10] [i_11] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)-23571))) ? (6LL) : (((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_8] [(short)2] [i_11])))))))) ? (var_1) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_0 + 2] [i_8] [i_0 + 2] [i_10] [i_11])) ? (2719383304U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_9])) < (((/* implicit */int) var_9)))))) : (min((3582843153U), (((/* implicit */unsigned int) var_2))))))));
                    }
                    var_27 &= ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) 2212991040U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_4) : (835152950U)))) ? (((unsigned int) (unsigned char)49)) : (min((((/* implicit */unsigned int) var_9)), (arr_35 [i_0] [i_0] [i_9 + 2] [i_10]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((32767U) + (4294967282U)))) < (max((((/* implicit */long long int) var_7)), (arr_6 [i_0] [i_0]))))))));
                }
                for (short i_12 = 1; i_12 < 24; i_12 += 3) /* same iter space */
                {
                    var_28 ^= ((/* implicit */long long int) var_8);
                    var_29 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) ((((/* implicit */_Bool) -2466247302618548200LL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_8] [i_12])))))));
                }
                for (short i_13 = 1; i_13 < 24; i_13 += 3) /* same iter space */
                {
                    arr_45 [i_8] [i_9] [i_8] = 1047370527U;
                    var_30 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_2)) ? (-7100842951171327432LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_4) | (var_4)))))))));
                }
                var_31 = ((/* implicit */unsigned int) max((((((long long int) (unsigned char)103)) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 3283361877U)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_0] [i_8] [i_8])) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) arr_43 [i_8] [i_8] [i_8]))))))))));
                arr_46 [i_8] [i_8] [i_8] = ((((((/* implicit */_Bool) 3582843145U)) ? (3140861334U) : (max((var_3), (0U))))) * (arr_11 [i_0] [i_8]));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_14 = 1; i_14 < 24; i_14 += 4) /* same iter space */
                {
                    var_32 = ((/* implicit */long long int) max((var_32), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (1154105936U)))) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */long long int) var_1)) : (arr_44 [i_0] [i_8] [i_14] [i_14] [i_9 - 1] [i_0])))))));
                    arr_49 [i_8] [i_9] [6U] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */int) var_9)) | (((/* implicit */int) (short)127)))) : (((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */int) (unsigned char)212)) : (((/* implicit */int) (short)-127))))));
                }
                for (short i_15 = 1; i_15 < 24; i_15 += 4) /* same iter space */
                {
                    arr_53 [i_8] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 2056532276U)) ? (((/* implicit */int) arr_47 [i_0] [i_8])) : (((/* implicit */int) arr_34 [20U] [i_0] [i_8] [i_15 + 1])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_16 = 1; i_16 < 22; i_16 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((unsigned char) (-(574352960337634578LL)))))));
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_43 [i_8] [i_8] [i_8])) : (((/* implicit */int) (unsigned char)144))));
                        var_35 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) - ((+(4294967295U)))));
                        var_36 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3534750901U))));
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_51 [(signed char)6])))))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        arr_58 [i_9] [i_8] [i_8] [i_15] [i_17] = ((/* implicit */long long int) ((unsigned int) ((unsigned char) ((unsigned char) 562421474U))));
                        var_38 ^= (((((-(var_5))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) % (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_10)) ? (1154105960U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176))))) : (((4294967282U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)143))))))));
                    }
                    var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) arr_44 [i_0] [i_0] [i_8] [i_9] [i_9] [i_9]))));
                    var_40 *= ((/* implicit */long long int) ((var_6) < (((unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                }
            }
            for (long long int i_18 = 1; i_18 < 21; i_18 += 3) 
            {
                arr_63 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) var_1);
                var_41 = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_57 [i_8])) : (((/* implicit */int) (unsigned char)66))))) / (((((/* implicit */_Bool) arr_59 [i_8] [i_8] [i_18 + 1])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_7))))));
            }
            var_42 += ((max((arr_27 [i_8] [i_0 + 1] [i_0] [i_0]), (((/* implicit */long long int) var_8)))) % (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_0] [i_0 + 2]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [(short)6] [(short)6]))))))));
            /* LoopNest 2 */
            for (unsigned int i_19 = 0; i_19 < 25; i_19 += 1) 
            {
                for (unsigned int i_20 = 0; i_20 < 25; i_20 += 3) 
                {
                    {
                        var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) 579473291U))) != (min((((/* implicit */long long int) (unsigned char)45)), ((~(var_13))))))))));
                        arr_71 [i_8] [i_19] [i_8] [i_8] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80))) | (579473271U))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_21 = 0; i_21 < 25; i_21 += 4) 
                        {
                            var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)4457)))))));
                            var_45 = ((/* implicit */long long int) var_10);
                        }
                        for (signed char i_22 = 0; i_22 < 25; i_22 += 1) 
                        {
                            arr_77 [(short)24] [i_19] [i_20] &= ((/* implicit */short) max(((!(((/* implicit */_Bool) 0U)))), ((!(((/* implicit */_Bool) var_8))))));
                            var_46 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((var_0), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) var_8))))) ? (((unsigned int) arr_56 [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 2])) : ((-(1U)))));
                            var_47 -= ((/* implicit */unsigned char) 1329386922U);
                        }
                    }
                } 
            } 
        }
    }
    /* LoopSeq 2 */
    for (unsigned char i_23 = 0; i_23 < 16; i_23 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_24 = 1; i_24 < 15; i_24 += 3) 
        {
            for (unsigned char i_25 = 1; i_25 < 15; i_25 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_26 = 0; i_26 < 16; i_26 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_27 = 0; i_27 < 16; i_27 += 3) 
                        {
                            var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_86 [i_24 + 1]), (((/* implicit */short) (signed char)13))))) ? (((long long int) 51293384U)) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_86 [i_25 + 1])))))))));
                            var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) var_2))));
                            var_50 += ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) ((var_14) >> (((2097151U) - (2097123U))))))) & (((((/* implicit */_Bool) ((unsigned int) 51293384U))) ? (((/* implicit */int) arr_3 [i_23] [i_26])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) arr_68 [i_23] [i_24] [i_23] [i_25] [i_26] [i_27]))))))));
                        }
                        for (unsigned int i_28 = 3; i_28 < 15; i_28 += 4) 
                        {
                            arr_95 [i_23] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3059906214U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (127U)))) ? (((760216394U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4019008491U))))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (510773783U) : (4137959840U))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))) : (((arr_78 [i_28]) & (((/* implicit */long long int) ((/* implicit */int) ((var_4) == (14U)))))))));
                            var_51 += ((((/* implicit */_Bool) (unsigned char)112)) ? (3107198144U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14124))));
                        }
                        var_52 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))) != (-6LL)))) ^ (((/* implicit */int) max((((/* implicit */short) var_2)), (arr_86 [i_23])))))))));
                        var_53 = arr_88 [i_23] [i_24] [i_25] [(unsigned char)3] [i_26] [i_26];
                    }
                    for (unsigned int i_29 = 1; i_29 < 14; i_29 += 4) 
                    {
                        var_54 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)0))));
                        var_55 = ((min((((((/* implicit */_Bool) (unsigned char)237)) ? (var_1) : (51293357U))), (((unsigned int) (unsigned char)8)))) | (((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) var_5)))))));
                    }
                    for (unsigned char i_30 = 0; i_30 < 16; i_30 += 4) 
                    {
                        var_56 = ((/* implicit */unsigned int) max((var_56), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_31 [i_24] [i_24] [i_30])))))));
                        arr_102 [i_23] [i_23] [i_23] [i_23] [i_30] &= var_6;
                        /* LoopSeq 2 */
                        for (unsigned char i_31 = 0; i_31 < 16; i_31 += 2) 
                        {
                            var_57 = ((/* implicit */short) 3546606088U);
                            var_58 ^= var_8;
                            var_59 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_82 [i_23] [i_23] [i_25])) : (((/* implicit */int) ((signed char) 3546606088U))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) % (var_1)))))));
                        }
                        for (unsigned int i_32 = 2; i_32 < 15; i_32 += 3) 
                        {
                            var_60 = ((/* implicit */unsigned int) max((var_60), (min((((((/* implicit */_Bool) (short)25598)) ? (arr_65 [i_24 - 1] [i_25 - 1] [i_30]) : (arr_65 [i_24 - 1] [i_25 - 1] [i_30]))), ((-(((unsigned int) 3534750875U))))))));
                            var_61 += (-(max((min((4294967295U), (arr_69 [i_30]))), (((((/* implicit */_Bool) (unsigned char)66)) ? (3546606094U) : (279449185U))))));
                        }
                    }
                    arr_107 [i_23] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_23] [i_23] [i_23])) ? (min((((((/* implicit */_Bool) (unsigned char)35)) ? (696069967U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))), ((~(var_12))))) : (((unsigned int) ((((/* implicit */_Bool) (signed char)-16)) ? (3650150052U) : (var_1))))));
                    var_62 ^= 4294967295U;
                    var_63 &= ((/* implicit */unsigned int) max(((unsigned char)250), (((/* implicit */unsigned char) (signed char)91))));
                }
            } 
        } 
        var_64 |= ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_14))))))), ((~(((long long int) (unsigned char)12))))));
    }
    for (unsigned char i_33 = 0; i_33 < 14; i_33 += 3) 
    {
        var_65 = ((/* implicit */unsigned int) max((var_65), (((unsigned int) (-(((/* implicit */int) (unsigned char)0)))))));
        var_66 ^= (((((!(((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) (unsigned char)193)))) ? (((((/* implicit */_Bool) var_5)) ? ((-(var_14))) : (((/* implicit */long long int) ((((/* implicit */int) (short)-12208)) - (((/* implicit */int) var_9))))))) : (((var_0) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-56))))));
        /* LoopNest 2 */
        for (long long int i_34 = 0; i_34 < 14; i_34 += 3) 
        {
            for (unsigned char i_35 = 1; i_35 < 13; i_35 += 1) 
            {
                {
                    arr_116 [i_33] [i_34] [i_33] = ((/* implicit */unsigned int) ((short) (~(((((/* implicit */_Bool) var_7)) ? (var_6) : (var_4))))));
                    var_67 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (8191LL) : (((((/* implicit */_Bool) var_11)) ? (max((var_14), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_57 [i_34])))))))));
                    var_68 = ((/* implicit */signed char) min((var_68), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_86 [i_33]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : ((-(((unsigned int) arr_13 [i_35] [i_33] [i_33])))))))));
                    var_69 = ((/* implicit */unsigned int) min((var_69), (((/* implicit */unsigned int) (signed char)24))));
                }
            } 
        } 
    }
    var_70 ^= var_5;
}
