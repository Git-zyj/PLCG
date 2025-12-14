/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75898
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((short)-19264), ((short)15954)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-9043))) : (var_0))))));
                        var_14 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [2ULL] [i_1] [(_Bool)0]))))) ? (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9018))) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [(_Bool)1] [11U] [i_0])) < (((/* implicit */int) (signed char)0))))))))));
                        arr_9 [i_0] [13ULL] [i_2] [i_2] = min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) var_0)) : (min((((/* implicit */long long int) (short)-15944)), (var_9))))), (((/* implicit */long long int) ((((long long int) var_12)) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_6))))))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            var_15 = ((((/* implicit */_Bool) ((3U) << (((((/* implicit */int) (short)-15955)) + (15963)))))) ? (((/* implicit */int) (short)-9043)) : (((/* implicit */int) var_8)));
                            arr_12 [i_1] [i_2] [i_4] [(unsigned char)14] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) ((unsigned int) var_3)))));
                            var_16 = ((/* implicit */int) (+(var_1)));
                            var_17 = arr_7 [i_0];
                        }
                        for (unsigned short i_5 = 3; i_5 < 11; i_5 += 4) 
                        {
                            var_18 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-9055)) ? (((/* implicit */int) arr_13 [i_1 - 1] [i_5 - 1] [i_5] [i_5] [i_5 - 1])) : (((/* implicit */int) (unsigned char)176)))), (((/* implicit */int) (short)-9065))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) ((arr_0 [i_1] [i_1]) != (arr_0 [i_1] [i_1])))) + (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (unsigned char)79))))))))));
                            var_20 -= ((/* implicit */signed char) arr_4 [i_0]);
                        }
                        for (short i_6 = 2; i_6 < 14; i_6 += 4) /* same iter space */
                        {
                            arr_19 [(unsigned short)9] [i_1] [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned int) var_4));
                            var_21 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)122))));
                        }
                        /* vectorizable */
                        for (short i_7 = 2; i_7 < 14; i_7 += 4) /* same iter space */
                        {
                            arr_22 [i_0] [i_0] [i_1] [(signed char)2] [i_7] &= ((/* implicit */unsigned long long int) (_Bool)0);
                            arr_23 [i_0] [i_1] [i_2] [i_0] [i_7] = (~(((/* implicit */int) arr_17 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])));
                            arr_24 [(unsigned short)2] [i_7] [i_2] [i_3 - 1] [12U] [i_7 - 2] [6LL] |= ((int) var_5);
                        }
                        arr_25 [i_0] = ((/* implicit */short) ((_Bool) ((((((/* implicit */_Bool) var_12)) ? (9745757735751005239ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_20 [i_0] [12U] [i_1] [i_1] [i_2] [i_0] [i_3]), (((/* implicit */short) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_30 [0U] [i_1 - 2] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16955426320807156683ULL)))))) - (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (469762048) : (((/* implicit */int) (_Bool)1))))), (arr_4 [i_1 - 2])))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-123), (((/* implicit */signed char) arr_10 [i_0] [i_0] [i_1] [i_2] [i_0])))))) ^ (var_3)))))));
                        var_23 += ((/* implicit */unsigned int) min((((((/* implicit */int) arr_13 [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 1])) * (((/* implicit */int) (unsigned char)15)))), (((/* implicit */int) max((arr_13 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 1]), (var_6))))));
                        arr_31 [i_0] [14LL] [i_0] [i_2] [i_2] [i_8] = ((/* implicit */short) (-(((((/* implicit */_Bool) 9007198717870080LL)) ? (max((((/* implicit */unsigned long long int) arr_28 [i_0] [i_0] [i_2] [i_8] [i_1 - 1] [i_0])), (arr_7 [i_0]))) : (((/* implicit */unsigned long long int) var_10))))));
                    }
                    for (long long int i_9 = 4; i_9 < 14; i_9 += 2) 
                    {
                        arr_36 [i_0] [i_1 + 1] [5ULL] [i_9] = (-(((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) arr_17 [8LL] [8LL] [i_1 - 2] [1LL] [8LL])) : ((+(arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                        arr_37 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) arr_8 [i_1]);
                        arr_38 [i_0] [14U] [i_2] [i_0] = ((/* implicit */_Bool) ((arr_28 [(short)1] [i_0] [i_1 - 2] [i_2] [(short)7] [i_9]) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-9043)) || (((/* implicit */_Bool) 1152921504573292544ULL))))) : (((((/* implicit */int) (unsigned short)53692)) / (((/* implicit */int) arr_18 [i_9] [i_9] [i_0] [i_9] [i_0] [5] [i_9 - 1]))))));
                        var_24 -= ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_9 - 1] [i_9] [i_9 - 2] [i_9 + 1] [i_9 - 3]))))) * (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (-9007198717870067LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)122)))))), (((((/* implicit */_Bool) arr_29 [i_0] [i_2] [i_9 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2] [i_1]))) : (arr_7 [i_1]))))));
                        var_25 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 4026531840U)) ? ((-(-670142947))) : ((+((-(((/* implicit */int) var_4))))))));
                    }
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_1]))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_0)), (min((var_11), (((/* implicit */unsigned long long int) var_7)))))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))) * (0ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_8)))))))));
    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15946)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_10)))) ? ((+(var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9055))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)9055))))))));
    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) var_7))));
}
