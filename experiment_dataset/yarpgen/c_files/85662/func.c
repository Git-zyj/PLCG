/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85662
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_10)))))) ? (var_10) : (((((/* implicit */_Bool) var_2)) ? (var_3) : (var_8))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_7 [i_0] [10] [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) && (((/* implicit */_Bool) var_11))))) | (((((/* implicit */_Bool) 4233546843784409804ULL)) ? (var_8) : (var_4)))))), ((-(((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))));
            var_13 = ((((((/* implicit */long long int) var_3)) - (var_6))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 2] [i_0 - 1])) ? (arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (var_4)))));
            /* LoopSeq 1 */
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                var_14 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((var_8) << (((/* implicit */int) (_Bool)1))))) ? (arr_8 [i_0 - 1] [i_2 + 3] [i_2 - 3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 1])))))));
                var_15 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (signed char)-27)) | (((/* implicit */int) (signed char)83))))));
            }
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)65517)) - (-1585446335))) + (((((/* implicit */_Bool) arr_0 [12LL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_5 [(unsigned char)2] [(unsigned char)2] [(unsigned char)2]))))) ? (var_2) : (((((/* implicit */_Bool) -1206801947)) ? (var_2) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0 + 1])))))))))));
        }
        var_17 += ((/* implicit */short) max(((+(arr_1 [i_0 + 1]))), (((/* implicit */unsigned long long int) max((max((8558497889021954996LL), (((/* implicit */long long int) arr_0 [12])))), (((/* implicit */long long int) var_5)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 4) 
        {
            for (unsigned short i_4 = 1; i_4 < 22; i_4 += 4) 
            {
                for (unsigned char i_5 = 3; i_5 < 23; i_5 += 2) 
                {
                    {
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((var_4) | (var_4)))))), (((((/* implicit */_Bool) arr_12 [(short)6])) ? (min((13700797364162175202ULL), (((/* implicit */unsigned long long int) (short)-32767)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))))))))));
                        var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned short) arr_0 [14ULL]))))) && (((/* implicit */_Bool) max((((/* implicit */short) (signed char)-31)), (arr_0 [(signed char)10]))))));
                    }
                } 
            } 
        } 
        arr_16 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_2))) ? (((((/* implicit */int) var_5)) - (var_3))) : (((int) ((unsigned int) arr_12 [i_0])))));
    }
    for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_9 = 1; i_9 < 10; i_9 += 3) 
                    {
                        arr_30 [i_6] [i_7] [i_8] [i_9] = (i_6 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) (signed char)-4))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-32758)) + (2147483647))) << (((arr_20 [i_9 - 1] [i_7] [i_6]) - (262223271)))))) : (((((/* implicit */_Bool) (unsigned short)65519)) ? (4745946709547376413ULL) : (((/* implicit */unsigned long long int) var_3))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) (signed char)-4))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-32758)) + (2147483647))) << (((((arr_20 [i_9 - 1] [i_7] [i_6]) - (262223271))) - (980464842)))))) : (((((/* implicit */_Bool) (unsigned short)65519)) ? (4745946709547376413ULL) : (((/* implicit */unsigned long long int) var_3)))))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))) : (0ULL))) | (((7508341651056811723ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6 + 1] [i_6 + 1] [i_9 - 1]))))))))));
                    }
                    for (unsigned char i_10 = 1; i_10 < 9; i_10 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_11 = 2; i_11 < 8; i_11 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_11 + 2] [i_10 + 3] [i_6 - 2])))))));
                            arr_38 [i_6] [i_6] [i_6] [i_10 + 3] [i_6 - 2] [7ULL] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_6 - 2] [i_7] [i_8] [i_10 + 1] [i_6]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_6] [i_7])))))));
                            arr_39 [i_6] [i_7] [i_8] [i_10 + 2] [2LL] &= ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) var_11)));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 3) 
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) | (var_8)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_33 [i_6] [7] [i_8] [i_10 + 2] [i_12])) : (var_0))) : (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_6] [i_7] [(unsigned short)2] [i_12 + 1]))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */int) arr_0 [(unsigned char)0])))) << (((var_1) - (12852444186927994163ULL)))))))))));
                            var_23 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)215)) | (((/* implicit */int) (_Bool)1))));
                            var_24 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((arr_2 [i_6 - 3]) / (((/* implicit */int) arr_9 [i_6 + 1] [i_6]))))), (((((/* implicit */_Bool) var_0)) ? ((+(var_6))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)113)) * (((/* implicit */int) arr_22 [i_12] [i_10] [9ULL])))))))));
                        }
                        for (int i_13 = 4; i_13 < 11; i_13 += 1) 
                        {
                            arr_45 [i_6] [i_6] [i_7] [i_7] = min((((/* implicit */int) ((short) ((var_7) + (((/* implicit */unsigned long long int) (-2147483647 - 1))))))), (((((/* implicit */_Bool) min((13700797364162175202ULL), (((/* implicit */unsigned long long int) (signed char)-113))))) ? ((-(((/* implicit */int) (signed char)-99)))) : ((-(((/* implicit */int) (signed char)-114)))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28672)) ? (((/* implicit */int) (signed char)-114)) : (1206801952)))) ? ((~(var_3))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_1)))))));
                            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (short)32743)) ? (-1925380056) : (805225498))) : (((/* implicit */int) (short)32743)))))));
                            arr_46 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -5983351909735813053LL)), (9292183432277979385ULL)))) ? (max((var_6), (((/* implicit */long long int) arr_17 [i_6])))) : (min((((/* implicit */long long int) max((arr_22 [i_6] [i_6] [i_8]), (((/* implicit */unsigned char) arr_11 [i_6] [i_7]))))), (min((((/* implicit */long long int) (unsigned short)65535)), (140737354137600LL)))))));
                        }
                        for (long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                        {
                            arr_49 [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_8))) ? (((long long int) var_1)) : (((((/* implicit */_Bool) arr_47 [i_6 - 2] [i_7] [i_6 - 2] [i_8] [i_8] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_33 [i_6] [i_6] [i_6] [i_6 - 1] [i_6])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_6] [i_7] [i_7] [i_7] [i_7] [i_7])))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1669))) + (arr_41 [i_10 + 2] [i_10 + 2] [i_10] [i_10] [i_10 - 1]))));
                            var_27 = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)28));
                            var_28 = ((/* implicit */unsigned short) (+(max((var_8), (((/* implicit */int) arr_31 [i_6] [i_6 + 2] [i_6 - 3] [i_6 - 1] [i_6]))))));
                            arr_50 [10LL] [i_7] [i_7] [i_6] [i_14] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_10 [i_6 - 1]))) ? (((((/* implicit */_Bool) (short)768)) ? (-1416570332) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) (signed char)-114)) - (arr_10 [i_6 - 3])))));
                        }
                        var_29 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_6] [i_7])) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (_Bool)0))))))))) - (((((/* implicit */_Bool) arr_22 [i_6 + 1] [i_6 + 1] [i_6 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_10 + 2]))) : (var_6)))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 12; i_15 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((short) arr_9 [i_6 + 2] [i_6]));
                            var_31 = ((/* implicit */int) ((_Bool) (short)20909));
                        }
                        for (int i_16 = 0; i_16 < 12; i_16 += 3) /* same iter space */
                        {
                            arr_57 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11)))) : (min((((/* implicit */unsigned long long int) var_8)), (11901958638892743035ULL)))))) ? (((((/* implicit */_Bool) arr_6 [i_6 - 3])) ? (-172080912) : (1585446335))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_31 [i_6] [i_7] [i_8] [i_10] [i_6])), (arr_26 [i_7] [i_8] [i_10 + 3])))) ? (((((/* implicit */_Bool) 724606452789261375ULL)) ? (var_10) : (var_3))) : (((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) arr_36 [i_6])) : (((/* implicit */int) var_11))))))));
                            arr_58 [i_6] [i_6] [i_6] [(unsigned short)6] [i_16] = ((((/* implicit */_Bool) max((var_4), (var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_4 [i_16] [i_10] [i_7])) : ((-9223372036854775807LL - 1LL))))) && (((/* implicit */_Bool) arr_44 [i_6 + 2] [i_10 + 1] [i_10 + 2] [i_10 + 1] [i_16]))))) : (((((/* implicit */_Bool) (unsigned short)65531)) ? ((~(var_8))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)17399)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3)))))));
                            var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 172080914))));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_6])) && (((/* implicit */_Bool) var_11)))))) | (var_7)));
                            arr_61 [i_6] = ((/* implicit */short) (+(((/* implicit */int) var_11))));
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (4273468046U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)239)))));
                        }
                        for (unsigned char i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            arr_65 [i_6] [i_6] = ((signed char) ((((/* implicit */long long int) 1754899910)) | (arr_60 [i_6 - 2] [i_7] [i_8] [i_10 + 3])));
                            arr_66 [i_18] [i_6] [i_6] = ((/* implicit */short) ((((unsigned long long int) (unsigned char)209)) - (((unsigned long long int) (!(((/* implicit */_Bool) 17644866627999864079ULL)))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 0; i_19 < 12; i_19 += 4) 
                    {
                        for (unsigned char i_20 = 0; i_20 < 12; i_20 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) min(((~(var_7))), (((/* implicit */unsigned long long int) ((arr_48 [i_6 + 2] [i_7] [(signed char)8] [(signed char)8] [i_19]) & (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6 + 1] [i_7] [i_7])))))))))));
                                arr_72 [i_6] [(short)4] [i_7] [i_7] [i_7] [i_6] = ((/* implicit */unsigned short) (((~(((var_0) + (var_7))))) ^ (((/* implicit */unsigned long long int) min((arr_53 [i_6 - 2] [i_7] [i_6] [i_7] [i_20] [i_6 + 2]), (arr_53 [i_6] [i_6] [i_6] [i_6] [i_6 - 1] [i_6 - 2]))))));
                                var_37 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_6]))) ? (((/* implicit */int) ((signed char) 9154560641431572231ULL))) : ((+(((/* implicit */int) var_5))))))));
                                var_38 = (i_6 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_9))))) << (((((((/* implicit */_Bool) (signed char)113)) ? (arr_53 [i_6] [i_6] [i_6] [i_7] [i_6 - 3] [i_6]) : (arr_53 [i_6 - 1] [i_7] [i_6] [i_20] [i_6 - 2] [i_19]))) - (4265503770U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_9))))) << (((((((((/* implicit */_Bool) (signed char)113)) ? (arr_53 [i_6] [i_6] [i_6] [i_7] [i_6 - 3] [i_6]) : (arr_53 [i_6 - 1] [i_7] [i_6] [i_20] [i_6 - 2] [i_19]))) - (4265503770U))) - (2901535948U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 724606452789261375ULL)) ? (arr_41 [i_6 - 3] [i_6 + 1] [i_6 - 2] [i_6 - 2] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-113)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 4294967291U)) : (arr_41 [i_6 - 2] [i_6] [i_6 - 2] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((int) -7084660664290310495LL))))))));
        arr_73 [i_6] [i_6] = ((/* implicit */short) ((max((((arr_60 [i_6] [i_6] [i_6] [i_6]) - (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)255)) : (2147483647)))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) 17722137620920290241ULL)) ? (102320727) : (arr_28 [i_6] [i_6] [i_6 - 1]))))));
        var_40 = ((/* implicit */int) min((var_40), (((int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) + (((/* implicit */int) var_11)))))));
    }
    var_41 = ((/* implicit */short) (-(((((-900619961) + (var_10))) | (((/* implicit */int) var_11))))));
}
