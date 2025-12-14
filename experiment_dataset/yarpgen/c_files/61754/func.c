/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61754
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max(((~(arr_0 [i_0] [i_0]))), ((~(arr_0 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 ^= ((/* implicit */short) var_4);
                                var_18 *= ((/* implicit */signed char) (+(((/* implicit */int) ((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) var_7);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) arr_7 [i_2] [i_2] [i_2]);
                    /* LoopSeq 4 */
                    for (int i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            arr_19 [20U] [i_1] [i_2] [i_5] [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-32)), (arr_0 [i_0] [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) (unsigned short)61465))))) ? (var_0) : ((~(((/* implicit */int) (signed char)28)))))))));
                            arr_20 [i_0] [i_1] [i_1] [18] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_16 [i_5 + 2] [i_5] [i_5 - 1] [i_5 - 1] [i_5 + 3] [i_5])), (arr_18 [i_5 + 3] [i_5 + 3] [i_5 + 4] [i_5 + 3] [i_5 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_16 [i_5 - 1] [(short)2] [i_5 + 4] [i_5] [i_5 - 1] [i_5]))))) : (max((((/* implicit */unsigned long long int) arr_18 [i_5 + 3] [i_5] [i_5 + 2] [i_5] [i_5 + 2])), (var_8)))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((((var_13) ? (((/* implicit */int) var_14)) : (2147483647))), (((/* implicit */int) (((!(((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) ((unsigned char) (signed char)-103)))))))))));
                            arr_21 [i_1] [i_0] = ((/* implicit */unsigned short) (-(934272133U)));
                        }
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((3360695161U), (934272120U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)5542)) >> (((5913198138606857410ULL) - (5913198138606857409ULL)))))) : (3010921673307301515ULL)));
                    }
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((max((((/* implicit */int) var_15)), (1470774594))) << (((3937727687U) - (3937727687U)))))) == (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7305))) >= (var_1))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18331))) : (arr_3 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_11)))))))))));
                        var_23 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
                    }
                    for (unsigned int i_8 = 3; i_8 < 18; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) -1092873869)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)2)) ? (15435822400402250100ULL) : (((/* implicit */unsigned long long int) 1925624994U))))) ? (((((/* implicit */_Bool) (unsigned short)4095)) ? (arr_12 [i_0] [i_0] [11U] [i_2 + 2] [i_0] [i_8] [i_8]) : (arr_26 [i_8] [i_8]))) : (min((11587768408215493592ULL), (((/* implicit */unsigned long long int) (signed char)-32)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [i_8] [i_8 - 2] [i_8] [i_8 - 2] [i_8 + 3] [i_8 - 2])), (max((((/* implicit */unsigned short) var_15)), (arr_7 [i_0] [i_1] [i_1])))))))));
                        arr_27 [i_0] [i_1] [i_0] [i_8] = ((/* implicit */unsigned short) arr_6 [i_1] [(short)19] [i_1] [i_1]);
                        arr_28 [i_1] [i_0] [i_8] = ((/* implicit */unsigned char) var_15);
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((_Bool) (unsigned char)54)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2 - 3] [i_2] [i_2] [i_2 + 2])))))) : (max((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [(short)2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_11))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)70)) > (((/* implicit */int) (unsigned char)59))))))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_26 = ((/* implicit */signed char) min((((/* implicit */int) min(((unsigned short)4080), (((/* implicit */unsigned short) arr_4 [i_2] [i_2] [i_2 + 2]))))), ((+(((/* implicit */int) arr_4 [19U] [i_2 - 2] [i_2 + 2]))))));
                            var_27 = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_25 [i_2 - 1] [i_2 - 1] [i_2] [i_2])) || (((/* implicit */_Bool) arr_25 [i_2 - 3] [i_2 - 3] [i_10] [i_2 - 3]))))));
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) max((((((/* implicit */_Bool) arr_26 [i_2] [i_2 - 2])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_2 + 1] [i_9]))))), (((/* implicit */long long int) ((unsigned short) (-(arr_17 [i_0] [4ULL] [i_2 - 1] [i_1] [(short)4] [i_1]))))))))));
                            arr_34 [i_0] [i_1] [i_1] [i_2] [i_2] [16U] [16ULL] |= ((((/* implicit */long long int) (~(((/* implicit */int) max(((short)21871), (((/* implicit */short) (signed char)-125)))))))) >= (var_2));
                        }
                    }
                }
            } 
        } 
        arr_35 [i_0] = ((/* implicit */unsigned char) var_10);
        var_29 = ((/* implicit */signed char) var_0);
    }
    for (signed char i_11 = 2; i_11 < 22; i_11 += 2) 
    {
        var_30 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) -8237294766646802317LL)) ? (170092991743805385ULL) : (var_8)))))));
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_14) ? (((/* implicit */unsigned int) arr_37 [i_11] [i_11])) : (var_11))), (((/* implicit */unsigned int) (unsigned char)202))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */int) (signed char)126))))) ? (((/* implicit */unsigned long long int) arr_37 [i_11 - 1] [i_11 - 2])) : (arr_36 [i_11 + 2]))))));
        arr_39 [i_11] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_37 [i_11] [(unsigned short)16])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) arr_37 [i_11 + 1] [i_11 + 2])) ? (10024254942470321428ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 1; i_12 < 22; i_12 += 3) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 3; i_14 < 22; i_14 += 1) 
                    {
                        var_32 += ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_14])) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) ((min((((/* implicit */int) (unsigned char)29)), (559687294))) != (((/* implicit */int) var_4)))))));
                        arr_47 [i_11] [i_12] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) var_7);
                        arr_48 [i_11] [i_11] [i_11] [i_11 - 2] [i_11] [i_11 + 1] = ((/* implicit */unsigned short) 1048575U);
                        arr_49 [i_11 + 2] [(short)23] [i_11 + 2] [i_14] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_14 + 2] [i_14 - 3] [i_14 + 2])) && (((/* implicit */_Bool) arr_37 [i_14 - 2] [i_12 + 2])))))));
                        var_33 = ((/* implicit */signed char) arr_40 [i_12 + 1] [i_12 + 2] [i_12 + 2]);
                    }
                    /* LoopNest 2 */
                    for (short i_15 = 2; i_15 < 22; i_15 += 3) 
                    {
                        for (unsigned int i_16 = 4; i_16 < 23; i_16 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96)))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) -2081991989)) : (967466711U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) var_6))));
                                arr_56 [i_11] [i_11] [i_11] [i_11 - 1] [i_11 - 1] [i_11] &= ((/* implicit */long long int) 2081991989);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned int) ((((unsigned long long int) (+(var_0)))) > (var_12)));
}
