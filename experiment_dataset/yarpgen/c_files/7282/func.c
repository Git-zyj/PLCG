/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7282
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
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (18446744073709551613ULL) : (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2 - 1] [i_2 + 1])))));
                    var_20 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0 - 3] [i_2]))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((var_11) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_0 - 3] [i_0])) || (((/* implicit */_Bool) (unsigned char)112))))))));
        arr_8 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (18446744073709551614ULL)));
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_3 [i_0] [i_0] [i_0]))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                {
                    arr_20 [i_3] = ((/* implicit */int) (signed char)78);
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) -742735609))))) ? ((~(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54)))))) ? (max((((unsigned long long int) (signed char)87)), ((-(arr_12 [i_5]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (min((847554873U), (((/* implicit */unsigned int) arr_11 [i_4])))))))));
                    var_24 -= ((/* implicit */short) arr_9 [i_4] [i_4]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_25 ^= ((/* implicit */short) (((~(((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))) - (((((/* implicit */int) arr_9 [i_4] [i_5])) * (((/* implicit */int) arr_9 [i_4] [i_4]))))));
                        arr_23 [i_6] [i_6] [i_6] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 814506377U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_4] [i_5]))) : (var_4))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))) == (((((/* implicit */_Bool) (signed char)-101)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65524)))))));
                        arr_24 [i_6] [i_6] = var_16;
                    }
                    for (int i_7 = 3; i_7 < 21; i_7 += 4) /* same iter space */
                    {
                        var_26 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((arr_17 [i_7 - 3] [i_7] [i_7 - 1] [i_7 - 1]) ? (((/* implicit */int) arr_17 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) arr_17 [i_7 + 1] [i_7] [i_7] [i_7 - 1]))))), ((-(arr_25 [i_7 - 2] [i_3] [i_7 - 2] [i_7 - 2] [i_3] [i_7 + 1])))));
                        var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65506)) / (max((((((/* implicit */int) (unsigned char)143)) / (-1403899556))), (((/* implicit */int) arr_22 [i_3] [i_3] [i_5] [i_3] [i_3] [i_3]))))));
                        arr_27 [i_3] [i_4] [i_7] [5] [i_7 + 1] = ((/* implicit */unsigned int) (_Bool)0);
                        var_28 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_25 [i_3] [i_5] [i_7 - 1] [i_7 + 1] [i_3] [i_7 + 1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))) : (((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) | (max((((/* implicit */long long int) var_2)), (arr_10 [i_3] [i_3])))))));
                    }
                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 21; i_8 += 4) /* same iter space */
                    {
                        arr_32 [i_5] [(short)11] [i_5] [(short)11] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_4] [i_5] [i_3] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)50))) : (var_17)));
                        var_29 = ((/* implicit */short) ((((((/* implicit */int) (signed char)-79)) == (((/* implicit */int) (signed char)0)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (!(((/* implicit */_Bool) 12453002734654033894ULL)))))));
                    }
                    var_30 ^= ((/* implicit */_Bool) max((max((24ULL), (((/* implicit */unsigned long long int) arr_10 [i_3] [i_3])))), (((/* implicit */unsigned long long int) 1534225063))));
                }
            } 
        } 
        var_31 -= ((/* implicit */signed char) max((((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_14)))) - ((~(((/* implicit */int) (unsigned short)3872)))))), (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                {
                    arr_37 [(unsigned short)8] [(unsigned short)8] [i_10] [(unsigned short)8] = ((/* implicit */signed char) ((min((max((arr_12 [(unsigned short)5]), (((/* implicit */unsigned long long int) 1695962554U)))), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned int) (unsigned char)2))))))) << (((((/* implicit */int) (unsigned char)99)) - (38)))));
                    var_32 *= ((/* implicit */_Bool) ((max((((/* implicit */int) (signed char)-12)), (arr_33 [i_3] [i_3]))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)107)))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) 
    {
        for (unsigned long long int i_12 = 2; i_12 < 16; i_12 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
                            {
                                arr_51 [i_15] [i_12] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)76)) + (((/* implicit */int) (unsigned char)103))))) ? (((/* implicit */long long int) (+(arr_31 [i_15] [i_13] [i_12 - 1] [i_11])))) : (min((((/* implicit */long long int) (unsigned short)19200)), (3288082976659460578LL))))) == (min((((/* implicit */long long int) (-(((/* implicit */int) arr_48 [i_11] [i_11] [i_11] [i_11]))))), (((((/* implicit */_Bool) 1ULL)) ? (arr_10 [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_11] [i_12 - 2])))))))));
                                var_33 &= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) (signed char)-12)), ((short)26211)))) == (((((/* implicit */int) (unsigned char)239)) + (((/* implicit */int) var_2))))))), (((((arr_2 [i_12 - 1] [i_12 - 1] [i_12 - 2]) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) (_Bool)1)))) - (1)))))));
                                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1743743046694991025LL)) || (((/* implicit */_Bool) arr_44 [(short)3]))))), (((unsigned int) ((((/* implicit */int) (short)32767)) / (((/* implicit */int) (_Bool)1))))))))));
                                var_35 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_15)))))))));
                            }
                            /* vectorizable */
                            for (int i_16 = 0; i_16 < 17; i_16 += 2) 
                            {
                                var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_12] [i_14] [i_14] [i_12] [i_12] [i_12 - 2])) != (((/* implicit */int) (unsigned char)101))));
                                var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) var_12))));
                                arr_56 [i_16] [i_14] [i_13] [i_12 + 1] [i_11] = ((/* implicit */int) ((unsigned long long int) ((16383) << (((arr_55 [i_11] [i_12 - 2] [i_13] [i_14] [i_11] [i_11]) - (710827016U))))));
                            }
                            /* LoopSeq 2 */
                            for (long long int i_17 = 1; i_17 < 16; i_17 += 2) 
                            {
                                arr_61 [i_14] [i_17] [i_17] [i_17] [i_13] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)242)))) + (((/* implicit */int) (short)32758))));
                                var_38 -= ((/* implicit */unsigned char) (((((~(((/* implicit */int) (unsigned short)3)))) * (((((/* implicit */_Bool) 0ULL)) ? (arr_11 [i_13]) : (((/* implicit */int) (unsigned char)84)))))) <= ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)23)) == (arr_49 [i_17 - 1] [i_14] [i_13] [i_14] [i_11]))))))));
                                arr_62 [i_17] [i_12] [3ULL] [i_12 - 1] [i_12] = max((((unsigned short) ((((/* implicit */_Bool) var_4)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) arr_28 [i_12] [i_12] [i_14] [i_14]))))), ((unsigned short)2));
                            }
                            for (unsigned short i_18 = 0; i_18 < 17; i_18 += 2) 
                            {
                                arr_65 [i_14] [i_11] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_57 [i_12 - 2] [i_14] [i_12 + 1])) ? (min((((/* implicit */unsigned int) var_8)), (102205536U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)80)))))));
                                var_39 = ((/* implicit */unsigned long long int) ((arr_33 [i_11] [i_11]) == (((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) arr_59 [i_13] [i_12 - 1] [i_13] [i_12 - 1] [i_18]))))))))));
                                var_40 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (899328621787957389ULL) : (((/* implicit */unsigned long long int) arr_21 [i_12 + 1]))))) ? (max((arr_21 [i_12 - 2]), (((/* implicit */long long int) (unsigned short)65535)))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_21 [i_12 + 1]) == (arr_21 [i_12 + 1])))))));
                                var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((((arr_46 [i_12 + 1]) >= (arr_46 [i_12 - 2]))) && (((/* implicit */_Bool) (-(((/* implicit */int) (!((_Bool)1))))))))))));
                            }
                            arr_66 [i_11] [i_11] [i_13] [i_13] [i_14] = ((/* implicit */unsigned long long int) min((max((((/* implicit */short) (signed char)-98)), (arr_38 [i_12 - 2]))), (((/* implicit */short) ((((((/* implicit */_Bool) arr_40 [i_11])) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) arr_4 [8ULL] [i_11] [i_11])))) < (((/* implicit */int) arr_59 [i_14] [i_14] [i_13] [i_13] [i_14])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_19 = 0; i_19 < 17; i_19 += 1) 
                {
                    for (unsigned int i_20 = 0; i_20 < 17; i_20 += 2) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned short) var_9);
                                var_43 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)12)) ? ((+((~(1507435828U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_21] [i_20] [i_11]))))))))));
                            }
                        } 
                    } 
                } 
                var_44 = ((/* implicit */unsigned char) (-((~(((((/* implicit */_Bool) 2146435072U)) ? (880505700U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))))));
                arr_74 [i_11] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45799))) ^ (((899328621787957409ULL) >> (((((((/* implicit */_Bool) var_6)) ? (-1036917437) : (((/* implicit */int) (unsigned short)10653)))) + (1036917484)))))));
            }
        } 
    } 
}
