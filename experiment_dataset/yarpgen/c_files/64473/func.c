/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64473
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_17 ^= arr_2 [i_0] [i_0];
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_12)), (18446744073709551614ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2 - 2] [i_2 - 1])))));
                    var_18 = ((unsigned short) (unsigned short)1792);
                    var_19 = ((/* implicit */short) ((((((/* implicit */int) arr_2 [i_2 + 1] [i_2])) & (((/* implicit */int) arr_2 [i_0] [i_0])))) & (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0 - 1])), (var_0))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned short)1761), (((/* implicit */unsigned short) arr_1 [i_0 + 1]))))) << (((min((((/* implicit */unsigned long long int) (unsigned short)46924)), (18446744073709551596ULL))) - (46922ULL)))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 2) 
    {
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_11 [i_3]), (((/* implicit */unsigned short) var_8))))) < (((/* implicit */int) min((arr_13 [i_3] [i_3 - 1]), (var_7))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (unsigned short i_6 = 4; i_6 < 19; i_6 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                            {
                                arr_21 [i_3] [i_3] [i_3] [i_3] [(unsigned short)12] = ((/* implicit */short) min((arr_18 [i_3 - 1] [i_3]), (((unsigned short) arr_18 [i_3 + 1] [i_3]))));
                                var_21 = ((/* implicit */unsigned char) min((min((((/* implicit */int) arr_15 [i_3] [i_7])), (((((/* implicit */int) arr_20 [i_3] [i_4])) & (((/* implicit */int) var_7)))))), ((+(((/* implicit */int) arr_10 [i_3]))))));
                                arr_22 [i_4] [i_3] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
                            }
                            /* vectorizable */
                            for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                            {
                                arr_26 [i_6] [i_3] [i_5] [i_4] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)56499))));
                                var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)53421)) ? (((/* implicit */int) (unsigned short)53429)) : (((/* implicit */int) (unsigned short)63744))));
                                var_23 = ((/* implicit */signed char) (-(var_11)));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_3 - 1] [i_6 - 2])) ? (22ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3 - 1] [i_6 - 3])))));
                                var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)8863))));
                            }
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                            {
                                var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */short) var_3)), (arr_17 [i_3] [i_3] [i_5] [i_6 + 2]))))));
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_14))));
                                var_28 = max((((/* implicit */unsigned short) (_Bool)0)), (min(((unsigned short)53421), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)31380))))))));
                                arr_29 [i_3] [i_3] [i_3] = ((/* implicit */short) min(((+((~(((/* implicit */int) var_16)))))), (min((((((/* implicit */int) arr_12 [i_6])) >> (((((/* implicit */int) (unsigned short)12115)) - (12098))))), (((/* implicit */int) arr_19 [i_3 + 1]))))));
                                var_29 = ((/* implicit */_Bool) arr_23 [i_6 - 3] [i_6 + 1] [i_6 - 2] [i_6] [i_6] [i_6]);
                            }
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)63745)) ? (((((/* implicit */int) (short)28589)) / (((/* implicit */int) (unsigned char)32)))) : (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (short)32767))))))), (((/* implicit */int) ((((((/* implicit */int) (unsigned short)65153)) << (((((/* implicit */int) var_5)) - (4258))))) < (((/* implicit */int) arr_24 [i_3] [i_3] [i_4]))))))))));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_17 [i_4] [i_3] [i_6] [i_6 - 3])) : (((/* implicit */int) arr_27 [(unsigned char)20] [i_5] [i_5] [i_6 + 3] [i_3]))))) * (min((5711060179722329564ULL), (18446744073709551610ULL)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
                    {
                        arr_34 [i_3] [i_3] [i_3] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_14 [i_3] [i_4] [i_3] [i_4])) ? (((/* implicit */int) arr_14 [i_3] [i_3] [i_10] [i_10])) : (((/* implicit */int) arr_14 [i_3] [i_3] [i_3 - 1] [i_3])))), (((/* implicit */int) arr_14 [i_3] [(short)8] [i_10] [i_10]))));
                        var_32 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)63736)) >= (((/* implicit */int) (unsigned short)1785))));
                    }
                    /* vectorizable */
                    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
                    {
                        arr_38 [i_3] = ((/* implicit */short) var_3);
                        var_33 = ((/* implicit */short) (-(((/* implicit */int) (short)-5395))));
                        var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_3] [i_3 - 1]))));
                        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_3] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 1] [(signed char)5])))));
                    }
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(7ULL)))) ? ((+(((/* implicit */int) arr_36 [i_3 - 1])))) : (((/* implicit */int) (!(arr_36 [i_3 - 1]))))));
                        var_37 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)24599)))))));
                    }
                    arr_42 [i_3] = ((/* implicit */signed char) min((arr_24 [i_3] [i_4] [i_4]), (((/* implicit */unsigned short) min((((/* implicit */short) var_16)), (arr_33 [i_3] [i_4] [i_3 + 1] [i_4]))))));
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        var_38 = ((/* implicit */_Bool) min(((unsigned short)65535), ((unsigned short)1298)));
                        var_39 = arr_41 [i_3];
                    }
                    for (signed char i_15 = 1; i_15 < 21; i_15 += 3) 
                    {
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((((/* implicit */_Bool) arr_30 [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_3 - 1] [i_3 - 1] [i_3 - 1]))) : (var_11))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_37 [i_3] [i_4] [i_15] [i_15]), (var_7)))))))));
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)1418)) * ((-(((/* implicit */int) var_10))))));
                        arr_48 [i_3 + 1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) var_8);
                    }
                }
                /* vectorizable */
                for (short i_16 = 0; i_16 < 22; i_16 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_17 = 2; i_17 < 19; i_17 += 4) 
                    {
                        arr_55 [i_3] [i_3] [i_3] [(unsigned short)10] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                        arr_56 [i_3] = ((/* implicit */unsigned long long int) arr_41 [i_17]);
                    }
                    for (unsigned long long int i_18 = 3; i_18 < 20; i_18 += 1) /* same iter space */
                    {
                        var_42 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3 - 1] [i_18 + 2])) ? (12ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59781)))));
                        var_43 = arr_14 [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1];
                        var_44 = ((/* implicit */short) var_2);
                        arr_59 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_40 [i_3 - 1] [i_18 + 1] [i_18 - 2] [i_18 + 2])) != (((/* implicit */int) arr_40 [i_3 - 1] [i_18 + 1] [i_18 - 2] [i_18 + 2]))));
                    }
                    for (unsigned long long int i_19 = 3; i_19 < 20; i_19 += 1) /* same iter space */
                    {
                        var_45 *= ((/* implicit */signed char) arr_40 [i_19] [i_4] [i_16] [i_4]);
                        var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) & (((/* implicit */int) arr_49 [i_3 - 1] [i_3 - 1] [i_19 - 3] [i_19]))));
                        /* LoopSeq 2 */
                        for (short i_20 = 0; i_20 < 22; i_20 += 2) 
                        {
                            var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) arr_31 [i_4] [i_4] [i_16]))));
                            arr_67 [i_4] [i_16] [i_16] &= ((/* implicit */short) (+(((/* implicit */int) arr_40 [13ULL] [i_4] [i_16] [i_19]))));
                            var_48 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3])) ? (((/* implicit */int) (short)10045)) : (((/* implicit */int) (_Bool)0))));
                            var_49 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_18 [i_19] [i_3])) != (((/* implicit */int) arr_51 [i_20] [i_3] [i_20])))) ? (((/* implicit */int) arr_15 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_37 [i_3] [i_19 - 2] [i_19] [i_3 - 1]))));
                        }
                        for (short i_21 = 1; i_21 < 20; i_21 += 2) 
                        {
                            arr_72 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (arr_64 [(unsigned short)8] [(unsigned short)8] [i_3] [(unsigned short)8] [i_21 - 1] [i_3 + 1] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65137)))));
                            arr_73 [i_19] [i_4] [i_3] = ((/* implicit */short) (!(((((/* implicit */_Bool) (unsigned short)63743)) && (((/* implicit */_Bool) var_12))))));
                            var_50 = ((/* implicit */unsigned short) var_6);
                            var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) (unsigned short)46924)) : (((/* implicit */int) (unsigned short)59104))));
                        }
                    }
                    var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) (+(((/* implicit */int) (_Bool)0)))))));
                    var_53 = ((short) arr_35 [i_16] [i_16]);
                    /* LoopSeq 1 */
                    for (unsigned char i_22 = 2; i_22 < 18; i_22 += 2) 
                    {
                        arr_76 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)63239)) - (((/* implicit */int) (signed char)81))))) + (((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1785)))))));
                        var_54 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_3 - 1]))));
                    }
                }
                for (unsigned long long int i_23 = 3; i_23 < 21; i_23 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                    {
                        for (unsigned short i_25 = 3; i_25 < 19; i_25 += 2) 
                        {
                            {
                                var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) min((((((/* implicit */int) arr_11 [i_4])) * (((/* implicit */int) arr_11 [i_4])))), (((((/* implicit */int) arr_11 [i_4])) / (((/* implicit */int) var_4)))))))));
                                var_56 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) (_Bool)0)))));
                            }
                        } 
                    } 
                    var_57 = ((/* implicit */short) (-((-(((/* implicit */int) arr_47 [i_3] [i_3] [i_3] [i_3] [i_3 - 1]))))));
                }
                arr_85 [i_4] [i_4] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((arr_39 [i_3] [i_3 + 1] [i_3 + 1] [i_4]), (arr_39 [i_4] [i_3 + 1] [i_4] [i_4])))), (var_11)));
            }
        } 
    } 
}
