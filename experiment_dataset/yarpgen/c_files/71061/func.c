/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71061
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
    var_11 = 4294967295U;
    var_12 *= ((/* implicit */long long int) ((unsigned long long int) (+(((((/* implicit */_Bool) 17U)) ? (0U) : (0U))))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] [i_1] |= (((_Bool)1) ? (((/* implicit */long long int) (-(arr_0 [i_0])))) : (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) | (439171681U)))), (((((/* implicit */_Bool) var_2)) ? (arr_1 [i_1]) : (((/* implicit */long long int) 3811571515U)))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_2] [i_2] [i_2]);
                        arr_11 [i_0] [i_1] [i_0] [i_0] [9LL] = ((/* implicit */long long int) arr_4 [i_0] [i_1]);
                        var_13 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (+(var_5)))) ? (arr_4 [i_0] [i_3 + 2]) : (arr_0 [i_3 - 2]))));
                        var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_10), (((int) 0U))))) ? ((+(0U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)62)))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_4 = 3; i_4 < 14; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_0] [i_1] [i_0] [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) 13079928935338929057ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)62))) : (-17LL)));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 1; i_5 < 16; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */int) ((arr_7 [i_4] [i_4] [i_4 + 2] [i_4 + 3] [i_4 + 2] [i_5 - 1]) ? (var_3) : (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_4 + 2] [i_4 + 3] [i_4 + 2] [i_4]))));
                            var_16 = ((/* implicit */unsigned long long int) ((var_2) << (((((-1947091419) + (1947091430))) - (8)))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(arr_2 [i_0] [i_0])))) - (arr_9 [i_2] [i_5 - 1] [i_2] [i_2])));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            arr_20 [i_0] [i_0] [10U] [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_4])) : (arr_2 [i_0] [i_0])));
                            arr_21 [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) ((short) arr_7 [i_4 - 3] [i_4] [8U] [i_4 - 3] [i_4 - 3] [i_4]));
                        }
                        arr_22 [i_4] [i_1] [i_1] = ((/* implicit */_Bool) ((997221822831110989LL) ^ (4187056425281870299LL)));
                    }
                }
            } 
        } 
        var_18 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((unsigned short) 997221822831110989LL))))) || (((/* implicit */_Bool) max((9223372036854775797LL), (((/* implicit */long long int) max((var_2), (var_1)))))))));
    }
    for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 3) 
    {
        arr_26 [i_7 - 1] [i_7] = ((((((/* implicit */int) arr_24 [i_7 + 1])) / (arr_23 [i_7]))) / ((+(((/* implicit */int) arr_24 [i_7 - 1])))));
        var_19 -= ((/* implicit */short) var_1);
        arr_27 [i_7] = ((/* implicit */int) var_4);
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((max((((/* implicit */long long int) arr_24 [7])), (((((/* implicit */_Bool) 13964733291287391781ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7]))) : (var_7))))), (((/* implicit */long long int) arr_25 [i_7 + 1] [i_7 - 1])))))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_21 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) var_2)) >= (var_4)))) ^ (arr_23 [(_Bool)1])));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((signed char) var_3)))));
    }
    for (unsigned int i_9 = 2; i_9 < 14; i_9 += 4) 
    {
        arr_33 [i_9] [i_9] = ((/* implicit */long long int) var_10);
        var_23 = ((/* implicit */signed char) ((arr_4 [i_9] [i_9 - 2]) & (((-1054708247) + (((/* implicit */int) (!(((/* implicit */_Bool) 997221822831110989LL)))))))));
        /* LoopSeq 1 */
        for (long long int i_10 = 1; i_10 < 15; i_10 += 1) 
        {
            var_24 = (+(-1332538083));
            arr_36 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((-17LL) + (((/* implicit */long long int) arr_0 [i_10 + 2])))), (((((/* implicit */long long int) var_10)) + (var_3)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-1LL) : (arr_34 [i_9])))) ? (arr_23 [i_9]) : (max((var_1), (((/* implicit */int) arr_24 [19LL])))))) : (((((/* implicit */int) ((_Bool) (signed char)-77))) - (max(((-2147483647 - 1)), (((/* implicit */int) (short)-21842))))))));
            /* LoopSeq 2 */
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                arr_39 [i_9] [i_9] = ((int) var_8);
                var_25 += ((/* implicit */unsigned short) (~(min(((-(var_5))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_32 [i_9] [i_11])), (var_6))))))));
            }
            for (unsigned short i_12 = 2; i_12 < 16; i_12 += 4) 
            {
                arr_43 [i_9] [i_10 - 1] [i_9] &= ((/* implicit */unsigned long long int) (~(max((arr_2 [i_9 + 2] [i_9 + 2]), (arr_2 [i_9 - 2] [i_9 + 2])))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) (!((_Bool)0)))) >= (var_10)));
                var_27 = ((/* implicit */unsigned int) ((_Bool) ((long long int) 1646925539U)));
                var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_24 [i_9])) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) var_1)) / (1467337481U)))) : (arr_41 [i_12 - 2] [i_10 - 1] [i_9 + 3] [i_9 - 2]))) >> ((((((!(((/* implicit */_Bool) -4470929217747620569LL)))) ? (((/* implicit */long long int) 2749864761U)) : (var_5))) - (704603653827814707LL)))));
            }
            var_29 = ((/* implicit */short) -897712831);
            var_30 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_9] [i_9])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9] [i_9 + 3])))));
        }
    }
    var_31 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (var_9)))) ? ((~(var_10))) : (min((var_1), (((/* implicit */int) (signed char)-71)))))), ((-(((/* implicit */int) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))))));
}
