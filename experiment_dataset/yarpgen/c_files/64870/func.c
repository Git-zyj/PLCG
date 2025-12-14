/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64870
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
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) min((((/* implicit */long long int) var_6)), (max((arr_1 [i_0 - 2]), (((/* implicit */long long int) arr_0 [i_0 + 1]))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)28)) ? (2U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))));
            arr_5 [i_0] [5] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-2))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_9 [i_2 - 2] [i_2 - 2] [i_2 + 1])), (arr_4 [i_0] [i_0 - 2])))) ? ((~(((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_9 [6ULL] [6ULL] [i_3])) : (((/* implicit */int) arr_4 [i_2 - 1] [15LL])))))) : (max((((/* implicit */int) (signed char)-119)), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1))))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)9), (((/* implicit */short) (signed char)104))))) ? ((~(((/* implicit */int) (signed char)118)))) : (max(((+(((/* implicit */int) (short)11)))), (((/* implicit */int) arr_10 [i_2] [i_2 + 1] [i_2 - 1] [i_2] [i_2] [i_2 + 1])))))))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_5 = 2; i_5 < 24; i_5 += 4) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_6 = 2; i_6 < 22; i_6 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */signed char) max((((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) (signed char)-60)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [(unsigned char)9] [(unsigned char)9] [i_3] [(unsigned char)9] [i_3]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_10))))) : (min((((/* implicit */long long int) arr_11 [(_Bool)1] [(_Bool)1])), (9223372036854775791LL)))))));
                        var_20 -= ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
                        arr_18 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((unsigned char) arr_12 [i_2 - 2]))) : (((((/* implicit */_Bool) arr_12 [i_2 + 1])) ? (((/* implicit */int) (unsigned short)51358)) : (((/* implicit */int) arr_12 [i_2 - 1]))))));
                    }
                    for (signed char i_7 = 2; i_7 < 22; i_7 += 1) /* same iter space */
                    {
                        arr_22 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max((var_1), (((/* implicit */unsigned char) arr_3 [i_7 - 1] [i_2 - 1] [i_5 - 1]))))) : (((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) (short)-22637)) : (((/* implicit */int) (signed char)-37))))));
                        arr_23 [(unsigned char)12] [i_2 + 1] [i_2] [(unsigned char)12] [i_2 - 1] = var_13;
                        arr_24 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-42)) ^ (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_5 - 2])))) & (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_5] [i_5 - 1])) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_5 - 2]))))));
                    }
                    for (signed char i_8 = 2; i_8 < 22; i_8 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) var_7);
                        arr_28 [i_2] [i_3] [i_3] [i_8 - 2] [i_3] [i_3] [i_5 - 2] &= ((/* implicit */unsigned int) max((((/* implicit */long long int) (+(((/* implicit */int) var_9))))), (((((/* implicit */long long int) ((((/* implicit */int) arr_25 [i_0] [(unsigned char)23] [i_3] [i_5] [i_8] [i_5 - 2] [(unsigned char)23])) * (((/* implicit */int) (signed char)28))))) / (((-5663475264514815855LL) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                    }
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_31 [i_0] [i_0] [3] [i_0] = ((/* implicit */signed char) max((((unsigned short) arr_4 [i_0 + 1] [i_0 + 1])), (((/* implicit */unsigned short) (unsigned char)110))));
                        arr_32 [i_0] [i_0] [(unsigned char)12] [i_0] [i_0] = ((signed char) ((arr_9 [(short)11] [i_2 + 1] [(short)11]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4290772992LL)));
                    }
                    arr_33 [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) arr_10 [i_0] [i_2 - 1] [i_3] [i_5 - 1] [i_5 + 1] [i_0 + 1])) | (((/* implicit */int) ((short) arr_21 [i_5 + 1] [(short)22] [i_5] [i_5] [i_5]))))));
                    var_22 -= ((/* implicit */short) (+(((/* implicit */int) var_8))));
                }
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((unsigned short) (_Bool)1)))));
                arr_36 [i_0] [i_2 + 1] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 632052637307576747LL)) ? (712476488U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) << ((((+(((/* implicit */int) (short)-29820)))) + (29822)))))) ? (((/* implicit */int) (short)-29820)) : (((/* implicit */int) ((_Bool) arr_25 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_10] [i_10] [i_10] [i_2 + 1])))));
                /* LoopSeq 1 */
                for (unsigned char i_11 = 3; i_11 < 21; i_11 += 3) 
                {
                    arr_41 [i_0] [i_11] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) (unsigned char)181)) ? (arr_27 [i_0 - 1]) : (arr_27 [i_0 - 1])))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((5795208409583736932LL) / (-1472812027734303772LL)))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_10 [i_0] [i_2 + 1] [i_0] [i_11] [i_0 + 1] [i_2 - 2])))) : (((int) arr_19 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2] [i_2] [i_2 - 2] [i_2])))))))));
                    var_25 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) arr_35 [i_0 + 1] [i_0 + 1] [i_0 + 1])), (arr_1 [i_2 - 1]))), (arr_1 [(_Bool)1])));
                }
                /* LoopSeq 3 */
                for (int i_12 = 1; i_12 < 24; i_12 += 3) 
                {
                    arr_44 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */int) arr_11 [i_2] [i_2]);
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_3))));
                    var_27 = ((/* implicit */signed char) arr_27 [i_0]);
                }
                for (signed char i_13 = 3; i_13 < 24; i_13 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (signed char i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        var_28 = arr_1 [i_10];
                        var_29 = ((/* implicit */long long int) arr_43 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2]);
                    }
                    for (unsigned char i_15 = 2; i_15 < 23; i_15 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0])) ? (((((/* implicit */_Bool) arr_50 [i_13] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)15360)))) : (((/* implicit */int) (signed char)56)))), (((/* implicit */int) var_13))));
                        arr_53 [i_13] [i_13 + 1] [i_13] [i_13] [i_13] [i_13 + 1] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) * (-2147483645)));
                        arr_54 [(unsigned char)11] [(unsigned char)11] [i_2] [i_13] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5)))) : (((((/* implicit */_Bool) (unsigned short)38543)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6000))) : (3183380181U)))))) ? ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)141))) < (-2927572110787449655LL)))))) : (min((((((/* implicit */int) arr_45 [i_0 + 1] [i_2] [i_13])) << (((((/* implicit */int) (unsigned char)255)) - (240))))), (((/* implicit */int) (unsigned char)194))))));
                    }
                    for (unsigned char i_16 = 2; i_16 < 23; i_16 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned int) (unsigned short)44090);
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)6000))))) ? (min((((/* implicit */long long int) (_Bool)1)), (-632052637307576736LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [(unsigned char)1] [i_2] [i_2 + 1])))))));
                        var_33 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */int) arr_17 [i_16 + 2] [i_16 - 1] [i_16] [i_16 - 1] [4])) : (((/* implicit */int) arr_2 [i_0 + 1] [i_13 - 2])))));
                        var_34 = ((/* implicit */_Bool) ((min((arr_26 [(unsigned char)6] [i_0 + 1] [i_2] [i_2 - 2] [i_13]), (arr_26 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_13]))) ? (((/* implicit */int) min((arr_26 [i_0] [i_0] [19] [i_2 - 2] [i_13]), (arr_26 [i_2] [i_2] [i_2 + 1] [i_2 - 2] [i_13])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2 + 1] [i_13])) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_0 + 1] [i_2 - 1] [i_13]))))));
                        var_35 = ((/* implicit */unsigned char) arr_55 [i_16] [(_Bool)1]);
                    }
                    for (long long int i_17 = 1; i_17 < 24; i_17 += 1) 
                    {
                        arr_59 [i_13] [i_13] [i_13] [i_13 - 1] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)48)))) - (((/* implicit */int) min(((signed char)49), (((/* implicit */signed char) (_Bool)0)))))));
                        arr_60 [i_0] [i_0] [i_10] [23LL] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? ((-((-(((/* implicit */int) (unsigned char)181)))))) : (((((/* implicit */int) arr_6 [i_0])) / (((/* implicit */int) ((unsigned char) (unsigned char)98)))))));
                    }
                    arr_61 [i_13] [i_13] [i_10] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483645)) ? (arr_55 [i_13 - 2] [i_13 - 2]) : (arr_55 [i_13 - 2] [i_13 - 2]))))));
                }
                for (signed char i_18 = 3; i_18 < 24; i_18 += 4) /* same iter space */
                {
                    var_36 *= ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)-124)), (-997448864)));
                    arr_66 [i_0] [i_0] [i_10] [23LL] [i_2] [i_10] |= (+(max((arr_29 [i_2] [i_2 - 1] [i_2 + 1] [(signed char)19]), (((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)124))))))));
                }
            }
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_20 = 0; i_20 < 25; i_20 += 2) 
                {
                    var_37 -= ((/* implicit */unsigned char) (signed char)37);
                    var_38 = ((/* implicit */signed char) ((((_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_42 [i_0 + 1] [i_0 - 1] [i_2 - 1]), ((signed char)10))))) : (min((arr_72 [i_0 + 1] [i_2 - 2] [i_19] [i_20]), (arr_72 [(signed char)19] [i_2] [i_2] [i_2])))));
                    var_39 *= ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) (short)25460)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_0 + 1] [i_2 - 1] [i_2 + 1])))), (((/* implicit */int) (unsigned short)49376))));
                    var_40 *= ((/* implicit */int) ((unsigned char) (_Bool)1));
                }
                /* LoopSeq 4 */
                for (unsigned int i_21 = 0; i_21 < 25; i_21 += 2) 
                {
                    var_41 += ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_74 [i_19] [i_2 - 1] [i_19] [i_21] [(signed char)17] [i_0 + 1])))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [i_0] [i_19] [i_2] [i_21]))) - (arr_74 [i_0] [i_2] [i_0] [i_21] [i_19] [i_0 + 1])))));
                    var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((arr_45 [i_0 - 1] [i_0 - 1] [i_21]) ? (((/* implicit */int) arr_37 [i_0] [i_2] [i_19] [(_Bool)1] [i_0])) : (((/* implicit */int) arr_30 [i_0] [i_0] [i_19] [i_21] [i_19])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_22 = 1; i_22 < 24; i_22 += 1) /* same iter space */
                    {
                        arr_79 [(signed char)5] [(_Bool)1] [i_22] [i_22] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_46 [i_0 - 1] [i_0] [i_2 + 1] [i_22] [i_22 - 1])) ? (((/* implicit */int) arr_46 [i_0] [i_2] [i_19] [i_0 + 1] [i_22 + 1])) : (((/* implicit */int) arr_12 [i_19]))));
                        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)-17751)) : (((/* implicit */int) var_4))));
                    }
                    for (unsigned long long int i_23 = 1; i_23 < 24; i_23 += 1) /* same iter space */
                    {
                        arr_83 [i_0] [8] [i_19] [(_Bool)1] [i_23] [8] [8] = ((((/* implicit */_Bool) arr_55 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_0 + 1]), (((/* implicit */unsigned char) arr_14 [i_0 - 2] [i_2] [i_23 + 1] [i_2 - 2])))))) : (((((/* implicit */_Bool) var_1)) ? ((-(arr_56 [i_0] [i_2] [i_19] [i_21] [i_23 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_0 - 2] [i_21] [i_2 - 1] [i_21] [i_21]))))));
                        var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)4)) ? (-2143625816) : (((/* implicit */int) (_Bool)1)))))));
                        var_45 = ((/* implicit */unsigned char) ((signed char) arr_78 [i_19] [i_19] [i_23 - 1] [i_23 - 1] [i_23] [i_21]));
                    }
                    var_46 *= ((/* implicit */unsigned char) var_2);
                }
                for (unsigned int i_24 = 0; i_24 < 25; i_24 += 4) /* same iter space */
                {
                    var_47 *= var_13;
                    arr_87 [i_0] [i_19] [i_19] [i_24] = min((max((-1127934288041682815LL), (((/* implicit */long long int) (unsigned short)16890)))), (((/* implicit */long long int) max(((short)17751), (((/* implicit */short) arr_49 [i_24]))))));
                }
                for (unsigned int i_25 = 0; i_25 < 25; i_25 += 4) /* same iter space */
                {
                    var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) (-(arr_86 [(_Bool)1] [i_2 - 2] [i_2 - 1]))))));
                    var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) ((var_12) - (((/* implicit */int) (((+(((/* implicit */int) (signed char)10)))) == (((/* implicit */int) max((((/* implicit */unsigned char) arr_45 [i_2] [i_19] [i_25])), (var_9))))))))))));
                }
                /* vectorizable */
                for (unsigned int i_26 = 0; i_26 < 25; i_26 += 4) /* same iter space */
                {
                    arr_93 [i_0] [i_0] [(unsigned char)23] [i_0 + 1] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) : (34359738367ULL)));
                    arr_94 [i_0] [i_2] = ((/* implicit */unsigned char) var_2);
                }
                var_50 -= ((/* implicit */_Bool) (-(-4968406822138664265LL)));
            }
            arr_95 [i_0 + 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) var_2))))));
            arr_96 [i_0 - 2] [i_2 - 2] [i_2 + 1] = ((/* implicit */short) ((9453282167180607327ULL) >> (((((/* implicit */int) (signed char)76)) - (51)))));
            var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)120), ((signed char)(-127 - 1)))))) + (((arr_39 [i_2 + 1] [i_0 - 2]) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (7724316834500563453LL))))))))));
            var_52 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_42 [i_0 - 2] [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) arr_42 [i_0 - 1] [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) arr_12 [i_0 + 1])) : (((/* implicit */int) arr_6 [i_0 - 1]))));
        }
        var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) max((((long long int) arr_91 [i_0] [i_0 + 1] [i_0 + 1] [i_0])), (((/* implicit */long long int) ((((/* implicit */int) arr_76 [i_0 - 2] [i_0 - 1] [i_0 - 1])) / (((/* implicit */int) max((var_10), (arr_45 [i_0] [i_0] [i_0 + 1]))))))))))));
        var_54 = ((/* implicit */int) (+(max((((/* implicit */unsigned int) (unsigned short)266)), (arr_89 [i_0] [i_0] [i_0 + 1] [i_0])))));
    }
    /* LoopSeq 1 */
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
    {
        var_55 += min((arr_14 [i_27] [i_27] [i_27] [i_27]), (((/* implicit */signed char) max((var_6), (((_Bool) (unsigned char)188))))));
        var_56 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) var_8)))));
    }
}
