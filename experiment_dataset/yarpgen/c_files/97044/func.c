/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97044
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    var_14 *= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-119)) > (((/* implicit */int) (unsigned short)2295)))))));
                    var_15 += ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521))) == (arr_7 [i_2 - 2] [i_2 - 2] [(unsigned short)10]))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_2 - 3] [(unsigned short)10] [0ULL]))) : (((/* implicit */int) ((unsigned short) var_9)))));
                }
                for (signed char i_3 = 3; i_3 < 8; i_3 += 4) 
                {
                    var_16 *= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (6193116629613608545LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) * (0LL))) : (6928515542742879728LL))));
                    arr_11 [i_1] = ((/* implicit */int) min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)41689))));
                    var_17 = ((/* implicit */int) min((arr_9 [9] [i_1] [i_1] [i_3 - 2]), (((/* implicit */long long int) ((((/* implicit */int) var_10)) % (126976))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        var_18 ^= ((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_1]);
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11533))) : (arr_4 [i_0])))) ? (3841448557524110565LL) : (arr_1 [6]))))));
                        var_20 = ((/* implicit */int) ((arr_9 [i_0] [i_1] [i_3] [i_4]) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65522)) || (((/* implicit */_Bool) (unsigned short)15872))))))));
                        var_21 -= ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6825357066855247465ULL))))) : (((/* implicit */int) var_3)));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 4) 
                        {
                            arr_16 [4] [3] [i_1] [i_4] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (signed char)47))) ? (arr_1 [i_3]) : (((((/* implicit */_Bool) arr_3 [i_1] [9])) ? (((/* implicit */long long int) var_4)) : (2804401815689107652LL)))));
                            arr_17 [i_1] [i_4] [i_4] [i_3] [i_1] [(unsigned short)2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3 + 2])) ? (((/* implicit */unsigned long long int) arr_4 [i_5])) : (((((/* implicit */_Bool) arr_7 [6LL] [1] [i_4])) ? (((/* implicit */unsigned long long int) -1161413819)) : (arr_12 [i_1] [(unsigned short)1] [i_0])))));
                            var_22 = (-(((/* implicit */int) arr_15 [5LL] [i_1] [i_3 - 1] [i_3] [i_5 + 1] [i_3 - 1] [(unsigned short)1])));
                        }
                    }
                    arr_18 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_3 - 3]))))) && (((/* implicit */_Bool) (-(min((arr_0 [i_1] [i_3]), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_3] [i_1])))))))));
                }
                var_23 &= ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) + (arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_15 [10] [i_0] [6LL] [(unsigned short)2] [i_0] [i_0] [i_0])) / (((/* implicit */int) (unsigned short)18793)))), (((((/* implicit */_Bool) (unsigned short)15552)) ? (((/* implicit */int) (unsigned short)4998)) : (((/* implicit */int) var_10)))))))));
                arr_19 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (((~(arr_9 [i_0] [i_1] [i_1] [i_1]))) < (((((/* implicit */_Bool) arr_1 [i_1])) ? (min((var_2), (((/* implicit */long long int) (signed char)-75)))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)62892)))))))));
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (int i_7 = 4; i_7 < 9; i_7 += 1) 
                    {
                        {
                            var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)20)) ? (var_12) : (arr_0 [i_0] [i_6]))), (((/* implicit */unsigned long long int) ((-7102342638198525395LL) ^ (arr_1 [i_7]))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_6] [4] [i_0] [i_6] [i_7] [i_7])) ? (((/* implicit */int) var_10)) : (332744117)))), (((((/* implicit */unsigned long long int) 1958762385)) + (var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_7 - 2])) & (((/* implicit */int) arr_2 [i_7 + 1])))))));
                            var_25 = (+(var_6));
                            /* LoopSeq 2 */
                            for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                            {
                                arr_26 [i_0] [2] [i_1] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) -1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_8] [i_7 - 3])) ? (((/* implicit */int) arr_10 [i_1] [i_6] [i_1])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)11))))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) min((arr_14 [7ULL] [(unsigned short)7]), (((/* implicit */int) var_7))))) : (((unsigned long long int) arr_1 [i_1]))))));
                                var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_8] [7ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_12)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_8] [i_7]))) == (var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) 13851059941481735118ULL))))))) == (((/* implicit */int) ((((((/* implicit */_Bool) arr_23 [i_1] [i_6] [i_6])) ? (((/* implicit */int) arr_8 [i_6] [i_6] [i_6])) : (var_4))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)62933)) : (((/* implicit */int) (signed char)64)))))))));
                            }
                            for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 4) 
                            {
                                var_27 = ((/* implicit */signed char) (~(min((arr_7 [i_0] [i_1] [5LL]), (((/* implicit */long long int) arr_23 [i_1] [i_7 - 2] [i_9]))))));
                                arr_29 [i_0] [i_0] [i_0] [2LL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [3ULL] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) 2143289344)), (arr_20 [i_0] [i_1] [2LL]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0]))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2510034557097416384LL)) ? (((/* implicit */int) arr_27 [i_1] [i_1] [i_7])) : (var_9)))) + (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (1492615392224389613ULL)))))));
                                var_28 = ((/* implicit */signed char) min((((unsigned short) (unsigned short)8)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)27188)) : (((/* implicit */int) var_3))))))))));
                            }
                            arr_30 [i_7] [i_6] [i_1] [i_1] [i_0] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1687624547)) ? (var_11) : (((/* implicit */int) (unsigned short)26169))))) ? ((~(arr_5 [i_0] [i_1] [4] [2ULL]))) : (((/* implicit */long long int) (+(arr_14 [i_1] [i_7]))))))), (((((/* implicit */_Bool) var_9)) ? (arr_21 [0] [i_6] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16687))))));
                            var_29 ^= ((/* implicit */int) 6361691440418857424ULL);
                        }
                    } 
                } 
                arr_31 [i_0] [7] [i_1] = ((((((/* implicit */_Bool) -3889507867846545437LL)) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)22056)))) & (((/* implicit */int) ((arr_25 [i_0] [i_0] [(signed char)1] [i_1] [(signed char)1]) != (((/* implicit */int) arr_8 [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
    var_30 = ((/* implicit */int) var_13);
}
