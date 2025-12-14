/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83352
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned short)23015)) ? (((/* implicit */int) (signed char)-100)) : (16777215))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
    }
    /* LoopSeq 1 */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_2 [i_1] [i_1]))) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-93))))));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (unsigned short)62523))));
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 10; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) min((9138826996601023243LL), (((/* implicit */long long int) 1098862182U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2467401337U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_1])) ? (arr_1 [i_2 + 1] [i_2 + 1]) : (arr_2 [i_2 + 1] [i_2 + 1]))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */int) var_6);
                        arr_18 [i_4] [i_4] [i_4] [i_1] = ((unsigned short) ((((/* implicit */int) arr_5 [i_2 - 1])) >> (((/* implicit */int) arr_5 [i_2 - 2]))));
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 2; i_5 < 10; i_5 += 2) /* same iter space */
                        {
                            arr_21 [i_3] [i_2] [i_3] [i_3] [i_3] [i_4] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) 797701122))) - (((unsigned long long int) arr_16 [i_2 - 2]))));
                            arr_22 [i_1] [i_2] [i_2] [10LL] = ((((min(((-(((/* implicit */int) (unsigned char)1)))), (((/* implicit */int) ((signed char) var_7))))) + (2147483647))) >> (((max((arr_12 [i_2 - 1] [i_1]), (((/* implicit */unsigned int) (unsigned short)65535)))) - (3955570741U))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            arr_25 [i_1] [(signed char)1] [i_2 + 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)255))) ? ((+((-(0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64)))));
                            var_16 += ((/* implicit */unsigned int) arr_15 [i_2] [i_4] [i_6]);
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 2; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            arr_30 [i_3] [i_1] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))));
                            arr_31 [i_4] [i_1] |= ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) var_9)))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 10; i_8 += 2) /* same iter space */
                        {
                            arr_35 [(unsigned char)2] [(_Bool)1] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) ((441124390U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4])))))));
                            var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) (short)24576)) >> (((((/* implicit */int) (short)-20780)) + (20781))))) >> ((((-(((/* implicit */int) var_7)))) + (230)))));
                            var_18 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_26 [(signed char)2] [i_4] [i_8] [i_2] [i_8])), (-6896325017989543253LL)))) ? (((/* implicit */int) arr_32 [i_8 - 1] [i_2] [2LL] [i_2] [i_8 - 2] [i_2 - 2])) : (((/* implicit */int) ((((/* implicit */int) arr_29 [i_1] [i_2] [(unsigned short)7] [0] [i_8])) >= (((/* implicit */int) var_8))))))) ^ ((-(((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_3]))))))));
                        }
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_10 = 1; i_10 < 9; i_10 += 2) 
                        {
                            arr_41 [i_9] [0LL] [i_1] [i_3] [i_2] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_12 [i_10] [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_28 [8U] [i_2 - 2] [i_9] [i_9] [i_1]))))) : (((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                            arr_42 [i_1] [i_2 - 2] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-105))))) ? (((((/* implicit */_Bool) (short)-25629)) ? (4333193373675294171ULL) : (((/* implicit */unsigned long long int) 2105796249)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_10 + 2] [i_3] [i_10] [(_Bool)1] [i_3])))));
                            var_19 = ((/* implicit */unsigned int) (((+(1802124998))) >> ((((-(arr_23 [(short)2] [i_2]))) - (7770582U)))));
                            var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_10)))) : (((((/* implicit */int) (unsigned short)4757)) * (((/* implicit */int) var_8))))));
                        }
                        arr_43 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) var_6);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_46 [i_2] [(unsigned short)9] [i_11] [i_2] [i_11] [i_11] = ((/* implicit */signed char) ((int) (unsigned short)65535));
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) 
                        {
                            arr_51 [i_1] [i_1] [i_1] [i_3] [i_11] [i_11] = ((/* implicit */unsigned short) 4226558155U);
                            arr_52 [i_1] [i_11] [i_3] [i_3] [i_11] [i_3] = ((/* implicit */unsigned int) ((min(((~(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (signed char)-23)))))) & ((~(((/* implicit */int) (unsigned char)15))))));
                        }
                        var_21 = ((((_Bool) 1829751732U)) ? (((/* implicit */int) (short)8128)) : (min((((/* implicit */int) arr_39 [i_1] [i_1] [i_11] [i_3] [i_1] [i_11])), ((+(((/* implicit */int) var_0)))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_55 [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) arr_45 [i_2 - 1] [i_2 - 1] [i_2 - 2]);
                        arr_56 [i_13] [i_3] [i_3] [i_3] = ((_Bool) (-((-(arr_50 [(unsigned short)8] [i_13] [i_1] [i_13] [i_13])))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_14 = 4; i_14 < 9; i_14 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) ((((((/* implicit */int) var_10)) >> (((((/* implicit */int) arr_54 [i_3] [(unsigned short)7] [(_Bool)1] [i_3] [i_3] [(unsigned char)3])) - (200))))) - ((+(((/* implicit */int) (_Bool)1))))));
                            var_23 += ((/* implicit */unsigned int) ((unsigned long long int) arr_44 [i_14 - 4] [i_14] [4] [i_2 - 1]));
                            arr_60 [(unsigned short)5] [i_13] [i_13] [i_13] [i_2] = ((/* implicit */unsigned short) (_Bool)1);
                            arr_61 [i_2 - 1] [i_3] [i_13] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_13 [i_14 - 1] [i_2 - 2]))));
                        }
                        for (unsigned int i_15 = 4; i_15 < 9; i_15 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_48 [i_2 - 2] [i_15 - 1] [i_15 - 2] [i_2 - 2])) ? (((/* implicit */int) ((unsigned char) arr_63 [i_3] [7] [i_2] [i_2 - 1] [i_13] [i_13] [i_13]))) : ((+(((/* implicit */int) (_Bool)0))))))));
                            arr_65 [i_3] [i_1] [i_15] [i_15] [i_13] [i_13] = ((/* implicit */_Bool) max((min((4ULL), (((/* implicit */unsigned long long int) (signed char)12)))), ((-(min((17572132336803428831ULL), (((/* implicit */unsigned long long int) var_8))))))));
                        }
                        for (signed char i_16 = 0; i_16 < 11; i_16 += 2) 
                        {
                            arr_68 [i_13] [i_13] [(unsigned short)8] [i_13] [i_16] [i_16] [i_1] = ((/* implicit */unsigned short) ((var_4) < (((/* implicit */int) ((((/* implicit */int) arr_7 [i_2 - 1] [i_3])) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_11)))))))));
                            arr_69 [i_3] [i_1] [i_13] [i_1] [i_3] = ((/* implicit */unsigned int) min((((long long int) (signed char)-111)), (((/* implicit */long long int) arr_40 [i_2 - 2] [i_3] [5] [5] [5] [i_16]))));
                            arr_70 [i_13] [i_13] [i_2] [i_2] [i_1] [i_13] [i_13] = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) ^ (65535U)))));
                            var_25 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)64977)) ? (max((((/* implicit */unsigned int) (signed char)67)), (1164854755U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)14966), (((/* implicit */unsigned short) (short)-2048)))))))) - (((/* implicit */unsigned int) (-((-(((/* implicit */int) var_10)))))))));
                        }
                    }
                    arr_71 [(signed char)1] [(signed char)1] [i_3] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(arr_1 [i_1] [i_2 + 1])))) ? (arr_47 [i_2] [i_3] [i_1] [i_3] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_2 - 1] [i_2] [i_2 - 2] [i_2 - 2] [i_2] [i_2]))))) >> (((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_14 [i_2])) : (((/* implicit */int) var_9)))))) - (104)))));
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        for (signed char i_18 = 0; i_18 < 11; i_18 += 2) 
                        {
                            {
                                arr_76 [i_17] [i_2 + 1] [i_17] [i_17] [i_17] [i_2] [i_17] = ((/* implicit */_Bool) (+(4294967295U)));
                                arr_77 [i_2] [i_17] [i_2] [i_17] [(_Bool)1] = ((/* implicit */int) ((signed char) (+(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)252)))))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (((_Bool)1) ? (646841961U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
                                arr_78 [i_1] [i_2 + 1] [i_1] [i_17] [(unsigned char)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)60875)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_79 [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (short)4)) < (((/* implicit */int) (signed char)-92))));
                }
            } 
        } 
        arr_80 [i_1] [i_1] = ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) ((3899381484286926187ULL) < (((/* implicit */unsigned long long int) 141998252U))))))));
        var_27 = ((/* implicit */signed char) (+((-(((/* implicit */int) (_Bool)1))))));
    }
}
