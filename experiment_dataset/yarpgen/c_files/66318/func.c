/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66318
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
    var_17 -= ((((((/* implicit */_Bool) max((var_11), (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_0))) >> (((((/* implicit */int) var_8)) + (1105))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (min((((/* implicit */unsigned long long int) 2195203426U)), (5759327329097297068ULL)))))) <= ((+(((/* implicit */int) (unsigned char)16))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) (+(min((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1464071736U)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 3823023873U)) >= (5998762945346856812ULL))))))));
                    var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) 1622941428U)) + (var_4))), (((/* implicit */unsigned long long int) ((long long int) arr_1 [i_2])))))) ? (((((/* implicit */_Bool) var_0)) ? (var_1) : ((-(var_4))))) : (((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_3)), (arr_5 [4U] [i_1] [(short)2] [4ULL]))), (((((/* implicit */int) arr_2 [(unsigned char)0])) + (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])))))))));
                    var_20 = var_7;
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) (+(279229648763484044ULL)));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_1 [i_0 - 1])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)253)), (var_12))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_5 = 1; i_5 < 7; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */short) 1343761314);
                            arr_16 [i_0] [i_1] [i_2 - 1] [i_1] [i_5 + 1] = arr_0 [i_4];
                        }
                        for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((_Bool) (+(((/* implicit */int) arr_13 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) (-(2492095159U)))) : (min((arr_0 [i_2 - 2]), (((/* implicit */unsigned long long int) var_15))))));
                            var_25 = ((/* implicit */int) (signed char)104);
                            var_26 ^= (+(var_12));
                            var_27 = ((arr_11 [6ULL] [i_1] [i_1] [i_4]) ? (((/* implicit */int) ((((((/* implicit */unsigned int) var_10)) < (var_11))) && (((/* implicit */_Bool) max((var_0), (arr_6 [i_6] [(_Bool)1] [i_6]))))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_4] [i_4] [i_4])) ? (arr_5 [(signed char)0] [i_1] [i_0] [i_4]) : (arr_5 [i_0] [i_1] [i_0] [i_4]))));
                            var_28 *= ((/* implicit */signed char) (+(((/* implicit */int) max((arr_2 [i_6]), (arr_2 [i_6]))))));
                        }
                        arr_20 [i_0] [i_1] [i_0] [8ULL] = ((/* implicit */int) min((((arr_3 [i_0 - 3]) % (arr_3 [i_0 - 3]))), (max((((/* implicit */unsigned int) (unsigned char)194)), (0U)))));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 1; i_7 < 9; i_7 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_0 + 2] [i_2 - 2])) || (((/* implicit */_Bool) ((var_14) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_21 [i_2 - 2] [i_7 + 1] [i_2 - 2] [i_0 - 1] [i_2 - 2]) ? (((/* implicit */int) var_3)) : (var_10)))) ? (var_0) : (((((/* implicit */_Bool) arr_23 [i_1] [i_2 - 1] [i_7 - 1] [i_7 - 1] [(short)9])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_23 [7ULL] [7ULL] [i_2] [(signed char)9] [i_2])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))), (((/* implicit */unsigned int) arr_18 [7ULL] [i_1] [i_1] [i_7 - 1]))))) ? (((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-30))))) : (min((((/* implicit */unsigned int) (unsigned char)195)), (592726860U)))));
                            var_32 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)98)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((13811968641878865691ULL) <= (((/* implicit */unsigned long long int) var_14))))))));
                            arr_24 [i_0 + 2] [i_1] [i_2] [i_1] [i_1] = max((((((/* implicit */_Bool) 2147483648U)) ? (14995064632318542505ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92))))), (312315561589241899ULL));
                        }
                        for (int i_8 = 1; i_8 < 7; i_8 += 1) /* same iter space */
                        {
                            var_33 ^= ((/* implicit */unsigned char) 0U);
                            var_34 = ((/* implicit */int) 5ULL);
                            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2047)) ? (1772947444U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) -5726490576728221406LL)) : (5057407252110809048ULL)));
                            var_36 = ((((arr_6 [i_1] [i_2] [i_2]) - (arr_12 [i_2 + 1] [i_2] [i_2] [i_2 + 2]))) & (((/* implicit */unsigned int) ((((var_10) + (2147483647))) << (((arr_12 [i_2 - 2] [i_2 - 2] [4U] [i_2 + 2]) - (3567049247U)))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 7; i_9 += 1) /* same iter space */
                        {
                            arr_30 [4U] [i_9] [i_1] [i_9] [i_9] [i_9] [2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2 + 2] [8U]))) * (var_4));
                            var_37 = arr_29 [i_0] [i_1] [i_0] [(signed char)9];
                        }
                    }
                    for (unsigned long long int i_10 = 4; i_10 < 7; i_10 += 2) 
                    {
                        arr_34 [i_0] [i_1] [i_0 - 1] [i_10] [i_10] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-1)) ? (arr_19 [1U] [i_1]) : (((/* implicit */unsigned int) 2147483643)))), (max((3402606729U), (((/* implicit */unsigned int) var_9))))))) ? (max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (730983999))), (((/* implicit */int) ((arr_0 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
                        var_38 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_11) >> ((((+(arr_31 [i_10]))) - (4252209309U))))))));
                        var_39 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((unsigned int) -1)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (arr_31 [i_10]))))));
                        arr_35 [i_2] [i_1] [i_2] [i_2 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_18 [i_10 - 1] [i_2 - 1] [i_1] [i_10 + 3])), (arr_1 [i_2 - 1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_4)))))))) : (min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 3837875738584803269LL)) <= (arr_29 [i_10] [i_2] [9U] [1LL]))))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_2 + 1])) && (((/* implicit */_Bool) arr_12 [i_11] [i_11] [i_2] [i_2 + 1]))));
                        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (+((+(var_1))))))));
                        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [(short)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_12 [i_0] [i_1] [i_2] [0U])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (signed char)91)))))) : (var_4))))));
                        arr_39 [i_1] [i_1] [(unsigned char)9] [i_1] [i_1] = ((/* implicit */int) (+(arr_26 [i_0 - 1] [i_0] [i_0 + 1] [i_2 + 1] [i_2 - 1] [(unsigned char)1] [i_2 + 2])));
                        var_43 = (i_1 % 2 == 0) ? (((/* implicit */long long int) ((var_14) >> (((arr_19 [i_0 + 1] [i_1]) - (1668895057U)))))) : (((/* implicit */long long int) ((var_14) >> (((((arr_19 [i_0 + 1] [i_1]) - (1668895057U))) - (2364759062U))))));
                    }
                    var_44 |= ((/* implicit */unsigned long long int) ((((arr_3 [i_0 + 1]) << (((arr_3 [i_1]) - (4182591563U))))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)69)))));
                }
            } 
        } 
        var_45 = max((((arr_37 [i_0 - 2] [i_0 + 2] [(_Bool)1] [i_0 - 2] [i_0] [i_0 + 1]) << (((arr_26 [i_0] [i_0] [i_0 - 2] [(signed char)6] [i_0 - 1] [i_0 - 1] [i_0 - 1]) - (9070799334183782914ULL))))), (min((((/* implicit */unsigned long long int) var_16)), (var_4))));
        arr_40 [i_0] = ((/* implicit */short) max((arr_22 [i_0 + 1] [i_0 + 2] [i_0 - 3] [i_0 - 2] [(_Bool)1]), (((/* implicit */int) ((((/* implicit */int) (short)-8568)) < (((/* implicit */int) (unsigned char)255)))))));
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            var_46 *= ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_0 - 3] [i_0 + 1] [i_0 - 3] [i_0])) ? (arr_37 [i_0 + 1] [i_0 + 1] [i_12] [i_0 + 2] [i_12] [i_12]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_21 [i_0] [i_0 - 2] [i_0] [(short)8] [i_12])), (var_6)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_32 [i_0 - 3] [i_0 - 3])))))));
            arr_44 [i_0] [i_12] = ((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9))) > (var_7))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_21 [i_12] [i_12] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_32 [i_0] [i_0])))) : (((((/* implicit */int) var_2)) | (((/* implicit */int) (unsigned char)166)))))) + (((((/* implicit */_Bool) (((_Bool)0) ? (arr_12 [i_12] [i_12] [i_12] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? (var_10) : (((/* implicit */int) ((signed char) var_3)))))));
            var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_19 [i_0 - 1] [i_12])) % (arr_29 [i_12] [i_12] [i_12] [i_0])))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))));
            arr_45 [i_0 - 1] = ((/* implicit */unsigned int) (((-(var_4))) - (((/* implicit */unsigned long long int) (-(arr_6 [i_12] [i_12] [i_12]))))));
        }
        var_48 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) arr_14 [4U] [(short)2] [6U] [4U] [i_0 - 3]))), (((((/* implicit */_Bool) arr_14 [i_0] [6ULL] [(signed char)8] [i_0] [i_0 + 2])) ? (var_0) : (arr_14 [i_0 - 3] [i_0] [(unsigned char)2] [i_0 + 1] [i_0 + 2])))));
    }
}
