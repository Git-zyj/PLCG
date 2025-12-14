/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75748
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)96)) : (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 4 */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            var_13 = ((/* implicit */_Bool) arr_3 [i_1 + 1] [i_0 + 1]);
            var_14 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) 1198895735192381892ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))) + (((((/* implicit */_Bool) (short)95)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (short)102))))));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) /* same iter space */
            {
                var_15 = ((/* implicit */short) ((1783040694) - (((((/* implicit */int) arr_5 [i_2] [i_1] [i_0])) ^ (((/* implicit */int) var_9))))));
                var_16 = ((((/* implicit */int) arr_1 [i_0 - 2])) < (((/* implicit */int) arr_1 [i_0 - 1])));
            }
            for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) /* same iter space */
            {
                var_17 ^= ((/* implicit */signed char) ((5852502516870638310ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                var_18 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_0] [i_0 + 1]))));
                /* LoopSeq 4 */
                for (unsigned char i_4 = 1; i_4 < 23; i_4 += 3) 
                {
                    arr_12 [i_0] [i_4] [i_3] [i_4] = ((/* implicit */short) (~(((int) (_Bool)1))));
                    arr_13 [i_0] [i_4] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4] [i_1] [i_1 + 2] [i_4])) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_4] [i_0])) ? (12594241556838913277ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)96))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
                for (int i_5 = 1; i_5 < 22; i_5 += 2) 
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((((_Bool)1) ? (var_0) : (-348327617))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3] [i_1] [i_3])))))));
                    arr_17 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned short) arr_14 [i_0] [i_1] [i_3] [i_5]));
                    var_20 = ((/* implicit */int) ((arr_14 [i_5] [i_5 - 1] [i_3] [i_3 + 1]) ? ((+(arr_0 [i_3] [i_5]))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)236)))))));
                    arr_18 [i_0] [i_1] [(unsigned short)0] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_1] [i_1 - 1])) - (((/* implicit */int) arr_4 [i_1] [i_1 + 1]))));
                    arr_19 [i_0] [i_0] [i_3] [i_5] = ((/* implicit */unsigned char) arr_16 [i_0] [(signed char)16] [i_3]);
                }
                for (int i_6 = 2; i_6 < 24; i_6 += 3) /* same iter space */
                {
                    arr_22 [i_0] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4243)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) -96753874167002726LL))));
                    arr_23 [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */int) ((9361015207133720838ULL) + (((((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_1])) % (18446744073709551615ULL)))));
                }
                for (int i_7 = 2; i_7 < 24; i_7 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7173)) ? (-997362792) : (var_2)))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (short)8731))))) : (((/* implicit */int) var_5)))))));
                        var_22 += ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_27 [i_3 + 4] [i_3] [i_7] [i_3 + 4] [4U])));
                        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (unsigned short)43610)))) < (((((/* implicit */_Bool) arr_4 [i_1] [i_8])) ? (((/* implicit */int) (unsigned short)39370)) : (((/* implicit */int) var_3))))));
                        var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)(-32767 - 1))) * (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_8 [i_0] [i_1] [i_7] [i_8])))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_25 = (_Bool)1;
                        var_26 += var_11;
                    }
                    for (int i_10 = 3; i_10 < 22; i_10 += 3) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (arr_11 [i_3] [i_3])))) ? (((((/* implicit */_Bool) -1783040695)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (13890151613088201147ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_3] [i_7] [i_10])) || (((/* implicit */_Bool) arr_28 [i_7]))))))));
                        arr_35 [i_0] [i_7] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4556592460621350468ULL)) ? (((/* implicit */int) (short)-14763)) : (1953600272)));
                        var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 348327596)) ? (((/* implicit */int) (_Bool)1)) : (var_2)))));
                    }
                    arr_36 [i_7] [i_1] [i_1] [i_7] = ((/* implicit */unsigned long long int) ((arr_15 [i_0 - 1]) != (arr_25 [i_0 - 2] [i_1] [i_3] [i_7 - 1])));
                }
            }
            for (unsigned short i_11 = 1; i_11 < 21; i_11 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((arr_39 [(unsigned char)12] [i_0 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_10 [(short)6] [i_0] [i_1 + 2] [i_11 - 1]))))));
                var_30 = ((/* implicit */short) ((_Bool) var_6));
            }
            arr_40 [i_0] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
        }
        for (unsigned int i_12 = 1; i_12 < 22; i_12 += 3) /* same iter space */
        {
            var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_20 [(signed char)24] [i_12] [i_0] [(unsigned char)18]))) ? (((-1521244688) | (416944337))) : (((arr_25 [i_0] [i_0] [i_12] [i_12]) + (arr_9 [5] [i_0] [i_0] [i_0] [i_0])))));
            var_32 = ((/* implicit */int) (signed char)-42);
            var_33 += ((/* implicit */short) ((unsigned short) (-(1421020388937967209ULL))));
        }
        for (unsigned int i_13 = 1; i_13 < 22; i_13 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_14 = 4; i_14 < 24; i_14 += 3) 
            {
                var_34 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (((17247848338517169706ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))))));
                var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) ((unsigned char) arr_39 [(signed char)6] [(signed char)6]))) : (((/* implicit */int) ((unsigned char) (unsigned short)0))))))));
                arr_48 [i_13] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_8 [i_14] [i_14] [i_13] [(unsigned char)2]))));
                arr_49 [i_13] [i_13] = ((/* implicit */signed char) var_11);
            }
            for (int i_15 = 1; i_15 < 21; i_15 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 3; i_16 < 22; i_16 += 3) 
                {
                    for (unsigned char i_17 = 3; i_17 < 22; i_17 += 4) 
                    {
                        {
                            var_36 += ((/* implicit */unsigned short) (+(arr_9 [i_0 - 2] [i_0] [i_15 + 3] [i_16] [i_17])));
                            arr_57 [i_0] [i_13] [i_13] [i_0] [2LL] [i_16] [i_17] = ((/* implicit */signed char) var_3);
                            var_37 = ((/* implicit */signed char) (_Bool)1);
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) var_2))));
                            var_39 = (+(((/* implicit */int) arr_21 [i_0] [i_13] [i_15] [i_15] [i_17])));
                        }
                    } 
                } 
                arr_58 [i_13] [i_0] [i_13] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) arr_37 [i_13 + 1] [i_0 + 1] [i_15 + 3] [i_15])) : (arr_55 [i_13 - 1] [i_13] [1ULL] [i_0] [i_13] [1ULL] [i_0])));
                var_40 = ((/* implicit */unsigned char) arr_16 [i_15] [i_13] [(unsigned char)17]);
                var_41 += ((/* implicit */unsigned char) (+(((var_3) ? (((/* implicit */int) (short)22062)) : (((/* implicit */int) var_7))))));
                var_42 = ((/* implicit */int) (signed char)54);
            }
            /* LoopSeq 2 */
            for (unsigned char i_18 = 3; i_18 < 23; i_18 += 3) 
            {
                var_43 ^= var_2;
                var_44 = (unsigned char)141;
            }
            for (short i_19 = 1; i_19 < 24; i_19 += 3) 
            {
                var_45 = ((/* implicit */_Bool) 14496700274147988721ULL);
                arr_65 [i_19] [i_13] [i_13] [i_0] = ((/* implicit */_Bool) arr_52 [i_19] [i_13 + 1] [i_13] [i_13] [i_0 - 1] [i_0]);
                var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) (+(arr_42 [i_0]))))));
                arr_66 [i_13] [12ULL] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)14467)) <= (((/* implicit */int) (unsigned short)32757))));
            }
        }
        for (unsigned int i_20 = 1; i_20 < 22; i_20 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_21 = 2; i_21 < 24; i_21 += 1) 
            {
                var_47 = ((/* implicit */unsigned char) (~(4294967279U)));
                arr_71 [i_20] [i_20] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [i_21 - 1] [i_21] [i_21 - 1] [i_20 + 2] [i_0] [i_0 - 1])) ? (arr_52 [i_21] [i_21] [i_21 - 1] [i_20 + 3] [i_0] [i_0 - 2]) : (arr_52 [i_21] [i_21] [i_21 - 1] [i_20 - 1] [i_0] [i_0 + 1])));
                var_48 = ((/* implicit */unsigned char) ((signed char) (short)-17884));
            }
            /* LoopSeq 2 */
            for (long long int i_22 = 2; i_22 < 23; i_22 += 3) 
            {
                arr_76 [i_0] = ((/* implicit */signed char) ((_Bool) (short)-12822));
                /* LoopSeq 1 */
                for (unsigned char i_23 = 1; i_23 < 23; i_23 += 3) 
                {
                    var_49 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17457)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (signed char)48))));
                    var_50 ^= ((/* implicit */unsigned long long int) (+(12U)));
                }
                var_51 = ((/* implicit */_Bool) ((int) arr_10 [(short)12] [i_22] [i_22 - 2] [i_22]));
                var_52 ^= ((/* implicit */unsigned short) arr_39 [(short)20] [i_20]);
            }
            for (unsigned int i_24 = 2; i_24 < 23; i_24 += 1) 
            {
                var_53 = ((short) 4294967269U);
                var_54 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_11 [i_24] [i_20]) : (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) (unsigned char)10)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) var_1)))));
            }
        }
        arr_83 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)11245)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_0 - 2] [(unsigned char)4] [i_0 - 2] [i_0]))) : (arr_52 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 - 2])));
        var_55 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-2097)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_70 [i_0 - 1] [i_0 + 1] [i_0]))));
    }
    /* vectorizable */
    for (short i_25 = 3; i_25 < 21; i_25 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_26 = 1; i_26 < 23; i_26 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_27 = 1; i_27 < 22; i_27 += 3) 
            {
                for (short i_28 = 2; i_28 < 22; i_28 += 3) 
                {
                    {
                        var_56 += ((/* implicit */int) var_7);
                        arr_95 [i_25] [i_25] [i_27] [i_28] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) arr_32 [i_25] [i_26] [i_25] [i_27] [i_25])) - (173)))))) ? (((/* implicit */int) arr_5 [i_28] [i_26] [12ULL])) : ((+(((/* implicit */int) arr_28 [i_25]))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_29 = 4; i_29 < 23; i_29 += 4) 
            {
                var_57 ^= ((/* implicit */unsigned int) var_10);
                arr_98 [i_25] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (939524096U))) * (((((/* implicit */unsigned int) ((/* implicit */int) (short)14496))) / (4294967251U)))));
                var_58 = ((/* implicit */short) ((unsigned long long int) var_12));
            }
            for (unsigned long long int i_30 = 2; i_30 < 21; i_30 += 3) 
            {
                arr_103 [i_25] [i_25] = ((unsigned long long int) 2192727224U);
                /* LoopSeq 1 */
                for (unsigned long long int i_31 = 1; i_31 < 20; i_31 += 4) 
                {
                    var_59 += ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_25 + 1])) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) (+(arr_15 [(unsigned char)19]))))));
                    arr_107 [i_25] [i_25] [i_25] [i_25] [i_25] = ((/* implicit */unsigned int) arr_20 [i_25] [i_30] [i_26] [i_25]);
                }
                var_60 = ((((((/* implicit */_Bool) arr_81 [i_25] [i_26] [i_30] [i_26])) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) arr_39 [i_25] [i_26])))) > (((/* implicit */int) ((((/* implicit */int) arr_27 [i_25] [i_30] [i_26] [i_25] [i_25])) < (((/* implicit */int) var_9))))));
                var_61 ^= ((/* implicit */long long int) arr_14 [i_30] [i_30] [7] [i_30]);
            }
        }
        var_62 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_90 [i_25])))))));
        var_63 = ((/* implicit */signed char) arr_33 [i_25] [i_25] [(unsigned char)15] [i_25 - 1]);
        /* LoopSeq 1 */
        for (unsigned char i_32 = 2; i_32 < 23; i_32 += 3) 
        {
            var_64 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) arr_7 [i_25])) | (arr_15 [i_25]))));
            var_65 = ((/* implicit */int) ((short) var_8));
        }
        var_66 = ((/* implicit */signed char) min((var_66), (((signed char) (signed char)-36))));
    }
    /* LoopNest 3 */
    for (signed char i_33 = 1; i_33 < 19; i_33 += 3) 
    {
        for (unsigned char i_34 = 1; i_34 < 21; i_34 += 3) 
        {
            for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
            {
                {
                    arr_121 [i_34] [i_34] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_35] [i_33] [i_33] [i_34] [i_33])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_33 [i_33] [i_34] [i_34] [i_35]))))), (arr_10 [i_34] [i_34] [i_35] [i_35])))) ? (((/* implicit */int) (short)-10786)) : (((((/* implicit */int) arr_99 [i_33 - 1] [(signed char)10] [i_34 + 1] [(signed char)21])) - (((/* implicit */int) (unsigned char)185))))));
                    var_67 = ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 2102240072U)))));
                    var_68 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_101 [i_34] [i_34 - 1] [i_35]) ? (((/* implicit */int) arr_101 [i_34] [i_34 - 1] [i_34])) : (((/* implicit */int) arr_101 [i_34] [i_34 + 1] [i_35]))))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)32086)) | (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)36))))))))));
                }
            } 
        } 
    } 
}
