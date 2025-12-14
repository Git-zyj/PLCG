/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93340
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
    var_12 = ((/* implicit */short) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_2]), (((/* implicit */short) ((unsigned char) var_1)))));
                    var_14 = ((/* implicit */_Bool) min((arr_4 [i_0] [i_2]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0])))))));
                    var_15 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_3 [i_0] [i_1])))));
                    arr_7 [i_0] = ((/* implicit */signed char) arr_0 [(unsigned short)16]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 9223372036854775807LL)) % (((((/* implicit */_Bool) -2169826414489039594LL)) ? (var_6) : (((/* implicit */unsigned long long int) var_11)))))) != (17470025285796154546ULL)));
                    var_17 = ((short) var_9);
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        arr_16 [i_4] = ((/* implicit */unsigned int) arr_11 [i_3] [i_4] [i_5]);
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 1; i_7 < 23; i_7 += 3) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) arr_9 [i_3]);
                            arr_20 [i_3] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */unsigned int) (short)0);
                            arr_21 [i_4] [(unsigned char)14] [i_5] [i_5] [i_4] = arr_18 [i_3] [i_3] [i_7] [i_6] [i_7 + 2];
                        }
                        for (unsigned char i_8 = 1; i_8 < 23; i_8 += 3) /* same iter space */
                        {
                            var_19 *= ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_19 [i_3 + 3] [(_Bool)1] [i_5] [i_6] [i_8]))))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((short) arr_17 [i_3] [i_4] [i_3] [i_6] [i_8]))) : (((((/* implicit */int) arr_11 [i_4] [i_6] [i_8])) >> (((/* implicit */int) arr_17 [i_3] [i_3] [i_5] [i_6] [i_5]))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) var_9))))) ? (((arr_12 [i_3] [(signed char)22] [i_3] [i_6]) % (((/* implicit */long long int) arr_13 [i_3] [i_3] [i_5])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (var_0))))))))))));
                            arr_24 [i_3] [i_4] [i_4] [i_4] [i_6 - 1] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_23 [i_4]), (arr_23 [i_4])))) ? ((-(17470025285796154546ULL))) : (((/* implicit */unsigned long long int) min((arr_23 [i_4]), (arr_23 [i_4]))))));
                            arr_25 [i_6] [i_4] [i_6 - 1] [i_6] [i_6] = ((/* implicit */signed char) var_10);
                            var_21 = ((/* implicit */signed char) var_8);
                        }
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            arr_29 [i_4] = ((/* implicit */unsigned long long int) arr_19 [i_3] [i_3] [(short)8] [i_3] [i_3]);
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 + 2])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_28 [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1])))) ? (((/* implicit */int) arr_10 [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_3 + 4] [i_3 - 1])) <= (((/* implicit */int) arr_10 [i_3 - 1] [i_3 + 3])))))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_6] [i_6 - 1] [i_6] [i_6 - 1] [i_4]))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((arr_23 [i_4]) > (((/* implicit */int) (_Bool)0)))))));
                            arr_30 [i_9] [i_9] [i_4] [i_4] [i_4] [(unsigned char)20] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_26 [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3] [i_3] [i_5] [i_6 - 1] [i_9]))) : (arr_12 [i_3] [i_4] [i_3] [i_3])))) ? (((/* implicit */int) ((min((976718787913397070ULL), (((/* implicit */unsigned long long int) var_4)))) > (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (976718787913397052ULL)))))) : (arr_23 [i_4])));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            arr_33 [i_3] [i_4] [i_4] [i_4] [i_10] = ((/* implicit */_Bool) (~(max((arr_15 [i_3 + 2] [i_10] [16]), (arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1])))));
                            arr_34 [i_4] [i_6] [i_4] = ((/* implicit */unsigned int) arr_27 [i_3 + 1] [i_6 - 1] [i_4] [i_6 - 1] [i_3 + 1] [i_10] [i_10]);
                        }
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (976718787913397052ULL)));
                            var_25 = ((/* implicit */_Bool) (+(arr_12 [i_11] [i_4] [i_4] [i_3 + 4])));
                            var_26 = ((/* implicit */unsigned char) (-(((long long int) min((var_11), (((/* implicit */unsigned int) var_8)))))));
                        }
                        for (long long int i_12 = 0; i_12 < 25; i_12 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned int) 17470025285796154561ULL);
                            arr_40 [i_4] = ((/* implicit */unsigned long long int) min((((var_1) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_9 [i_6])) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))), ((-(((1375249398U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_4] [i_5] [6U])))))))));
                            arr_41 [(short)21] [i_4] [i_5] [(unsigned short)14] = ((/* implicit */int) ((((/* implicit */int) max((arr_38 [i_3 + 4] [i_3] [i_3 + 1] [i_3] [i_6 - 1]), (arr_38 [i_3] [i_3] [i_3 + 3] [(unsigned char)6] [i_6 - 1])))) == ((~(((/* implicit */int) arr_38 [(signed char)24] [(signed char)24] [i_3 - 1] [i_4] [i_6 - 1]))))));
                            arr_42 [i_4] [i_4] [i_5] [i_4] [(short)22] [i_5] [(signed char)7] = ((/* implicit */short) arr_14 [i_6] [i_6] [i_6] [i_6 - 1] [i_6]);
                        }
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_14 = 0; i_14 < 25; i_14 += 3) 
                        {
                            arr_49 [i_3] [i_3 + 4] [i_3] [i_4] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (arr_15 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) != (max((arr_39 [i_3] [i_3 + 4] [i_3] [i_3] [i_3 + 4]), (((/* implicit */unsigned long long int) arr_18 [i_3] [i_3] [i_5] [i_3] [i_14]))))))), (var_6)));
                            arr_50 [i_4] [i_4] [i_3] [i_4] [i_3] [(short)14] = ((/* implicit */long long int) ((_Bool) (-(((((/* implicit */int) arr_17 [i_3] [i_4] [i_4] [i_13] [i_14])) * (((/* implicit */int) (unsigned short)2314)))))));
                            var_28 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 17470025285796154546ULL)))) ? ((-(((((/* implicit */_Bool) var_9)) ? (-2147483643) : (((/* implicit */int) arr_37 [i_3] [(_Bool)1] [i_3] [(signed char)3] [i_14] [i_3])))))) : ((((!(((/* implicit */_Bool) 1375249398U)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))));
                        }
                        arr_51 [i_4] [i_4] [i_5] [i_5] [i_13] = ((/* implicit */unsigned long long int) ((signed char) ((int) 976718787913397094ULL)));
                    }
                    arr_52 [i_4] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)30910)) * (((/* implicit */int) (unsigned short)19)))))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    var_29 -= ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_54 [i_3] [i_4] [i_3])))) * (min((((/* implicit */long long int) arr_45 [i_3] [i_3] [i_3] [9ULL] [i_4] [i_15])), (var_10))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_26 [i_3 + 1])) : (((/* implicit */int) arr_26 [i_3])))))));
                    arr_55 [0] [i_3 + 2] [i_15] [i_4] = ((/* implicit */long long int) arr_23 [i_4]);
                }
                /* vectorizable */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    arr_58 [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 1; i_17 < 23; i_17 += 1) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                arr_64 [i_4] [(signed char)21] = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                                arr_65 [i_4] [i_17] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2919717890U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-99))));
                                arr_66 [i_3] [i_3] [i_4] [(unsigned char)19] [i_16] [i_3] [i_18] = ((/* implicit */signed char) arr_39 [i_3] [i_3 + 2] [i_3 + 2] [i_3] [14]);
                                arr_67 [i_4] [i_18] = ((/* implicit */unsigned char) (-(arr_23 [i_4])));
                            }
                        } 
                    } 
                    arr_68 [i_3] [i_4] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_3] [i_4] [i_3 - 1])) ? (7877978221157740145ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_3] [i_4] [i_3 + 2])))));
                    var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_3] [i_3] [(_Bool)1] [i_3] [i_16])) ? (((/* implicit */int) arr_61 [i_3] [i_3] [i_3] [i_4] [i_4] [i_3])) : (((/* implicit */int) (signed char)62))))) ? (((/* implicit */int) arr_60 [i_3 + 2] [(_Bool)1] [i_3 - 1])) : ((-(((/* implicit */int) arr_38 [i_16] [i_16] [i_4] [i_3] [i_3]))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_19 = 0; i_19 < 25; i_19 += 4) 
                {
                    for (unsigned char i_20 = 0; i_20 < 25; i_20 += 1) 
                    {
                        {
                            arr_74 [i_4] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(var_6)))))) <= (((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_11)))));
                            var_31 *= ((/* implicit */short) ((unsigned short) max((((/* implicit */short) (unsigned char)103)), ((short)18064))));
                            /* LoopSeq 2 */
                            for (short i_21 = 0; i_21 < 25; i_21 += 3) 
                            {
                                arr_79 [i_3] [i_4] [(signed char)11] [i_3] [i_21] = ((/* implicit */long long int) ((((/* implicit */long long int) (+(arr_14 [i_21] [i_19] [i_19] [i_4] [i_3 + 4])))) > (max((var_10), (((/* implicit */long long int) var_11))))));
                                var_32 -= ((/* implicit */unsigned int) arr_62 [i_3 + 3] [i_3] [i_19] [i_3] [i_3]);
                            }
                            /* vectorizable */
                            for (short i_22 = 0; i_22 < 25; i_22 += 1) 
                            {
                                var_33 = ((/* implicit */short) ((arr_47 [i_4] [i_3 + 2] [i_3 + 3]) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
                                arr_83 [i_3] [i_3] [i_3] [(short)16] [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-62)) ? (arr_45 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_20] [i_20] [i_22]) : (((((/* implicit */_Bool) 17470025285796154546ULL)) ? (((/* implicit */int) (unsigned short)13)) : (((/* implicit */int) var_4))))));
                            }
                        }
                    } 
                } 
                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (-((-((~(-1590507364))))))))));
            }
        } 
    } 
}
