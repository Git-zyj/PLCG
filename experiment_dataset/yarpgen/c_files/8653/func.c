/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8653
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
    for (int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) && (((/* implicit */_Bool) var_2))))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1])))))));
        arr_5 [i_0 + 3] [(unsigned char)0] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (unsigned char)239)) && (((/* implicit */_Bool) (short)7237))))));
        arr_6 [i_0] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) ((short) arr_1 [i_0 + 3]))))), ((+(((/* implicit */int) arr_1 [i_0 + 1]))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) var_14);
            /* LoopSeq 1 */
            for (short i_2 = 4; i_2 < 23; i_2 += 3) 
            {
                var_20 = (+((-(var_14))));
                arr_12 [i_0] [i_1 + 1] [(unsigned char)17] [i_2] = ((/* implicit */signed char) (((~(((/* implicit */int) var_9)))) | (max((var_14), (((/* implicit */int) var_9))))));
            }
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            arr_22 [(unsigned char)2] [(_Bool)1] [i_3] [i_1 - 2] [21ULL] = ((5083952835275979120LL) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (var_16))))));
                            var_21 *= ((/* implicit */short) (signed char)127);
                        }
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */int) (signed char)114)))) < (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_6))))))))));
                            var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-7241)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_19 [i_0] [(short)3] [i_0] [i_0]))))) : (((unsigned int) -1LL)))) << (((((((arr_23 [i_0 + 1] [i_1 + 1]) + (9223372036854775807LL))) >> (((/* implicit */int) var_9)))) - (8612795666645323712LL)))));
                        }
                        var_24 = arr_11 [i_0 + 2] [i_1] [i_4] [i_1];
                        /* LoopSeq 4 */
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                        {
                            arr_30 [(unsigned char)21] [i_4] [i_4] [i_4] [i_4] [i_4] [3] = ((/* implicit */int) (unsigned char)93);
                            arr_31 [i_7] [i_4] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)-7241)) : (((/* implicit */int) var_6))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [10ULL]))) & (var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-116)) * (((/* implicit */int) (short)-7237)))))));
                            var_25 = ((/* implicit */unsigned char) ((-701638931) | (((/* implicit */int) (unsigned char)93))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)255)) || (arr_1 [i_0 + 3]))) ? (min((max((((/* implicit */unsigned long long int) var_17)), (var_3))), (((/* implicit */unsigned long long int) ((short) arr_32 [i_3] [i_3] [i_3] [i_3] [i_8]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_3) : (var_7)))) ? (((/* implicit */int) (short)-15048)) : (((/* implicit */int) arr_25 [i_1] [i_1] [i_1 + 2] [(short)6] [i_1 + 1] [i_1])))))));
                            arr_34 [i_1] [(short)23] [i_1] [i_8] [i_1] = ((/* implicit */long long int) (signed char)127);
                            arr_35 [i_8] [i_4] [i_8] [i_1 - 2] [i_8] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_4] [i_4] [i_4])) ? (((/* implicit */int) min((arr_13 [i_0] [(unsigned char)19] [i_8]), (((/* implicit */unsigned char) (signed char)-127))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_13 [i_1 - 2] [i_4] [i_8])) : (((/* implicit */int) arr_13 [i_0] [i_3] [i_8]))))));
                            var_27 = ((/* implicit */unsigned int) (((~(min((417864572U), (((/* implicit */unsigned int) arr_10 [i_8] [i_3] [i_1] [(unsigned char)17])))))) == (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_28 [i_0 + 3])))))));
                            var_28 *= ((/* implicit */short) ((((((/* implicit */int) (short)29827)) >> (0))) << ((((+(arr_16 [i_1 - 3] [i_1 + 2] [(signed char)11] [i_1 + 1]))) - (8307838694957704417LL)))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
                        {
                            arr_38 [i_0] [i_1] [i_3] [i_4] [i_4] [i_9] [i_9] = max((min((var_7), (((/* implicit */unsigned long long int) arr_19 [i_9] [i_1 - 3] [i_0 + 3] [7ULL])))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [22LL] [i_1 - 3] [i_0 + 3] [i_0 - 1]))))));
                            var_29 = var_5;
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
                        {
                            arr_42 [i_0] [i_10] [i_1] [i_3] [i_4] [22] [i_10] = ((/* implicit */unsigned long long int) (unsigned char)11);
                            arr_43 [5ULL] [15ULL] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_36 [3LL] [i_1 + 1] [i_0 - 1] [i_4] [i_10] [(_Bool)1]), (((/* implicit */unsigned char) (signed char)-4)))))));
                        }
                        var_30 |= ((/* implicit */int) min((((arr_17 [18LL] [i_0 + 3] [i_1 - 1] [i_1 + 2]) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */long long int) min((((/* implicit */short) var_5)), (arr_3 [i_0]))))));
                    }
                } 
            } 
        }
        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_13 = 1; i_13 < 23; i_13 += 4) 
                {
                    var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((524287), (((/* implicit */int) (unsigned char)192))))) ? (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) var_12)))) : (((/* implicit */int) (signed char)4)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) (+(var_0)))))))));
                    var_32 = ((/* implicit */_Bool) 1375863346);
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 1; i_14 < 23; i_14 += 4) 
                {
                    var_33 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30991)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209))) : (18446744073709551615ULL)))) ? (((var_14) + (1375863357))) : (((/* implicit */int) (short)-7241))))) ? (max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_11)) : (var_3))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (var_0))), ((-(var_14))))))));
                    var_34 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-34))))));
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (~(max(((+(var_18))), (((((/* implicit */int) arr_7 [i_11])) ^ (((/* implicit */int) var_15)))))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    for (short i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        {
                            var_36 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_9))))) ? (max((701638931), (-1174460478))) : ((~(((/* implicit */int) (short)7237))))))));
                            arr_58 [i_0] [i_0] [i_0] [i_11] [i_0] = var_9;
                            arr_59 [i_0] [i_11] [i_12] [(unsigned char)10] [i_15] [i_11] = ((/* implicit */_Bool) max((29360128ULL), (((/* implicit */unsigned long long int) -8184014187375350874LL))));
                        }
                    } 
                } 
                arr_60 [i_12] [i_11] = ((/* implicit */short) ((((1688462936977504061ULL) << (((1152921504606846975ULL) - (1152921504606846917ULL))))) == (((/* implicit */unsigned long long int) -1653358992))));
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 24; i_17 += 4) 
                {
                    arr_63 [i_11] [6ULL] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_16)) / (var_1)))) ? (((var_11) >> (((arr_24 [(short)17] [i_0] [i_11] [i_12] [i_17]) - (4967244788586452583ULL))))) : (((/* implicit */int) max((((/* implicit */short) var_15)), (var_13))))));
                    var_37 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_49 [i_11] [i_0 + 1] [i_0 - 1] [i_0] [(unsigned char)11])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))) : (arr_18 [i_17] [i_12] [i_11] [(short)8] [i_0 - 1]))), (((/* implicit */int) min((((/* implicit */signed char) var_10)), (var_4))))));
                }
            }
            var_38 |= ((/* implicit */unsigned char) (((~(arr_53 [i_0] [0] [i_0]))) >> (((((((/* implicit */_Bool) (unsigned char)133)) ? (max((65535), (((/* implicit */int) (short)-13499)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_0] [14LL] [i_0] [i_0] [i_0 - 1] [(unsigned char)10]))))))) - (65495)))));
        }
        for (int i_18 = 3; i_18 < 23; i_18 += 1) 
        {
            var_39 = ((/* implicit */unsigned long long int) var_0);
            var_40 = ((((var_7) ^ (((/* implicit */unsigned long long int) 648398045)))) << (((var_14) + (1855183703))));
            arr_66 [i_18] [i_18] = ((/* implicit */unsigned long long int) var_2);
        }
        /* vectorizable */
        for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 4) 
        {
            var_41 = ((/* implicit */unsigned long long int) min((var_41), ((-(arr_55 [i_0 - 1] [i_0 + 3] [i_0] [i_0])))));
            var_42 = ((/* implicit */unsigned long long int) var_9);
        }
    }
    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((2147483647) - (2147483639)))))) ? (((/* implicit */int) var_15)) : (((((((/* implicit */int) var_8)) + (2147483647))) << (((((((/* implicit */int) var_13)) + (20301))) - (18)))))))));
    var_44 = ((/* implicit */short) ((var_14) == (((/* implicit */int) var_4))));
    var_45 = ((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) var_12)) : ((-(var_11)))));
}
