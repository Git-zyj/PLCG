/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88166
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_1))) + (var_8))) / (((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (((max((((/* implicit */unsigned int) var_4)), (var_5))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_1))))))) : (var_5)));
    var_11 = ((/* implicit */int) min((((var_2) ? ((~(3208879785U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) var_0))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0))) : (max((var_0), (var_0)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_8 [i_2] [5LL] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-8653242156331028703LL), (((/* implicit */long long int) (unsigned short)881))))) ? (((/* implicit */int) max(((unsigned short)40782), ((unsigned short)22882)))) : (((/* implicit */int) var_7))))), (min((1647579208U), (((/* implicit */unsigned int) (unsigned char)220))))));
                    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (+(((/* implicit */int) min(((unsigned short)40792), (((/* implicit */unsigned short) (_Bool)0))))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned int) arr_6 [(unsigned short)4] [i_0 - 2] [i_0 - 2] [(signed char)0]);
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned char)11] [i_3] [i_2] [11LL]);
                    }
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            var_14 *= ((/* implicit */signed char) arr_10 [i_0] [i_0] [9U] [i_2] [i_4] [(signed char)1]);
                            arr_18 [(unsigned short)8] [(unsigned short)8] [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1]))) - (arr_16 [i_0] [(unsigned char)11] [i_2] [7LL] [i_0 + 1])));
                        }
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((unsigned int) max((((/* implicit */long long int) arr_17 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4])), (arr_15 [i_0] [i_1] [i_2] [(_Bool)1] [3ULL] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_0 + 1]) <= (arr_7 [i_0 + 1]))))))))));
                        arr_19 [(unsigned char)11] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1] [7U])) ? (((unsigned long long int) ((((arr_16 [i_0] [i_1] [i_2] [i_2] [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_4 [i_2] [i_2])) - (49)))))) : (((/* implicit */unsigned long long int) arr_15 [i_0] [(signed char)7] [i_1] [(unsigned short)5] [(unsigned short)5] [i_4]))));
                    }
                    for (signed char i_6 = 1; i_6 < 8; i_6 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_7 = 2; i_7 < 11; i_7 += 4) /* same iter space */
                        {
                            arr_26 [i_7] [i_6] [i_2] [i_2] [i_6] [i_6] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) max((arr_23 [i_0] [i_6] [2LL] [i_6] [i_6] [i_7]), (((/* implicit */long long int) arr_4 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_17 [2U] [2U] [2U] [i_2] [i_6 + 2] [i_7]), (var_2))))) : ((~(var_0))))));
                            var_16 *= ((/* implicit */signed char) arr_14 [(signed char)1] [i_2] [i_6]);
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) max((5092746863755160584LL), (((/* implicit */long long int) (unsigned short)62815)))))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (+(arr_11 [i_0] [i_0] [i_0] [i_6 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_17 [i_0] [i_7] [i_2] [i_6] [i_7] [i_1]), (arr_17 [i_0] [i_1] [i_2] [i_1] [i_7] [i_6]))))) : (arr_9 [i_0] [i_0] [i_1] [i_2] [(signed char)4] [i_0])));
                        }
                        for (unsigned int i_8 = 2; i_8 < 11; i_8 += 4) /* same iter space */
                        {
                            arr_29 [i_6] [i_1] [i_2] [i_6] [i_8] [i_8 - 2] = ((/* implicit */unsigned short) ((int) ((((((/* implicit */_Bool) arr_11 [i_0 + 1] [(unsigned char)1] [i_2] [i_6 + 1])) ? (((/* implicit */long long int) arr_2 [i_0 + 1] [10U])) : (arr_0 [i_8]))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [8] [i_1] [i_2] [i_6 + 4] [i_1])) ? (((/* implicit */int) (unsigned short)40782)) : (((/* implicit */int) var_1))))))));
                            var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_8] [i_6] [i_1] [i_1] [i_0 - 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) (signed char)112)) ? (arr_24 [i_0] [7] [(unsigned char)5] [(unsigned char)5] [i_8]) : (arr_23 [i_0] [i_2] [i_2] [i_6] [i_6] [i_8])))))) ? (max((((/* implicit */unsigned int) arr_28 [i_0 + 1] [i_0 - 1] [5LL] [i_6] [i_6])), (((var_0) % (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                            var_20 = (-(((((/* implicit */_Bool) arr_23 [i_0 - 2] [i_6] [i_0 - 2] [i_2] [i_6] [i_8])) ? (arr_23 [i_0] [i_6] [i_1] [i_2] [i_6 - 1] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0 - 1] [10U] [i_2] [i_6]))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 2; i_9 < 11; i_9 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)53505))));
                            arr_32 [i_0] [i_9] [i_2] [i_6] [i_9] = ((/* implicit */unsigned long long int) ((((arr_1 [i_2]) & (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_6 + 2] [i_1]))))) ^ (arr_23 [i_0] [i_6] [i_2] [i_0] [i_6] [i_2])));
                            var_22 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 5561161032111447584LL)))) ? (((/* implicit */long long int) (-(arr_31 [i_0] [i_1] [i_2] [i_2] [i_9] [i_2])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0 - 2] [i_0 - 2] [i_6] [i_0 - 2]))) : (var_8)))));
                        }
                        for (unsigned int i_10 = 2; i_10 < 11; i_10 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_9 [i_10 - 2] [i_10] [i_10] [i_10 - 2] [i_10 - 2] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [8LL] [i_0 + 1] [i_6 + 1]))) : (arr_9 [i_10 - 2] [i_10 - 2] [i_10] [i_10 - 2] [i_10] [i_10]))), (min((max((((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_2] [i_6] [i_10])), (arr_9 [(unsigned char)2] [i_2] [i_2] [i_6 + 4] [i_10] [i_10]))), (((/* implicit */unsigned long long int) arr_2 [(unsigned char)6] [i_1]))))));
                            var_24 = ((/* implicit */int) min((max((arr_7 [i_10 - 2]), (arr_7 [i_10 - 2]))), (min((arr_7 [i_10 + 1]), (arr_7 [i_10 - 1])))));
                            arr_35 [i_0] [i_0] [i_0] [i_6] [i_6] [i_10 - 2] = ((/* implicit */unsigned long long int) var_8);
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62795))) ^ (0LL))), (((/* implicit */long long int) max(((unsigned short)8561), ((unsigned short)43641))))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) + (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0 + 1] [i_0 + 1] [i_2] [i_2] [i_0 + 1]))) : (arr_33 [i_0] [i_0])))))) : (((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_2] [i_6] [i_10])))) ? (arr_23 [i_6] [i_10] [i_6 + 2] [i_1] [i_10] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)61847), (arr_22 [i_0] [i_1] [i_0] [i_1]))))))))))));
                        }
                        arr_36 [i_6] [i_6] [i_2] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)37636))) + ((+(arr_30 [i_0 - 1] [i_1] [i_1] [i_2] [i_0 - 1])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 3) 
                        {
                            arr_39 [i_0] [i_1] [i_1] [i_6] [i_11] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)24576))) | (-5092746863755160585LL));
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [i_6] [i_2] [i_6 + 2] [i_0 - 2] [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)37627), (((/* implicit */unsigned short) (signed char)127)))))) : (arr_24 [i_0] [i_1] [(signed char)9] [i_6] [i_11])));
                        }
                        for (unsigned char i_12 = 2; i_12 < 11; i_12 += 4) 
                        {
                            arr_43 [i_6] [i_1] [i_2] [i_6] [2LL] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_6 + 3] [i_1] [i_6 + 3] [i_6] [i_6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_22 [i_1] [i_2] [i_2] [i_6]))))) & (arr_14 [i_0 - 2] [i_6 + 1] [i_0 - 2]))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                            arr_44 [i_6] [i_6] [6] [i_6] [i_6] [i_0 - 2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)0))))), (((((/* implicit */_Bool) ((unsigned short) (signed char)113))) ? (max((((/* implicit */long long int) arr_21 [i_6] [i_6] [i_6] [i_6])), (arr_30 [i_12] [i_1] [i_2] [i_1] [(unsigned char)10]))) : (((/* implicit */long long int) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_1] [(unsigned short)0] [i_1]))))))))));
                        }
                        var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_17 [i_0] [i_1] [i_1] [i_6] [4LL] [i_2])), (arr_25 [i_6 - 1] [i_2] [i_1] [i_0])))) ? (((((/* implicit */_Bool) arr_22 [(unsigned short)1] [i_1] [(unsigned short)1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_31 [i_6] [i_2] [i_2] [i_0] [i_1] [i_0]))) : ((-(arr_33 [i_6] [i_6]))))) | (((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) arr_22 [i_0 + 1] [i_1] [i_2] [i_6]))))) ? (arr_31 [i_0] [i_1] [i_2] [i_6] [i_1] [i_1]) : (arr_31 [i_0] [i_0 - 1] [i_0 + 1] [9] [i_6 - 1] [i_6])))));
                    }
                }
            } 
        } 
    } 
}
