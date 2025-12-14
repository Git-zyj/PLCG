/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67716
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((unsigned int) arr_1 [i_0])) : (((unsigned int) ((unsigned char) var_5)))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            var_14 = ((/* implicit */int) arr_4 [i_1]);
            arr_8 [i_2] = ((/* implicit */unsigned short) arr_0 [i_1]);
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */_Bool) (~(arr_10 [i_1])));
            arr_12 [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4085324409U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) : (((unsigned long long int) var_10))));
            /* LoopSeq 3 */
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                var_16 = ((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1]);
                arr_17 [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) ((var_10) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_11)))));
            }
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    var_17 &= ((/* implicit */short) ((unsigned char) arr_18 [i_1]));
                    arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_1] [i_6])) ? (arr_19 [i_1] [i_1]) : (((/* implicit */int) var_2))));
                }
                /* LoopSeq 3 */
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    var_18 = ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_18 [i_3])));
                    var_19 &= ((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_1] [i_3] [i_5] [i_7] [i_1] [i_1]))));
                }
                for (short i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    arr_29 [i_1] [i_1] [i_5] [i_8] [i_3] = ((/* implicit */signed char) ((274810798080LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_3])) || (((/* implicit */_Bool) arr_11 [i_1] [i_3]))));
                }
                for (int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    var_21 = ((/* implicit */long long int) arr_27 [i_1] [i_3] [i_5] [i_9] [i_3] [i_5]);
                    arr_34 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_11 [i_1] [i_1]))) != (((/* implicit */int) ((_Bool) var_2)))));
                    arr_35 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (arr_4 [i_1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_15 [i_1] [i_3] [i_5] [i_1]))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7))))));
                }
                arr_36 [i_1] [i_3] [i_3] [i_5] = ((/* implicit */signed char) arr_31 [i_1] [i_3] [i_5] [i_5]);
                /* LoopSeq 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    arr_39 [i_1] [i_3] [i_5] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) 4194303U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_1]))) : (((var_11) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+((~(((/* implicit */int) var_3)))))))));
                    arr_40 [i_1] [i_1] [i_1] [i_1] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_10] [i_3] [i_5] [i_1] [i_10] [i_10])) ? (((/* implicit */int) arr_37 [i_1] [i_3] [i_5] [i_10] [i_1] [i_10])) : (((/* implicit */int) arr_37 [i_5] [i_3] [i_5] [i_10] [i_10] [i_5]))));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_5]))) + (arr_11 [i_1] [i_3])))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    var_24 &= ((/* implicit */short) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_32 [i_1] [i_3] [i_5] [i_11]))))));
                    arr_44 [i_1] [i_3] [i_3] [i_5] [i_5] [i_11] = ((/* implicit */long long int) var_10);
                }
                for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    var_25 += (+((+(var_11))));
                    /* LoopSeq 4 */
                    for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        var_26 = ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1]))) >= (((long long int) var_4)));
                        arr_50 [i_1] [i_3] [i_5] [i_12] = ((/* implicit */unsigned char) ((signed char) arr_0 [i_12]));
                        var_27 &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)30720)) * (((/* implicit */int) (unsigned short)65535))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_55 [i_14] [i_14] [i_12] [i_5] [i_3] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_52 [i_1] [i_3] [i_5] [i_12] [i_14])) || (((/* implicit */_Bool) var_7))));
                        arr_56 [i_14] [i_12] [i_5] [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)121)) ? (2460980654409805608LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_28 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_37 [i_14] [i_12] [i_5] [i_5] [i_3] [i_1]))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (!(var_2))))));
                    }
                    for (int i_15 = 0; i_15 < 18; i_15 += 4) 
                    {
                        var_29 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_54 [i_1] [i_12] [i_5] [i_12] [i_15] [i_5])) ? (((/* implicit */int) arr_47 [i_15] [i_12] [i_5] [i_3] [i_1])) : (((/* implicit */int) var_4))))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_15 [i_15] [i_3] [i_5] [i_12])) - (73)))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_63 [i_16] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((signed char) arr_59 [i_1] [i_3] [i_5] [i_12] [i_16]));
                        arr_64 [i_1] [i_3] [i_5] [i_12] [i_16] [i_16] [i_16] = ((/* implicit */_Bool) (~(((int) var_7))));
                    }
                }
            }
            for (int i_17 = 0; i_17 < 18; i_17 += 3) 
            {
                arr_68 [i_1] [i_3] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_67 [i_1])) & (((/* implicit */int) var_7))));
                /* LoopSeq 2 */
                for (unsigned int i_18 = 0; i_18 < 18; i_18 += 4) 
                {
                    var_31 *= ((/* implicit */signed char) (!((_Bool)1)));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-106))) <= (6395951210439109376LL)));
                }
                for (unsigned int i_19 = 0; i_19 < 18; i_19 += 2) 
                {
                    arr_74 [i_3] [i_17] [i_19] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                    var_33 ^= ((/* implicit */unsigned long long int) var_0);
                }
            }
            var_34 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_52 [i_1] [i_1] [i_1] [i_1] [i_1])) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) var_1))));
        }
        /* vectorizable */
        for (unsigned int i_20 = 0; i_20 < 18; i_20 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_21 = 0; i_21 < 18; i_21 += 4) 
            {
                for (unsigned char i_22 = 0; i_22 < 18; i_22 += 4) 
                {
                    {
                        var_35 *= ((/* implicit */long long int) (+(((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_62 [i_1] [i_22]))))));
                        var_36 = ((/* implicit */int) ((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))));
                        arr_85 [i_1] [i_20] [i_21] [i_22] [i_20] [i_21] = ((/* implicit */unsigned char) var_4);
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_22] [i_21] [i_21] [i_20] [i_1] [i_1])) ? (var_11) : (arr_83 [i_1] [i_20] [i_21] [i_22])));
                        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) arr_6 [i_1] [i_1]))));
                    }
                } 
            } 
            var_39 = ((((var_10) ? (arr_4 [i_20]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) * (((/* implicit */long long int) ((/* implicit */int) var_3))));
            arr_86 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_42 [i_20] [i_20] [i_20] [i_20] [i_1] [i_1]))));
        }
        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_5)))))) : (((/* implicit */int) ((_Bool) (unsigned short)62896)))));
    }
    /* vectorizable */
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        arr_91 [i_23] = ((short) arr_43 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]);
        var_41 = ((/* implicit */long long int) ((unsigned char) arr_59 [i_23] [i_23] [i_23] [i_23] [i_23]));
        var_42 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_57 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23])))) >= (((/* implicit */int) arr_37 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]))));
    }
    for (unsigned int i_24 = 0; i_24 < 22; i_24 += 4) 
    {
        var_43 = ((((arr_1 [i_24]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (var_8))))))));
        /* LoopSeq 3 */
        for (signed char i_25 = 0; i_25 < 22; i_25 += 4) 
        {
            arr_96 [i_25] [i_24] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) % (((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) arr_94 [i_25])) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) max((var_9), (arr_0 [i_25])))) : ((~(((/* implicit */int) var_6))))))));
            var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) arr_93 [i_24] [i_25])) ? ((-(((/* implicit */int) (signed char)-42)))) : (((/* implicit */int) var_1)))))))));
        }
        for (unsigned short i_26 = 1; i_26 < 21; i_26 += 1) 
        {
            arr_100 [i_26 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_26 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_24]))))))))) : (((((long long int) arr_93 [i_26] [i_24])) / (((/* implicit */long long int) arr_99 [i_24] [i_26 - 1]))))));
            var_45 = ((/* implicit */unsigned short) 2036694763U);
            /* LoopSeq 1 */
            for (long long int i_27 = 0; i_27 < 22; i_27 += 3) 
            {
                var_46 = ((/* implicit */short) (+(((/* implicit */int) max((var_9), ((!(var_10))))))));
                var_47 = ((/* implicit */short) (~(((long long int) (+(((/* implicit */int) var_1)))))));
            }
            var_48 = ((/* implicit */long long int) min((var_48), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((long long int) max((((/* implicit */long long int) arr_95 [i_24] [i_26 - 1])), (arr_102 [i_24] [i_26] [i_26])))) : (((((/* implicit */_Bool) (unsigned short)51747)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) ^ (-1LL)))))))));
        }
        for (unsigned short i_28 = 0; i_28 < 22; i_28 += 3) 
        {
            var_49 = ((/* implicit */long long int) max((((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) 3606458233U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11589))) : (18446744073709551615ULL))))), (var_5)));
            var_50 = ((/* implicit */unsigned int) min((var_50), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)(-127 - 1))))))));
            /* LoopSeq 4 */
            for (signed char i_29 = 0; i_29 < 22; i_29 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_30 = 0; i_30 < 22; i_30 += 4) 
                {
                    arr_114 [i_24] [i_28] = ((/* implicit */long long int) (~(((/* implicit */int) arr_94 [i_24]))));
                    var_51 = ((/* implicit */signed char) max(((+((((_Bool)0) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (short)11588)))))), (((/* implicit */int) var_7))));
                }
                var_52 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((1811147316873686880ULL), (((/* implicit */unsigned long long int) (short)-13526))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104))) : (((((/* implicit */_Bool) (unsigned short)34505)) ? (9072794182252620111LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)94)))))));
            }
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) /* same iter space */
            {
                arr_117 [i_24] [i_24] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((int) arr_108 [i_24] [i_28] [i_31] [i_31])) : (((((/* implicit */_Bool) var_3)) ? (arr_115 [i_24] [i_28] [i_31]) : (((/* implicit */int) var_0)))))));
                arr_118 [i_24] [i_24] = ((/* implicit */unsigned short) ((var_9) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_101 [i_24] [i_28] [i_31] [i_28])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))) * (((/* implicit */int) var_2)))))));
                var_53 = ((/* implicit */int) var_11);
            }
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) /* same iter space */
            {
                var_54 = ((/* implicit */signed char) min((var_54), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((-8959321900053277706LL), (-2107447665806406767LL)))))))));
                var_55 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((var_11), (arr_113 [i_24] [i_28] [i_32])))) ? (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned int) var_2))))) : (((16816230477817820729ULL) << (((688509062U) - (688509034U)))))))));
                /* LoopSeq 2 */
                for (int i_33 = 2; i_33 < 21; i_33 += 4) 
                {
                    arr_125 [i_24] [i_32] &= ((/* implicit */_Bool) (~((+(arr_107 [i_33 + 1] [i_33 - 1] [i_33 - 1] [i_33 - 2])))));
                    var_56 = ((/* implicit */signed char) arr_0 [i_28]);
                    var_57 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_101 [i_24] [i_33 - 1] [i_33] [i_33 + 1]))))));
                }
                for (unsigned long long int i_34 = 0; i_34 < 22; i_34 += 4) 
                {
                    var_58 ^= ((/* implicit */signed char) (unsigned char)30);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_35 = 0; i_35 < 22; i_35 += 3) 
                    {
                        var_59 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((2873742837U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)49))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_121 [i_24] [i_28])))));
                        var_60 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_92 [i_32] [i_34])) ? (((/* implicit */int) arr_92 [i_34] [i_32])) : (((/* implicit */int) ((arr_1 [i_28]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_92 [i_35] [i_24]))))))));
                        var_61 = ((/* implicit */long long int) max((var_61), (var_8)));
                    }
                }
            }
            for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) /* same iter space */
            {
                arr_133 [i_36] [i_28] = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) arr_131 [i_36] [i_28])))));
                /* LoopSeq 1 */
                for (int i_37 = 0; i_37 < 22; i_37 += 2) 
                {
                    var_62 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)124))))) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) (signed char)-50))));
                    arr_136 [i_36] [i_28] [i_36] [i_37] = ((/* implicit */unsigned char) max((((signed char) -6510099424199460723LL)), (arr_94 [i_28])));
                    var_63 = ((/* implicit */signed char) (+(((arr_1 [i_36]) - (arr_1 [i_24])))));
                }
                var_64 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_135 [i_36]))) ? (((((/* implicit */_Bool) arr_135 [i_24])) ? (((/* implicit */int) arr_135 [i_36])) : (((/* implicit */int) arr_135 [i_24])))) : (((/* implicit */int) max((var_0), (arr_135 [i_28]))))));
            }
        }
    }
    var_65 = var_6;
    var_66 = ((/* implicit */signed char) max((var_66), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((var_11) % (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_38 = 0; i_38 < 13; i_38 += 2) 
    {
        var_67 = var_3;
        var_68 = ((/* implicit */long long int) ((((((/* implicit */int) var_6)) < (((/* implicit */int) var_5)))) ? (((((/* implicit */_Bool) (unsigned char)163)) ? (-996253195) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) arr_26 [i_38] [i_38] [i_38]))));
        arr_139 [i_38] = ((/* implicit */short) ((arr_109 [i_38]) ? (((/* implicit */int) arr_121 [i_38] [i_38])) : (((/* implicit */int) arr_109 [i_38]))));
    }
}
