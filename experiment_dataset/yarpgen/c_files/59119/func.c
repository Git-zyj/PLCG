/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59119
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
    var_16 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? ((~(3394966865534717994ULL))) : (var_15)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) (+(((var_2) % (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 - 2])))))));
            arr_6 [i_0] [i_1] = ((/* implicit */short) ((min((((((/* implicit */int) var_13)) - (((/* implicit */int) arr_3 [i_1 + 1] [i_0])))), (((/* implicit */int) ((((/* implicit */int) (signed char)96)) <= (((/* implicit */int) (signed char)96))))))) ^ (((/* implicit */int) (((-(arr_0 [i_1 - 2]))) < (((/* implicit */long long int) ((int) 130023424LL))))))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                arr_9 [i_2] [i_1] [i_2] [1ULL] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_1 [i_0]))))))), (arr_4 [i_0])));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        {
                            arr_15 [i_1 - 1] [(_Bool)1] [i_1] [i_1] [i_1] &= ((/* implicit */signed char) arr_1 [i_0]);
                            arr_16 [i_0] [i_2] = ((/* implicit */_Bool) var_2);
                            arr_17 [10LL] [i_0] [i_2] [i_3] [10LL] [10LL] [10LL] = (signed char)10;
                            arr_18 [i_4] [i_3] [i_2] [22LL] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                    } 
                } 
                arr_19 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-27)), (((unsigned short) (signed char)-96)))))) >= ((-((+(8152172138718142286LL)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_5 = 3; i_5 < 24; i_5 += 4) 
                {
                    arr_22 [i_5 - 3] [i_2] [i_1 - 2] [13] [13] [13] = ((/* implicit */_Bool) var_8);
                    arr_23 [i_0] [i_1] = (!(((/* implicit */_Bool) arr_0 [i_5 - 3])));
                    arr_24 [i_0] [i_1] [i_2] [i_5 - 1] = ((/* implicit */signed char) (-(1180046861U)));
                }
                arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 234881024))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (6032472857251543344ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))) ? (((unsigned long long int) min((((/* implicit */unsigned long long int) (unsigned short)19411)), (992260840567374008ULL)))) : (((/* implicit */unsigned long long int) (+(-9223372036854775797LL))))));
            }
        }
        arr_26 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((10514448080864715805ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5239750948544619381LL)) && (((/* implicit */_Bool) (short)-15093)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (var_14)));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_32 [(short)13] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [(short)24] [i_6] [i_7]))))) <= (((/* implicit */int) ((short) (+(((/* implicit */int) (signed char)-96))))))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    for (long long int i_9 = 2; i_9 < 24; i_9 += 1) 
                    {
                        {
                            arr_38 [i_9] [i_8] [20ULL] [i_6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -1355105235955166659LL)) | (586273696340718453ULL)));
                            arr_39 [i_6] [i_6] [i_6] [(signed char)5] [10ULL] = ((/* implicit */_Bool) (-(-1744818436)));
                        }
                    } 
                } 
            }
            /* LoopSeq 3 */
            for (unsigned short i_10 = 2; i_10 < 23; i_10 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    arr_46 [i_11] [i_10] [(_Bool)1] [i_6] [(_Bool)1] = (+(((long long int) -1589486626)));
                    arr_47 [i_0] [i_0] [16ULL] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_10 + 1] [15ULL] [i_10] [i_11]))));
                    arr_48 [i_0] [0LL] [i_10 + 1] [i_11] = ((/* implicit */short) arr_45 [i_6] [i_6] [i_6] [(_Bool)1] [3]);
                    arr_49 [(short)13] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                    arr_50 [i_0] [i_0] [(unsigned short)9] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25813)) ? (arr_12 [i_0] [i_0] [i_10] [i_11] [i_11]) : (arr_12 [i_0] [i_6] [i_10] [i_10] [i_0])));
                }
                for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    arr_54 [i_0] [i_10 - 2] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_10 + 1] [i_10 - 1] [i_10 + 1])) || (((/* implicit */_Bool) arr_21 [i_10 + 2] [i_10 + 2]))));
                    arr_55 [i_0] [i_10 - 1] [i_6] [i_0] = ((/* implicit */_Bool) var_6);
                    arr_56 [(signed char)4] [i_6] [i_10] [(signed char)1] = ((/* implicit */long long int) var_6);
                }
                arr_57 [i_10] = ((/* implicit */_Bool) min((((/* implicit */signed char) ((_Bool) max((var_13), ((signed char)-104))))), ((signed char)-83)));
                arr_58 [i_0] [(signed char)24] [7] = ((/* implicit */int) min(((-(var_15))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_20 [i_10 - 2] [i_10 + 2] [i_10 + 2] [i_10 + 1] [i_10 - 1] [i_10 - 2]) : (arr_20 [i_10 + 1] [i_10 - 1] [i_10 - 1] [7] [i_10] [9LL]))))));
                arr_59 [i_0] [i_10 - 1] = var_7;
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_62 [9LL] [i_6] [i_10] [i_13] [i_13] = ((unsigned short) min((-1808131011), (((((/* implicit */_Bool) var_3)) ? (-1029435234) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [3U]))))));
                    arr_63 [i_0] [i_13] [i_13] [i_13] [i_0] [i_0] = ((signed char) (+(((/* implicit */int) var_0))));
                }
                for (long long int i_14 = 1; i_14 < 24; i_14 += 1) 
                {
                    arr_67 [i_14] [i_6] [i_6] [i_14 - 1] = ((/* implicit */int) (signed char)-104);
                    arr_68 [i_0] [i_10] [i_14] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_0)), (18446744073709551612ULL)));
                    arr_69 [i_14] [i_10] [i_14] = ((/* implicit */signed char) var_12);
                    arr_70 [i_10] [i_6] [i_6] [i_10] = ((/* implicit */unsigned long long int) (-(((arr_20 [i_14] [i_14 - 1] [i_14 - 1] [(_Bool)1] [i_14] [i_14]) * (((/* implicit */int) var_1))))));
                }
            }
            for (unsigned int i_15 = 0; i_15 < 25; i_15 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 4) 
                {
                    arr_77 [i_0] [i_6] [14LL] [i_15] [i_16] = ((/* implicit */unsigned int) min((max((var_15), (((/* implicit */unsigned long long int) (signed char)-100)))), (((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (arr_4 [i_6])))));
                    arr_78 [(_Bool)1] [i_15] [i_6] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_12 [i_0] [i_6] [i_0] [i_16] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_12 [i_0] [i_0] [i_6] [i_15] [i_16])))));
                }
                for (unsigned int i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    arr_81 [i_0] [i_6] [i_6] [i_6] [i_17] &= ((/* implicit */unsigned long long int) (~(((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_6] [i_15])))))));
                    /* LoopSeq 1 */
                    for (signed char i_18 = 0; i_18 < 25; i_18 += 4) 
                    {
                        arr_86 [i_17] [i_6] [i_15] [14LL] [i_18] = (!(((/* implicit */_Bool) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15105)))))));
                        arr_87 [i_0] [i_17] [(_Bool)1] [i_17] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_15))) ? (((/* implicit */int) ((arr_45 [i_0] [i_0] [(unsigned short)9] [i_17] [(short)6]) || (arr_45 [i_0] [i_6] [24U] [i_17] [i_18])))) : (min((1808131010), (1029435218)))));
                    }
                }
                /* vectorizable */
                for (long long int i_19 = 0; i_19 < 25; i_19 += 3) 
                {
                    arr_90 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */int) ((long long int) (-(((/* implicit */int) (signed char)-68)))));
                    arr_91 [i_0] [i_6] [i_6] [(signed char)16] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_83 [i_0] [i_0] [i_6] [i_15] [i_19])) ? (((/* implicit */unsigned long long int) arr_83 [i_0] [i_0] [i_6] [i_15] [i_19])) : (var_5)));
                }
                arr_92 [i_0] [i_6] [(signed char)6] = ((/* implicit */int) ((((/* implicit */_Bool) (+(-1808131011)))) && (((/* implicit */_Bool) arr_74 [i_0] [i_0] [16] [i_6] [(short)0]))));
                /* LoopSeq 2 */
                for (long long int i_20 = 0; i_20 < 25; i_20 += 1) /* same iter space */
                {
                    arr_96 [i_0] [i_0] [i_15] [i_15] [i_20] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_94 [i_0] [i_0] [i_6] [(unsigned short)3] [i_20] [i_20])) && (((/* implicit */_Bool) arr_95 [(signed char)7] [i_6] [i_15] [i_20])))));
                    arr_97 [i_0] [i_6] [i_15] [i_6] [(signed char)7] = ((/* implicit */signed char) (~((-(-1029435234)))));
                }
                for (long long int i_21 = 0; i_21 < 25; i_21 += 1) /* same iter space */
                {
                    arr_100 [10] [i_6] [i_15] [i_15] [i_21] = min((((long long int) 1808131010)), (min((((/* implicit */long long int) (~(1808131010)))), (arr_98 [i_0] [i_6] [i_15] [i_21]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_22 = 0; i_22 < 25; i_22 += 4) 
                    {
                        arr_103 [i_0] [i_0] [i_0] [i_22] [(signed char)24] = ((/* implicit */unsigned short) ((signed char) (signed char)-62));
                        arr_104 [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] &= ((/* implicit */int) arr_31 [i_22] [i_21] [i_15]);
                        arr_105 [i_21] [i_6] [i_6] [i_21] = ((/* implicit */unsigned int) -1896719195);
                    }
                    for (signed char i_23 = 0; i_23 < 25; i_23 += 1) 
                    {
                        arr_109 [i_0] [i_6] [i_15] [i_21] [i_23] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_84 [(_Bool)1] [i_6] [i_21] [i_15] [i_6] [i_0])))))));
                        arr_110 [i_21] = ((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)58)) && (((/* implicit */_Bool) (signed char)-124)))))) <= (arr_43 [i_0] [i_15] [(short)3] [(signed char)10])))));
                        arr_111 [i_21] = ((/* implicit */unsigned short) ((signed char) min((((((/* implicit */_Bool) arr_29 [10] [10] [i_15])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_0] [i_21]))))), (((/* implicit */unsigned long long int) var_4)))));
                    }
                    arr_112 [i_0] [i_21] [i_0] [i_0] [16ULL] [8U] = ((/* implicit */int) arr_83 [10LL] [10LL] [i_6] [10LL] [i_21]);
                    /* LoopSeq 1 */
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        arr_115 [i_0] [i_6] [i_21] [i_24] = ((/* implicit */long long int) ((min((min((12148096389815182264ULL), (((/* implicit */unsigned long long int) arr_3 [i_6] [i_21])))), (((/* implicit */unsigned long long int) arr_36 [i_6])))) >= (((/* implicit */unsigned long long int) var_2))));
                        arr_116 [i_0] [i_6] [3ULL] [i_15] [(_Bool)1] [i_21] [3ULL] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(783769958))))))), (min((((/* implicit */long long int) ((var_14) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))), (arr_73 [(signed char)20] [i_6] [i_6] [i_6])))));
                        arr_117 [i_21] [i_15] [i_24] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_83 [i_0] [i_6] [i_15] [i_15] [5LL])) ? (((/* implicit */int) (signed char)96)) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)0))))));
                    }
                }
            }
            for (unsigned int i_25 = 1; i_25 < 21; i_25 += 4) 
            {
                arr_120 [i_25] = ((/* implicit */unsigned int) (_Bool)0);
                arr_121 [i_25] [i_25] = ((/* implicit */long long int) max((1106285284603083227ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_88 [i_0] [i_25 - 1] [i_25] [i_25] [i_25] [(signed char)1])) : (((/* implicit */int) (signed char)127)))))));
                arr_122 [i_0] [i_25] [i_25] = ((/* implicit */signed char) arr_98 [i_0] [i_6] [i_25] [i_25]);
                arr_123 [i_25] [i_6] [i_0] [i_25] = ((/* implicit */signed char) var_4);
            }
        }
        arr_124 [i_0] = ((/* implicit */long long int) ((9222809086901354496ULL) / (((/* implicit */unsigned long long int) 821835102))));
        arr_125 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) ((signed char) var_5))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (signed char i_26 = 3; i_26 < 22; i_26 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_27 = 0; i_27 < 24; i_27 += 4) 
        {
            arr_130 [i_26] [i_26] [i_26 + 2] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (var_2)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 2108200613)) : (arr_85 [(signed char)17] [i_26 - 1] [i_26 - 1] [i_27]))) : (arr_14 [i_26 - 2]))))));
            /* LoopSeq 1 */
            for (long long int i_28 = 0; i_28 < 24; i_28 += 4) 
            {
                arr_133 [i_26 - 2] [12LL] [(unsigned short)4] [i_28] = ((/* implicit */signed char) ((((long long int) var_7)) | (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) (short)22066))))) ? (((unsigned int) arr_43 [i_26 + 2] [i_26] [i_26 - 3] [i_26])) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))))))));
                arr_134 [i_26] [i_27] [i_28] [(_Bool)1] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) (short)15078)), (arr_98 [i_26] [i_26 - 2] [i_26 - 1] [i_26 - 3]))) % (((((/* implicit */long long int) ((/* implicit */int) (signed char)69))) - (arr_98 [i_26] [i_26] [i_26 - 3] [i_26 - 3])))));
            }
        }
        arr_135 [i_26 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(2108200613)))) ? (min((arr_2 [i_26]), (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_7 [i_26] [i_26 - 3] [i_26 + 2] [i_26 - 2]))))) / (min((arr_98 [i_26] [i_26] [i_26 + 2] [i_26 - 2]), (((/* implicit */long long int) (_Bool)1))))));
        arr_136 [i_26] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_44 [i_26] [i_26] [i_26] [i_26])), (max((((/* implicit */unsigned long long int) var_10)), (((var_11) >> (((((/* implicit */int) arr_35 [i_26 + 2] [i_26 + 2] [i_26] [i_26 + 1] [i_26])) - (6999)))))))));
        /* LoopNest 2 */
        for (signed char i_29 = 0; i_29 < 24; i_29 += 3) 
        {
            for (unsigned short i_30 = 0; i_30 < 24; i_30 += 3) 
            {
                {
                    arr_142 [i_26 + 1] [i_29] [i_30] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_72 [i_26] [i_26 - 1] [i_26 - 1] [i_26 - 3])) << (((var_2) - (8365515848841154658LL))))), (((/* implicit */int) ((-7112204430240372895LL) <= (min((((/* implicit */long long int) var_8)), (9223372036854775807LL))))))));
                    arr_143 [i_26] [21LL] [i_30] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_93 [i_26 - 2] [i_26] [i_26 - 1] [i_26 + 1] [i_26 - 3])) ? (arr_93 [i_26 + 1] [i_26 + 1] [i_26 + 1] [i_26 - 2] [i_26 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) var_13)), (var_4))))) : (min((var_5), (arr_93 [i_26 - 3] [i_26] [i_26 - 3] [i_26 + 1] [i_26 + 2])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_31 = 0; i_31 < 24; i_31 += 4) 
        {
            for (short i_32 = 0; i_32 < 24; i_32 += 2) 
            {
                for (unsigned short i_33 = 0; i_33 < 24; i_33 += 4) 
                {
                    {
                        arr_152 [i_33] [i_31] = (-(1409862442637175061ULL));
                        arr_153 [i_33] [i_33] [i_33] [i_33] [i_33] = ((/* implicit */signed char) max((arr_2 [i_32]), (((/* implicit */int) ((arr_52 [i_26 - 1] [i_26 + 2] [i_26 + 1] [i_26 - 1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_26 - 2]))))))));
                        arr_154 [i_33] [i_31] [i_31] [i_31] [i_33] = ((/* implicit */int) (unsigned short)60458);
                        arr_155 [i_26] [i_31] [i_32] [i_31] = ((/* implicit */long long int) (signed char)-69);
                        arr_156 [i_26] [i_26] [(signed char)9] [i_31] [i_32] [i_33] = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) arr_4 [i_26 - 2])) ? (((long long int) arr_74 [i_26 + 2] [i_26 + 2] [(short)4] [i_32] [i_33])) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-115)))))));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned int) var_7);
}
