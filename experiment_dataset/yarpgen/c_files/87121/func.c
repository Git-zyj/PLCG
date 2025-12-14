/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87121
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_15))) ? (((var_2) ? (131068LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))))) ? ((~((~(((/* implicit */int) (short)-15552)))))) : (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) -6662556182062162108LL))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_1 - 2]))) : (((((/* implicit */_Bool) arr_0 [i_1 - 4])) ? (arr_0 [i_0]) : (arr_0 [i_1 + 3])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) (unsigned short)45684)))))) / (((/* implicit */int) ((unsigned char) ((long long int) var_8))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) min((21LL), (((((/* implicit */_Bool) arr_1 [i_1 + 3])) ? (((((/* implicit */_Bool) (short)19587)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6982360295194335471LL))) : (((/* implicit */long long int) ((var_7) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775781LL))) + (54LL))))))))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)111))) : (-8208805545529747480LL))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) (+(max((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (signed char)73))))), (((/* implicit */long long int) var_3))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        for (short i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) var_11);
                                var_22 = ((/* implicit */long long int) (~(17882444644565803543ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_7 = 1; i_7 < 20; i_7 += 3) 
                    {
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            {
                                var_23 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)27141))));
                                var_24 = ((/* implicit */signed char) ((((((var_0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [13]))) >= (((/* implicit */long long int) 2097151)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) arr_8 [i_0] [i_4] [i_7])) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_0] [i_1 - 4] [i_4] [i_7] [i_8 + 1])) && (((/* implicit */_Bool) arr_18 [i_0] [(short)20] [i_7] [i_8])))))))) : (max((((((/* implicit */_Bool) var_17)) ? (1237836610) : (2147483620))), (((/* implicit */int) max((((/* implicit */short) var_10)), (var_14))))))));
                                var_25 = ((/* implicit */short) max((((((/* implicit */int) var_3)) * (((/* implicit */int) arr_18 [i_7] [i_7] [i_7 + 1] [i_7 - 1])))), ((+((+(((/* implicit */int) arr_25 [i_4] [i_8 + 1]))))))));
                            }
                        } 
                    } 
                    arr_29 [i_0] [i_0] [i_1 + 2] [i_4] = (!(((/* implicit */_Bool) (signed char)-84)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_26 &= ((/* implicit */int) ((signed char) arr_10 [i_1 + 2] [i_4 - 2] [i_4 + 1] [i_9 - 1]));
                        /* LoopSeq 3 */
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            arr_34 [i_1 - 4] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_9 [i_0] [i_9] [i_10])))));
                            var_27 += ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) -194678886)) ? (var_16) : (((/* implicit */int) (unsigned short)57048)))));
                            arr_35 [10LL] [i_1] [i_4] [i_1] [i_4] = ((/* implicit */unsigned short) var_6);
                        }
                        for (int i_11 = 0; i_11 < 21; i_11 += 1) 
                        {
                            var_28 += ((/* implicit */signed char) arr_2 [i_1 - 2]);
                            var_29 = ((/* implicit */long long int) (unsigned short)2048);
                        }
                        for (long long int i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (arr_14 [i_4 - 2] [i_1 + 1]) : (((/* implicit */int) var_2))));
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((unsigned long long int) 2677686165U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64)))));
                            arr_42 [i_1] [i_1 - 4] [i_12] [i_1 - 4] [i_12] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_0] [i_1 + 3] [i_4 - 3] [i_9 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (6401255223472619418LL)));
                        }
                        arr_43 [i_0] [i_0] [i_0] = ((/* implicit */short) ((var_15) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27122))) : (4294967295U))))));
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_46 [i_0] [(unsigned short)20] [i_1] [i_4 - 1] [i_13] [i_13] |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((long long int) arr_2 [(unsigned char)11]))))) ? (((/* implicit */int) ((signed char) (unsigned char)247))) : (((/* implicit */int) ((short) ((((/* implicit */int) var_17)) * (((/* implicit */int) var_3))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_14 = 0; i_14 < 21; i_14 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (arr_38 [i_0] [i_1 + 2] [i_4 - 1] [i_13] [(unsigned char)3] [(short)14] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (short)-32767)))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */int) arr_48 [i_1 + 1] [i_1] [i_1 + 1] [i_4] [i_4 + 1] [i_13 - 1] [i_14])) >= (((/* implicit */int) var_0))));
                        }
                        for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
                        {
                            arr_53 [i_15] [i_13] [i_4] [i_1 + 3] [i_0] = ((/* implicit */unsigned char) (signed char)126);
                            arr_54 [i_0] [i_1] [i_0] [i_13 - 1] [i_4] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_1 - 4] [i_4 - 2] [i_13 - 1]))))) ? (max((17), (((/* implicit */int) arr_8 [i_1 - 3] [i_4 - 2] [i_13 - 1])))) : ((+(((/* implicit */int) (signed char)0))))));
                        }
                        for (short i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 1811405711)) ? (((/* implicit */int) arr_10 [i_1 + 3] [i_1 + 1] [i_4 + 1] [i_1 + 3])) : (((/* implicit */int) arr_10 [i_1 - 2] [i_1] [i_4 - 2] [i_13])))), ((+(((/* implicit */int) (short)9573))))));
                            arr_57 [i_1] [i_1] [i_1] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-27122))) : (var_9)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)57))))) : (((((/* implicit */_Bool) (unsigned short)24336)) ? (((/* implicit */unsigned long long int) var_16)) : (1632987840020903489ULL))))))));
                        }
                        arr_58 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)18370)) ? (((/* implicit */int) ((short) (short)-27098))) : (((/* implicit */int) (unsigned short)45349))));
                        arr_59 [i_0] [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_30 [i_0] [(unsigned short)6] [i_0] [(unsigned short)6] [(unsigned short)6] [i_13])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)33)))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned short)0))));
                    }
                    arr_60 [i_4] [i_1 - 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1 + 3] [i_4 - 2] [i_4 - 3])) ? (((/* implicit */long long int) arr_6 [i_0] [i_1 - 4] [i_4 - 3] [i_4 - 3])) : (var_9)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_1 - 4] [i_4 - 3] [i_4 + 1])))));
                }
            }
        } 
    } 
    var_35 |= ((/* implicit */long long int) var_12);
}
