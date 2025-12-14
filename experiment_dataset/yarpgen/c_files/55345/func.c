/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55345
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
    var_13 = max((var_1), ((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) (_Bool)1))))) << (((((var_4) + (((/* implicit */int) (short)23359)))) + (100863543)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_6)))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)73))) < (var_6))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)71)) || (((/* implicit */_Bool) (unsigned char)178))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= (arr_6 [i_2] [i_1] [(_Bool)1] [i_0]))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_1 + 1] [i_2 - 1])), ((-(((/* implicit */int) arr_1 [(_Bool)1]))))))) : (max((max((var_6), (arr_6 [i_0] [i_1] [i_2 + 1] [i_0]))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_2])) ? (arr_2 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) -10))))))));
                    arr_7 [6ULL] [i_2] [i_2] = ((/* implicit */int) var_11);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        arr_10 [i_2] [i_2] [i_2] = 23;
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_16 -= ((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_1] [i_1 - 1]) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_1 + 4])) : (((/* implicit */int) arr_5 [i_1] [(_Bool)0] [i_1 - 1]))));
                            arr_14 [i_1] [i_4] &= ((/* implicit */unsigned short) var_10);
                            var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) 1833001729)) ? (-1414613114) : (231280299)))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)30457)) ? (-231280281) : (((/* implicit */int) (unsigned short)24523))))));
                        }
                        arr_16 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_0] [i_1 + 3] [i_1 - 2] [i_1 + 4])) * (((/* implicit */int) arr_4 [i_1 + 1] [i_0]))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((arr_2 [i_0] [i_1] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */int) var_7)))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_19 += ((/* implicit */_Bool) max((min((((/* implicit */unsigned char) arr_9 [i_5])), (((unsigned char) arr_9 [i_5])))), (min((arr_18 [i_2 + 1] [i_5] [i_1 + 3] [i_5] [i_1 - 2]), (arr_18 [i_2 + 4] [i_5] [i_1 + 4] [i_5] [i_1 + 1])))));
                        arr_19 [i_0] [i_0] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */int) max((arr_13 [i_0] [i_1] [i_2 + 1] [i_5] [i_5]), (((/* implicit */unsigned int) var_4))));
                        var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_2] [i_1] [i_2] [i_5])) ? (((min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_8)))) + (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (var_3)))))) : (((/* implicit */unsigned long long int) (-(max((((/* implicit */int) arr_3 [i_1])), (var_0))))))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) 16255129091849055401ULL))))) ^ (((/* implicit */int) max((arr_17 [i_1 + 4] [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 4]), (arr_17 [i_1 - 1] [i_2 + 4] [i_2 + 4] [i_2] [i_2 - 1])))));
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 10; i_6 += 4) 
                        {
                            arr_23 [i_2] [i_2] [i_2] [5] [i_2] = ((/* implicit */_Bool) var_3);
                            arr_24 [i_2] = ((/* implicit */short) ((int) max((((var_0) < (((/* implicit */int) arr_9 [i_2])))), ((!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_2] [i_2] [i_0])))))));
                            arr_25 [i_2] [i_2] [i_2] [i_2] [(signed char)2] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_6 + 3] [i_5] [i_5])) >> (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 + 1])))))));
                            var_21 *= ((/* implicit */short) ((((/* implicit */int) ((short) arr_4 [i_1 + 3] [i_6 - 1]))) * (((/* implicit */int) var_9))));
                        }
                    }
                    var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-1237766261)))) ? ((+(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)116)), (arr_3 [i_1])))))) : (((/* implicit */int) max(((signed char)127), (((/* implicit */signed char) (_Bool)0)))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            var_23 |= ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_7])) | (((/* implicit */int) var_12)))) ^ (((/* implicit */int) var_11))));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 13; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 1; i_10 < 11; i_10 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_0] [i_8])), (var_3)))))))));
                            arr_34 [i_0] [i_7] [i_7] [i_9] [i_10] [i_9] = ((/* implicit */_Bool) ((((_Bool) var_0)) ? (((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_8] [i_7] [i_10 - 1]))) - (9223372036854775807LL))))) : (((/* implicit */int) ((((/* implicit */int) arr_28 [i_10 - 1] [i_8] [i_8] [i_8])) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)59909))))))))));
                        }
                        for (signed char i_11 = 3; i_11 < 12; i_11 += 4) 
                        {
                            var_25 = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0] [i_0]))))));
                            arr_39 [i_0] [i_0] [i_0] [i_0] [i_11] = ((/* implicit */_Bool) var_6);
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 13; i_12 += 2) 
                        {
                            arr_43 [i_0] [i_0] [i_7] [i_8] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_30 [i_0] [(short)0] [i_0] [i_0]))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))));
                        }
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)9)) ? (2001930346) : (((/* implicit */int) (signed char)110)))) != (max((((/* implicit */int) arr_5 [i_7] [i_8] [i_9])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_42 [i_8] [i_8] [(unsigned short)11] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_1 [i_9])))))))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_8] [i_9]))))) > (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) arr_28 [i_0] [i_7] [i_7] [i_9])))))));
                    }
                } 
            } 
            var_29 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((var_6) - (13218960290134915815ULL)))))) ? (((int) arr_2 [i_0] [i_0] [i_0])) : (((((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_7] [i_7] [i_7])) >> (((((/* implicit */int) arr_21 [i_0] [i_0] [i_7] [i_7] [i_7])) + (151)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_7])) || (((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) min((arr_28 [i_0] [i_0] [i_7] [i_7]), (((/* implicit */short) arr_11 [i_0] [i_7] [i_0] [i_7])))))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 1) 
        {
            var_30 &= ((/* implicit */unsigned long long int) arr_42 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]);
            arr_47 [i_0] = max((((/* implicit */unsigned long long int) (unsigned char)0)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) * (min((((/* implicit */unsigned long long int) arr_3 [i_13])), (arr_26 [i_13]))))));
            arr_48 [i_13] [(_Bool)1] [i_0] = min((-2147483638), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) arr_1 [i_0])) - (6789)))))) ? (((/* implicit */int) var_9)) : (((var_8) | (-231280267))))));
            var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-(arr_13 [i_0] [i_13] [i_13] [i_0] [i_0]))), (((/* implicit */unsigned int) ((_Bool) var_0))))))));
        }
    }
}
