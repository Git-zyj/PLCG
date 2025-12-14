/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9113
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
    var_19 = ((/* implicit */_Bool) (((!((_Bool)1))) ? (((long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_17))))) : (((/* implicit */long long int) (+(((((/* implicit */int) var_6)) ^ (((/* implicit */int) (unsigned char)23)))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_6 [i_1] [i_1] [i_2] [i_1]);
                    arr_10 [i_1] = ((/* implicit */signed char) ((_Bool) var_6));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_3])) && (((/* implicit */_Bool) (unsigned char)128)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_7)))))) : (arr_8 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3]))))) ? ((+(28ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_3])))))))));
            arr_14 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) min((((((((/* implicit */int) (short)-24540)) + (2147483647))) << (((((/* implicit */int) var_13)) - (19461))))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_3])), (arr_0 [i_0]))))));
        }
    }
    for (unsigned int i_4 = 1; i_4 < 16; i_4 += 4) 
    {
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (unsigned char)255)))))))));
        arr_18 [i_4] = ((/* implicit */short) ((((/* implicit */int) ((arr_17 [i_4 + 2]) || (arr_17 [i_4 - 1])))) != (((/* implicit */int) ((((unsigned long long int) (unsigned char)23)) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_17 [i_4 + 3]))))))))));
    }
    for (unsigned int i_5 = 1; i_5 < 20; i_5 += 2) 
    {
        var_21 -= arr_20 [i_5 - 1] [20LL];
        arr_21 [i_5 + 1] [i_5] = ((/* implicit */unsigned char) arr_20 [i_5] [i_5]);
        arr_22 [i_5] [i_5] = (i_5 % 2 == 0) ? (((/* implicit */unsigned char) ((arr_19 [i_5]) << (((min((((((/* implicit */int) arr_20 [i_5] [i_5])) >> (((arr_19 [i_5 - 1]) - (1265799042))))), (1714240638))) - (24450)))))) : (((/* implicit */unsigned char) ((arr_19 [i_5]) << (((((((min((((((/* implicit */int) arr_20 [i_5] [i_5])) >> (((arr_19 [i_5 - 1]) - (1265799042))))), (1714240638))) - (24450))) + (20527))) - (21))))));
        arr_23 [i_5] = ((/* implicit */unsigned int) ((min((6722595825806602335ULL), (((/* implicit */unsigned long long int) 1170214590)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_19 [i_5 - 1]))))));
        arr_24 [i_5] = ((/* implicit */signed char) max((max((max((var_1), (((/* implicit */unsigned long long int) arr_19 [i_5])))), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) var_17))))))), (((/* implicit */unsigned long long int) -1714240624))));
    }
    for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_7 = 1; i_7 < 10; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((var_22), (arr_16 [i_7 + 2])));
                    arr_32 [i_6] [i_6] [i_8] [i_7 + 1] = min((((((/* implicit */_Bool) arr_31 [i_7 - 1] [i_7 + 3] [i_7 + 3] [i_7 + 3])) ? (arr_31 [i_7 + 1] [i_7 + 3] [i_7 + 1] [i_7 - 1]) : (arr_31 [i_7 + 3] [i_7 + 3] [i_7 + 3] [i_7 + 2]))), (((/* implicit */unsigned long long int) ((((unsigned int) 1714240639)) & (((/* implicit */unsigned int) ((1714240623) / (1170214615))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                var_23 = ((/* implicit */int) var_17);
                /* LoopSeq 2 */
                for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    arr_40 [i_11] [i_11] = ((/* implicit */_Bool) var_14);
                    var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (1170214590)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) - (-1170214611)))) : (min((((/* implicit */unsigned int) arr_30 [i_11] [i_9])), (6U))))) + (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (1714240619))), (min((arr_28 [i_11]), (((/* implicit */int) arr_38 [i_10] [i_9])))))))));
                    arr_41 [i_11] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_6] [i_9] [i_10]))) : (var_2))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6] [i_11]))) : (arr_35 [i_6] [i_6])))))) * (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_6] [i_9] [i_10]))) + (var_4))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_30 [i_10] [i_10])) : (((/* implicit */int) arr_38 [i_6] [i_6])))))))));
                }
                for (short i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((arr_19 [i_6]) | (((((/* implicit */_Bool) arr_19 [i_9])) ? (arr_19 [i_9]) : (arr_19 [i_6]))))))));
                    arr_44 [i_10] [i_9] [i_6] [i_6] = min((((((/* implicit */_Bool) arr_34 [i_10] [i_12])) || (((/* implicit */_Bool) arr_34 [i_10] [i_12])))), ((!(((/* implicit */_Bool) arr_20 [i_12] [i_10])))));
                    /* LoopSeq 3 */
                    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        arr_47 [6U] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_6] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) || (((1714240639) > (((/* implicit */int) (unsigned char)232)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_25 [(_Bool)1]), (((((/* implicit */_Bool) arr_20 [i_10] [i_10])) && (((/* implicit */_Bool) arr_33 [(unsigned char)4] [i_9] [i_10])))))))) : (max((var_1), (((/* implicit */unsigned long long int) arr_15 [i_12]))))));
                        arr_48 [i_9] [i_12] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_6] [i_6]))) % (((1445547042U) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_6] [i_10] [i_13] [i_12])) ? (((/* implicit */int) arr_36 [i_6] [i_10] [i_12])) : (((/* implicit */int) var_16))))))));
                        var_26 = ((/* implicit */short) arr_43 [i_6] [i_9] [i_10] [i_12] [i_12]);
                    }
                    for (int i_14 = 1; i_14 < 9; i_14 += 1) 
                    {
                        var_27 += (((!(((/* implicit */_Bool) min((arr_43 [i_6] [i_6] [i_6] [i_12] [i_12]), (((/* implicit */unsigned char) var_16))))))) && ((!(((/* implicit */_Bool) arr_31 [i_12] [i_14 - 1] [i_14 + 3] [i_14 + 1])))));
                        arr_51 [i_9] [i_9] [i_10] [i_9] [i_9] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_37 [i_6] [i_6] [i_6])) - (((/* implicit */int) arr_37 [i_14] [i_12] [i_6])))) - (((/* implicit */int) ((signed char) var_3)))));
                    }
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        arr_54 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_0);
                        arr_55 [i_15] [i_12] [i_9] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned int) arr_19 [i_6])) - (2177282767U)));
                        var_28 = ((/* implicit */unsigned int) ((((-1170214591) + (1170214607))) + (((arr_28 [i_15]) - (arr_15 [i_10])))));
                    }
                    arr_56 [i_6] [5ULL] [i_6] = ((/* implicit */signed char) (unsigned char)224);
                }
                arr_57 [i_10] [i_9] [i_9] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_52 [i_6] [i_9] [i_9] [i_10]))));
            }
            /* LoopSeq 4 */
            for (unsigned char i_16 = 4; i_16 < 10; i_16 += 3) 
            {
                arr_62 [i_6] = ((/* implicit */unsigned short) ((max((arr_28 [i_16 - 2]), (((/* implicit */int) var_16)))) << (((((/* implicit */int) arr_29 [i_6])) - (10862)))));
                arr_63 [i_16] [i_9] [i_6] = ((((arr_42 [i_6] [i_6] [i_6] [i_6]) || (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_33 [i_6] [i_6] [i_16])))))) ? (((((/* implicit */_Bool) (unsigned char)49)) ? (((var_17) ? (var_2) : (((/* implicit */unsigned long long int) arr_61 [i_16 - 1])))) : (((/* implicit */unsigned long long int) max((arr_58 [i_16 + 3]), (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_6] [i_6] [1U] [i_6]))));
            }
            for (signed char i_17 = 0; i_17 < 13; i_17 += 2) 
            {
                var_29 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))));
                arr_67 [i_17] [i_9] [i_6] = ((/* implicit */int) arr_29 [i_6]);
                arr_68 [12U] [i_9] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((_Bool) var_2)) ? (((((/* implicit */int) (unsigned char)250)) * (((/* implicit */int) (unsigned char)233)))) : (((((/* implicit */int) (unsigned char)10)) - (((/* implicit */int) (unsigned char)233))))))) ? (((/* implicit */unsigned int) (+(-1714240641)))) : (((unsigned int) ((signed char) arr_17 [i_9])))));
            }
            for (unsigned int i_18 = 1; i_18 < 10; i_18 += 1) 
            {
                arr_73 [i_6] [i_9] [i_18] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2994416763U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) (unsigned char)204)) : (max((((/* implicit */int) (short)4318)), (1714240624))))) << (((((arr_72 [i_18 - 1] [i_6] [i_6]) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_6)))))))) - (8303384502647762285LL)))));
                arr_74 [i_6] [i_6] [8ULL] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) min((arr_34 [i_18 + 3] [i_9]), (((/* implicit */unsigned short) var_10))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_9] [i_18 + 1])) ? (((/* implicit */int) var_15)) : (-1170214568)))))))));
                arr_75 [i_6] [i_9] [i_9] [i_18 + 1] = ((/* implicit */long long int) max((max((((/* implicit */unsigned int) (+(arr_46 [i_6] [i_6] [i_9] [i_18] [i_6])))), (var_18))), (((/* implicit */unsigned int) 1170214571))));
            }
            for (unsigned int i_19 = 0; i_19 < 13; i_19 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_20 = 0; i_20 < 13; i_20 += 2) 
                {
                    var_30 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_19 [i_19])) ? (arr_19 [i_6]) : (arr_19 [i_6])))));
                    arr_82 [i_6] [i_6] [i_6] [i_20] [i_19] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) (unsigned char)110)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_80 [i_6] [i_9] [i_19] [i_19] [i_20] [i_19]))) + (0U))))), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (var_17)))), (((var_11) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)22)))))))));
                }
                arr_83 [i_19] [i_6] [i_6] &= ((/* implicit */_Bool) max((((((/* implicit */int) min((arr_26 [i_9] [i_9]), (((/* implicit */short) (unsigned char)20))))) + (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_19] [i_19] [i_19] [i_19] [i_19]))) + (6510267720264927914LL)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((short) var_11)))))));
            }
            arr_84 [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_10))))))), (arr_34 [i_9] [i_6])));
        }
        for (int i_21 = 0; i_21 < 13; i_21 += 3) /* same iter space */
        {
            var_31 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_33 [i_21] [i_21] [i_6])) : (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) var_15)) ? (14ULL) : (((/* implicit */unsigned long long int) arr_46 [i_6] [i_21] [i_21] [i_21] [i_21])))) : (((/* implicit */unsigned long long int) ((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25026))))))))));
            arr_89 [i_21] [i_21] [i_21] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
            arr_90 [i_21] [i_21] = ((((((/* implicit */int) (unsigned short)57215)) | (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (!(((((/* implicit */_Bool) arr_19 [i_6])) || (((/* implicit */_Bool) arr_30 [i_6] [4ULL]))))))));
            arr_91 [(_Bool)1] [i_21] [i_6] &= ((/* implicit */short) (+((+(((/* implicit */int) (short)9063))))));
            var_32 = ((((/* implicit */int) arr_86 [i_6])) - (((/* implicit */int) arr_86 [i_6])));
        }
        var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_77 [i_6] [i_6]), ((unsigned char)144))))));
        /* LoopNest 3 */
        for (unsigned long long int i_22 = 0; i_22 < 13; i_22 += 1) 
        {
            for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 4) 
            {
                for (unsigned char i_24 = 2; i_24 < 11; i_24 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_25 = 0; i_25 < 13; i_25 += 1) 
                        {
                            var_34 += ((/* implicit */int) arr_97 [i_6] [i_6] [i_23] [i_25]);
                            arr_101 [i_6] [i_22] [i_23] [i_22] [i_24 - 2] [i_25] = var_2;
                            arr_102 [i_22] [i_22] [i_23] [i_24] [i_25] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_96 [i_23] [i_23] [i_23] [i_22])))))) & (((var_18) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73)))))));
                            arr_103 [i_6] [i_6] [i_6] [i_22] [i_24] [i_24] [i_25] = ((/* implicit */unsigned int) ((int) arr_76 [i_6] [i_6] [i_6] [i_6]));
                        }
                        arr_104 [i_6] [i_22] [i_6] [i_23] [i_22] = min((max((((/* implicit */unsigned int) var_10)), (arr_27 [i_6] [i_6]))), (((/* implicit */unsigned int) (_Bool)1)));
                        arr_105 [i_22] = ((/* implicit */int) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7598232923210086764LL)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_46 [i_24] [i_23] [i_23] [i_22] [i_6])) : (11115989334203871211ULL)))))));
                    }
                } 
            } 
        } 
    }
    var_35 = ((/* implicit */signed char) var_16);
    var_36 = ((/* implicit */unsigned long long int) var_13);
}
