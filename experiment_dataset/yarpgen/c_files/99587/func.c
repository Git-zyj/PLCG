/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99587
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 3; i_4 < 10; i_4 += 3) 
                        {
                            var_18 += ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */unsigned int) arr_12 [i_0] [i_0 - 1] [2LL] [i_0 + 2] [i_0])), (arr_11 [i_0] [i_0] [i_2 + 1] [i_1] [(unsigned char)0] [i_1] [i_1 - 1]))));
                            var_19 ^= ((/* implicit */int) arr_12 [i_0] [i_1] [6LL] [i_1] [i_1]);
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_2 [1U])))) & ((+(((/* implicit */int) var_11))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_1 - 1] [i_1]) <= (arr_0 [i_2 + 1] [i_2 + 1]))))) + ((((-(var_6))) ^ (((/* implicit */unsigned long long int) (+(arr_11 [i_1] [1U] [i_3] [i_2] [i_2 + 1] [1U] [i_1]))))))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (min((((/* implicit */unsigned int) (_Bool)1)), (arr_11 [i_0] [i_0] [i_2 + 1] [i_3] [i_5] [(unsigned short)8] [i_3])))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [i_2 + 1])) ? (min((((/* implicit */long long int) (_Bool)1)), (-8069616016985868339LL))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_1] [i_3])) : (((/* implicit */int) var_17))))))), (((/* implicit */long long int) arr_13 [i_0] [i_2 + 1]))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (+(arr_8 [i_2 + 1] [i_0]))))));
                            arr_18 [i_0] [i_0] [i_1] [10LL] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((262016ULL) <= (var_12)))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_6] [i_1] [i_3] [i_2] [i_1] [i_0])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [1LL] [i_0]))))))));
                        }
                        arr_19 [2U] [(unsigned short)8] [i_0] [2U] [2U] &= max((min((max((((/* implicit */long long int) arr_0 [i_1] [i_1])), (arr_16 [i_0] [i_3] [i_2 + 1] [i_2] [i_1] [i_1] [i_0]))), (((/* implicit */long long int) arr_0 [i_2 + 1] [i_1 - 1])))), ((-(((((/* implicit */_Bool) arr_1 [1] [i_2])) ? (((/* implicit */long long int) var_3)) : (arr_15 [i_0] [i_0]))))));
                        arr_20 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_2] [i_2]);
                    }
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
                    {
                        arr_24 [i_0 + 2] [i_1] [i_0 + 2] [i_7] = ((/* implicit */long long int) (!(((min((2092972404U), (((/* implicit */unsigned int) (_Bool)1)))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24573)))))));
                        var_25 = ((/* implicit */_Bool) (-(((arr_23 [i_2] [i_2] [i_1] [i_1] [i_0] [i_0 - 2]) + (var_8)))));
                        arr_25 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((arr_23 [i_0 + 2] [i_1 - 1] [i_1] [i_2] [i_7] [i_7]), (((/* implicit */unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_21 [i_0 - 1] [10ULL] [i_0 - 1] [i_7] [i_7] [(unsigned char)3])), (var_3))))))) ? (max((arr_7 [i_1 - 1] [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [(_Bool)1] [5LL] [i_2] [(_Bool)1] [9LL] [i_7] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_21 [i_7] [(unsigned short)5] [i_1 + 1] [i_1 + 1] [3] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
                    }
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (-((~(((/* implicit */int) var_5)))))))));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) (signed char)45)) ? (arr_7 [i_0] [i_8] [i_2]) : (((/* implicit */unsigned long long int) -978899970586007675LL))))))) ? ((((_Bool)1) ? ((+(var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 - 1] [i_1]))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 970440983U)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (short)15872)))), (((/* implicit */int) arr_1 [i_1 - 1] [i_2 + 1]))))))))));
                        var_28 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15872)) ? (var_12) : (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_8 [i_0] [i_1])) >= (arr_10 [(signed char)3] [i_8] [i_2 + 1] [2ULL] [i_1] [2ULL]))))) : (min((((/* implicit */unsigned int) var_11)), (112U))))), (((/* implicit */unsigned int) (+(min((((/* implicit */int) (unsigned char)0)), (arr_8 [i_0] [i_1]))))))));
                    }
                    arr_29 [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                    /* LoopSeq 1 */
                    for (signed char i_9 = 1; i_9 < 11; i_9 += 4) 
                    {
                        arr_32 [i_0] [i_1 + 1] [6U] [i_1] = ((/* implicit */unsigned char) min((arr_30 [i_0] [i_1] [(_Bool)1] [i_9 + 1] [i_9]), (((/* implicit */long long int) arr_5 [5LL] [i_9 - 1]))));
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
                        {
                            arr_37 [i_0] [i_1] [5LL] = 975734714U;
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_0 - 1] [i_0 - 1] [i_0] [i_1])) ? (((/* implicit */long long int) max((arr_10 [i_0] [i_1] [i_0] [i_0] [i_0] [i_10]), (((/* implicit */unsigned int) (unsigned short)10782))))) : (min((((arr_16 [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))))), ((~(var_4)))))));
                            arr_38 [i_0 + 2] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -347406711)) ? (arr_26 [i_0] [i_1] [(unsigned short)5] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166)))))) || (((/* implicit */_Bool) var_16)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_2] [(unsigned char)3] [i_2] [i_1] [i_0 - 2])), (arr_22 [i_1])))) ? (max((var_7), (((/* implicit */unsigned int) (unsigned short)43322)))) : (1455489817U))))));
                        }
                        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) arr_39 [i_0] [i_1] [i_0] [i_0 + 2] [7U]);
                            arr_42 [i_0] [i_1] [(unsigned short)7] [(unsigned short)6] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_26 [i_1] [i_1 + 1] [i_0] [i_1]), (arr_26 [i_0] [i_1 + 1] [i_0] [i_1])))) ? (2809527921U) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_13 [i_0] [i_9])) : (((/* implicit */int) arr_17 [i_2 + 1] [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))) : (max((((/* implicit */unsigned int) var_11)), (var_9)))))));
                            var_31 += min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -6282289009510603733LL)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) arr_6 [i_11] [i_0] [i_1 - 1] [i_9]))))) ? ((~(arr_33 [i_1 - 1] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)42), (((/* implicit */signed char) (_Bool)1)))))))), (((/* implicit */long long int) var_16)));
                            var_32 = ((/* implicit */_Bool) var_3);
                        }
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
                        {
                            arr_45 [i_0] [i_1] [i_1] [i_1] [i_9] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_1 + 1] [i_9 + 1]))))) / (min((((/* implicit */long long int) (_Bool)1)), (-4632408190314476739LL)))));
                            arr_46 [i_0] [i_1] [(signed char)10] [i_0] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) -1907528586)), (3824234686U)))));
                            var_33 = ((/* implicit */signed char) arr_27 [i_0] [i_1] [i_2 + 1] [i_9] [i_12]);
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14393272098638949256ULL)) ? (-1907528582) : (((/* implicit */int) (signed char)13))));
                        }
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(arr_30 [i_0] [i_1] [6] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_15 [i_0 + 2] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_1] [i_1]))) : (var_4)))))) ? (min((4632408190314476756LL), (((/* implicit */long long int) (+(-1907528572)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1809025240158311647LL)) ? (((/* implicit */unsigned long long int) var_4)) : (var_8)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)47749))))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 2; i_13 < 8; i_13 += 4) 
                        {
                            arr_51 [i_0] [0U] [i_1] [5ULL] [0U] = ((/* implicit */signed char) max((max((arr_3 [i_1]), (min((((/* implicit */long long int) (unsigned short)24576)), (2254583041892030383LL))))), (((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_13 - 1] [i_13] [i_2 + 1] [i_1 - 1] [i_1 + 1] [i_0 + 3])) ^ (((/* implicit */int) arr_12 [i_1] [i_1] [i_9 + 1] [i_13] [i_1])))))));
                            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3930)) + (((/* implicit */int) (unsigned char)7))))))))) : (min((((((/* implicit */_Bool) arr_33 [i_0] [i_1])) ? (-1809025240158311657LL) : (arr_33 [i_0] [(signed char)1]))), (((/* implicit */long long int) 2147483639))))));
                            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)35337)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)30180)) + (((/* implicit */int) arr_47 [i_1])))))))) : ((~(((/* implicit */int) arr_34 [i_0 + 2] [i_2 + 1] [i_9 - 1] [i_9 - 1] [i_0 + 2] [i_13 + 3] [i_13 + 1]))))));
                            arr_52 [6LL] [i_0] [i_9] [i_2] [i_9] &= ((/* implicit */unsigned short) max((((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [(signed char)2] [i_9 + 1] [(unsigned char)0]))))), (((/* implicit */unsigned long long int) var_3))));
                            arr_53 [i_0] [i_1] [i_2 + 1] [i_1] [i_0] = ((/* implicit */signed char) max((arr_33 [i_1 + 1] [i_0 + 1]), (((/* implicit */long long int) arr_48 [i_9 + 1] [i_9 - 1] [i_1]))));
                        }
                    }
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1073741824)), (var_6)))) ? (var_6) : (((/* implicit */unsigned long long int) var_14))));
    /* LoopNest 2 */
    for (unsigned short i_14 = 4; i_14 < 15; i_14 += 4) 
    {
        for (signed char i_15 = 3; i_15 < 16; i_15 += 2) 
        {
            {
                var_39 = ((/* implicit */unsigned int) max((-1809025240158311644LL), (((/* implicit */long long int) 210536540U))));
                /* LoopSeq 3 */
                for (unsigned int i_16 = 4; i_16 < 17; i_16 += 4) /* same iter space */
                {
                    arr_64 [i_14] [i_14] [i_14] [2] = ((/* implicit */_Bool) arr_55 [i_15] [i_15]);
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 18; i_17 += 4) 
                    {
                        for (signed char i_18 = 1; i_18 < 16; i_18 += 3) 
                        {
                            {
                                arr_71 [i_14 - 4] [i_16 + 1] = (((_Bool)1) || (((/* implicit */_Bool) (signed char)127)));
                                var_40 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)41764))) ^ (arr_57 [i_14])))) ? (((/* implicit */int) arr_66 [i_18 + 2] [i_18 - 1] [i_18 + 1] [i_18] [i_18] [i_18 - 1])) : (((/* implicit */int) var_17))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_70 [i_14] [i_14 - 3] [i_15] [(signed char)2] [i_17] [i_14] [i_17]))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_60 [i_14] [i_14] [i_14])) : (1809025240158311629LL)))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_19 = 4; i_19 < 17; i_19 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 0; i_20 < 18; i_20 += 2) 
                    {
                        for (signed char i_21 = 3; i_21 < 17; i_21 += 4) 
                        {
                            {
                                arr_81 [i_14] [i_15 + 1] [i_19 - 1] [i_20] [i_20] [(unsigned char)16] = ((/* implicit */unsigned long long int) var_2);
                                arr_82 [i_21] = ((/* implicit */int) arr_80 [i_19]);
                                var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) min(((+(((/* implicit */int) var_11)))), (min((arr_76 [i_20] [i_19] [i_15] [i_14]), (((/* implicit */int) arr_61 [17ULL] [i_15])))))))));
                            }
                        } 
                    } 
                    arr_83 [(short)0] [(short)0] [i_19] [(short)0] |= ((/* implicit */int) ((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29495))) : (3319232572U)));
                }
                for (int i_22 = 0; i_22 < 18; i_22 += 4) 
                {
                    arr_86 [i_14] [i_14] [8LL] [i_14] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_70 [i_14 - 3] [i_14] [i_14 - 2] [i_15 + 1] [i_15 + 2] [i_15 - 2] [i_22])) ? (((/* implicit */int) arr_70 [i_14 + 2] [6U] [i_14 - 2] [i_15 - 3] [6U] [i_15 - 3] [i_15])) : (((/* implicit */int) arr_70 [i_14 - 2] [(unsigned char)12] [i_14 + 2] [i_15 + 2] [i_15 - 3] [i_15 - 2] [i_15]))))), (((max((arr_62 [i_22] [i_15 - 1] [(unsigned char)15]), (((/* implicit */long long int) var_15)))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)29494))))))))));
                    var_42 = ((/* implicit */unsigned char) (-(max(((-(((/* implicit */int) arr_54 [i_14])))), (((/* implicit */int) arr_59 [(short)6] [(short)6]))))));
                }
                var_43 ^= ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((-1809025240158311647LL) ^ (2728328508345189595LL))) : (((/* implicit */long long int) 975734733U))))) ? (((((/* implicit */_Bool) arr_79 [i_15 + 1] [i_15 - 3] [14U] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_84 [i_14 - 2]))) : (arr_79 [i_15 - 2] [i_15] [i_15] [i_15 - 2]))) : (arr_57 [i_15])));
            }
        } 
    } 
}
