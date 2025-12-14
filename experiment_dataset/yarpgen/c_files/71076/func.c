/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71076
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 13; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [i_2 + 1] [i_4 - 1] [i_4]))));
                                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3] [i_1 - 2] [i_4 + 2] [i_3] [i_1])) ? (arr_10 [i_0] [6U] [i_2 + 2] [i_3] [i_2 + 2]) : (arr_10 [i_4 + 1] [i_3] [i_2 - 3] [i_1] [i_0]))))));
                                var_17 |= ((/* implicit */long long int) arr_0 [i_1 - 2]);
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18110562U)) ? (18446744073709551615ULL) : (18446744073709551601ULL)))))))));
                    var_19 = ((/* implicit */short) (!(arr_6 [i_2 + 4])));
                    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 + 2] [i_1] [i_0])))))));
                }
                arr_13 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)235)), (((((/* implicit */_Bool) 7425335483682667063ULL)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)235)))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)3)) || (((/* implicit */_Bool) (unsigned char)234))))), (var_14))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (min((((/* implicit */long long int) 1023706090U)), (-8397154373171296816LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                var_21 = ((_Bool) arr_4 [2LL] [2LL] [i_1]);
                var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)0) ? (4469774657194199528LL) : (((/* implicit */long long int) 2418178525U))))) ? (((((/* implicit */_Bool) 3490323248U)) ? (((((((/* implicit */int) (short)-24585)) + (2147483647))) >> (((arr_12 [i_0] [i_1] [i_1] [i_1 - 1] [i_1] [i_0]) + (317752515))))) : (((int) 1876788770U)))) : (((/* implicit */int) (unsigned char)251))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            {
                var_23 = ((/* implicit */int) min((var_23), ((~(((((/* implicit */_Bool) arr_11 [i_5] [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_6] [(short)4])) ? (var_10) : ((~(((/* implicit */int) arr_3 [i_5] [i_6] [i_6]))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        var_24 ^= ((/* implicit */int) ((unsigned short) (_Bool)1));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 3; i_9 < 10; i_9 += 1) 
                        {
                            arr_26 [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_15 [i_6])) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)35))) : (((arr_0 [i_5]) ? (arr_10 [i_5 - 1] [i_6] [i_7] [i_6] [i_9 - 2]) : (((/* implicit */long long int) arr_19 [i_6] [i_6] [i_6] [(unsigned char)7]))))));
                            var_25 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_25 [i_5 - 1] [11ULL] [i_6] [i_5 - 1] [i_5 - 1] [(unsigned char)9]) : (arr_11 [i_5 - 1] [(_Bool)1] [(short)8] [(_Bool)1] [i_8] [(unsigned char)3] [i_9]))))));
                        }
                    }
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((arr_20 [i_5 - 1] [6U] [i_5] [0U]) + (9223372036854775807LL))) << (((664775083832899869LL) - (664775083832899869LL))))))));
                        var_27 = ((/* implicit */unsigned int) arr_2 [i_6] [i_6]);
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5])) ? (var_3) : (var_5)))) != ((~(arr_1 [i_5])))));
                    }
                    for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 3; i_12 < 10; i_12 += 2) /* same iter space */
                        {
                            var_29 -= ((/* implicit */unsigned long long int) (!(arr_0 [i_11])));
                            arr_35 [i_11] [(_Bool)1] [i_7] [i_5] [i_11] = ((/* implicit */unsigned int) (+(arr_10 [i_5 - 1] [i_5] [2LL] [i_5] [i_5])));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (arr_17 [i_5])));
                        }
                        for (unsigned int i_13 = 3; i_13 < 10; i_13 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned long long int) arr_2 [i_13] [i_7]);
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((((/* implicit */_Bool) arr_22 [i_6] [i_5 - 1] [i_6])) ? (2418178508U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((arr_2 [(unsigned short)16] [i_6]) ? (((/* implicit */int) arr_2 [i_7] [i_5 - 1])) : (((/* implicit */int) var_7))))))))));
                            var_33 ^= ((/* implicit */long long int) arr_22 [i_5 - 1] [i_5 - 1] [i_5 - 1]);
                        }
                        arr_38 [i_5] [i_6] [i_11] [i_11] = ((/* implicit */unsigned char) (~(arr_16 [i_5] [i_5] [i_5 - 1])));
                        var_34 += ((/* implicit */int) ((arr_30 [i_6] [i_7] [i_11]) < (arr_30 [i_11] [i_6] [i_5 - 1])));
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5 - 1]))) : (arr_25 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5])));
                    }
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 3; i_15 < 11; i_15 += 2) 
                        {
                            var_36 -= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)234)) ? ((-(arr_34 [i_6] [i_6] [i_6] [i_6] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5 - 1])))));
                            var_37 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                            var_38 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_5 - 1] [9U] [i_5 - 1] [i_5 - 1])) ? (arr_9 [i_5 - 1] [i_6] [i_7] [i_6]) : (arr_9 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1])));
                            var_39 = ((/* implicit */long long int) min((var_39), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [7U] [i_15] [i_5] [i_14])) ? (((/* implicit */unsigned long long int) 721811534U)) : (10993671602239991191ULL)))) ? (-6250411294430787833LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)24597)))))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned int i_16 = 1; i_16 < 11; i_16 += 2) 
                        {
                            var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_16] [i_14] [i_7] [i_7] [i_6] [(short)5])) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)26213))))) : (arr_39 [i_5 - 1]))))));
                            arr_47 [i_5 - 1] [i_5 - 1] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_16 + 1] [i_16 + 1] [10] [i_5 - 1] [i_16] [i_16 + 1])) ? (arr_40 [i_16 + 1] [i_6] [i_16 - 1] [i_5 - 1] [i_16] [i_5 - 1]) : (arr_40 [i_16 - 1] [i_16 - 1] [i_7] [i_5 - 1] [i_7] [i_14])));
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_41 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(15632597491666272008ULL)))) ? (arr_25 [i_5] [i_17] [i_5] [i_5 - 1] [i_17] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)109)))));
                            var_42 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5 - 1] [i_5 - 1] [i_7]))) & (arr_24 [i_5] [i_5 - 1])));
                            var_43 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [5LL] [i_6] [5LL] [i_14] [i_17] [i_17])) ? (arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) : (32736U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_40 [i_5 - 1] [i_5] [i_7] [i_14] [i_6] [i_7]) < (((/* implicit */unsigned int) arr_12 [i_5] [i_6] [i_7] [i_5] [i_6] [i_7])))))) : (((arr_14 [(signed char)10]) ? (((/* implicit */unsigned long long int) -151429650)) : (arr_43 [i_17] [i_17] [i_14] [i_6] [i_6] [i_5]))));
                        }
                        for (short i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            arr_52 [i_5] [i_6] [i_5] [(unsigned char)11] [(unsigned char)11] = ((unsigned int) (unsigned char)160);
                            arr_53 [i_5] [i_5] [(_Bool)1] [i_14] [2] = ((/* implicit */unsigned long long int) arr_18 [i_5] [10LL] [i_5 - 1]);
                        }
                        for (unsigned int i_19 = 3; i_19 < 10; i_19 += 4) 
                        {
                            arr_56 [i_5] [i_5] [i_6] [9] [i_7] [i_14] [i_19] = ((/* implicit */signed char) arr_25 [i_5 - 1] [i_6] [i_5] [i_14] [i_6] [i_6]);
                            var_44 ^= ((/* implicit */unsigned int) arr_51 [i_19 + 2] [i_19 + 2] [i_19] [i_19 - 3] [i_19]);
                            var_45 *= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) (_Bool)1))));
                            arr_57 [4] [i_14] [i_19] [5LL] [i_19] [(unsigned char)6] [i_5 - 1] = ((/* implicit */unsigned int) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_50 [i_5] [i_6] [i_5] [i_14] [i_6]) < (629973847U)))))));
                        }
                    }
                    var_46 = ((/* implicit */long long int) ((arr_4 [i_5] [i_6] [i_7]) ? (((((/* implicit */_Bool) var_9)) ? (11936050138161512978ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 151429641)) ? (((/* implicit */int) arr_6 [i_5])) : (((/* implicit */int) arr_55 [i_5] [i_5] [i_7] [i_6] [i_5])))))));
                }
                for (int i_20 = 0; i_20 < 12; i_20 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_47 = ((/* implicit */long long int) (-(var_11)));
                        var_48 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_31 [i_21] [i_6] [i_20] [i_5])) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (11915866521672742709ULL)))))) ? (max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_32 [i_21] [i_21]))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26213))) : (arr_31 [i_6] [i_20] [i_6] [i_5]))))) : (((arr_32 [i_21] [i_5 - 1]) ? (arr_40 [i_5 - 1] [4LL] [i_20] [i_21] [i_21] [i_20]) : (arr_40 [i_5 - 1] [i_6] [i_20] [i_21] [i_6] [i_20])))));
                    }
                    var_49 = ((/* implicit */int) max((((/* implicit */long long int) min(((+(1747294515))), (((((/* implicit */int) var_6)) + (((/* implicit */int) var_7))))))), ((+(max((((/* implicit */long long int) (short)24597)), (3855741779362397114LL)))))));
                    arr_66 [i_5] [i_5 - 1] [i_5] [i_5 - 1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~((~(((/* implicit */int) var_6))))))), (((long long int) ((((((/* implicit */int) (short)-24582)) + (2147483647))) << (((11936050138161512957ULL) - (11936050138161512957ULL))))))));
                }
                /* vectorizable */
                for (unsigned int i_22 = 0; i_22 < 12; i_22 += 2) 
                {
                    var_50 = ((/* implicit */_Bool) max((var_50), ((!(((/* implicit */_Bool) arr_36 [i_5] [i_5] [i_5] [i_5 - 1] [i_22] [i_5 - 1]))))));
                    var_51 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (~(-151429651)))) : (((((/* implicit */_Bool) arr_34 [i_22] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) arr_8 [i_5] [i_5] [i_5 - 1] [i_5] [i_5])) : (var_12)))));
                    var_52 = ((/* implicit */long long int) -151429649);
                }
                var_53 *= ((/* implicit */unsigned int) ((arr_37 [i_5 - 1] [(unsigned short)4] [i_6]) ? ((-(var_0))) : (((/* implicit */unsigned long long int) var_1))));
            }
        } 
    } 
    var_54 = ((/* implicit */short) max((var_54), (var_9)));
}
