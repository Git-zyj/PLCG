/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73741
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) arr_8 [i_2 + 2] [i_1 - 1] [(signed char)3]);
                        arr_13 [(unsigned char)9] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_7 [i_1 - 2] [i_2 + 2] [i_0])) & (((/* implicit */int) (unsigned short)26302))))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        var_17 += ((/* implicit */unsigned short) arr_10 [(unsigned short)0]);
                        arr_17 [i_2] [12ULL] [i_2] [(unsigned char)8] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_16 [i_0] [i_1 + 1] [i_1 - 1] [i_2 + 2])) != (min((((/* implicit */unsigned int) (unsigned short)30616)), (4294967275U))))))) % (var_1)));
                        arr_18 [i_0] [i_1 - 1] [i_1 - 1] [(signed char)8] |= ((/* implicit */unsigned char) ((unsigned long long int) var_9));
                        var_18 = ((/* implicit */long long int) max((((/* implicit */int) (((!(((/* implicit */_Bool) 10666611747557681225ULL)))) && (((/* implicit */_Bool) (unsigned short)4095))))), (min((((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (unsigned short)30612)) : (((/* implicit */int) (unsigned char)172)))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_8 [i_0] [i_1 + 2] [i_4])) : (((/* implicit */int) (unsigned short)30230))))))));
                        var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (((15058267347427272130ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)155)))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                    {
                        var_20 *= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_5 [2] [i_1 - 3]))), (((/* implicit */unsigned int) var_2))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 1; i_6 < 10; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_10 [i_2]) & ((-9223372036854775807LL - 1LL)))) / (arr_6 [i_0] [i_2] [i_5] [i_6 + 3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [(unsigned char)8] [i_6 - 1] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1 + 1] [7U] [i_6 + 3] [i_2 - 1]))) : (var_9))))));
                            arr_25 [i_0] [i_1 - 1] [i_2] [i_2] [5U] [i_6 - 1] = arr_19 [i_0] [i_0];
                            var_22 -= ((/* implicit */long long int) arr_11 [i_1 - 2] [i_2 + 2] [(unsigned short)6] [i_6 + 3] [i_6 - 1] [i_6 + 1]);
                        }
                        var_23 ^= ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [(unsigned short)9] [9U])) && (((/* implicit */_Bool) (unsigned char)209)))))) <= (((var_1) * (var_15))))) && (((((/* implicit */int) var_0)) >= ((+(((/* implicit */int) (unsigned short)30596))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) 10681041055880219768ULL);
                            arr_30 [i_0] [i_1] [i_2 - 1] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (min((((/* implicit */long long int) arr_8 [i_0] [i_2] [i_2 + 2])), (var_4))) : (((/* implicit */long long int) ((max((arr_21 [i_7] [i_7] [(unsigned char)10] [i_2 + 2] [i_2] [i_1] [i_0]), (((/* implicit */unsigned int) var_7)))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) << (((arr_14 [i_0] [i_1] [i_2] [i_0] [i_7]) - (1584160256)))))))))));
                        }
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            arr_35 [i_2] [3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (signed char)-121)) ? (6U) : (4294967279U))))) ? (2238980024U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [2U] [i_0] [i_1] [(unsigned char)5] [i_2] [0] [i_8])) || (((/* implicit */_Bool) (~(1U))))))))));
                            var_25 = ((/* implicit */unsigned char) 1737878534657167293ULL);
                            arr_36 [i_2] [i_2] [i_2] [i_2] [(signed char)8] [i_5] [i_8] = ((/* implicit */signed char) ((unsigned long long int) ((var_3) >> ((((~(var_11))) + (2221428652373699234LL))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 12; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-111))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)174)) << (((((unsigned long long int) var_14)) - (203ULL)))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        var_28 = (+(((((/* implicit */int) var_7)) / (((/* implicit */int) (signed char)34)))));
                        var_29 += ((/* implicit */unsigned long long int) (-(arr_34 [i_0] [i_1 - 2] [0] [(unsigned char)4] [i_2])));
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2 + 2] [i_2] [(signed char)8] [i_10]))) / (var_9)));
                            var_31 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_34 [1] [i_1] [i_2] [i_10] [(signed char)0])) ? (var_11) : (var_9)))));
                            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_14)))))));
                        }
                        for (unsigned short i_12 = 1; i_12 < 11; i_12 += 4) 
                        {
                            var_33 += ((((/* implicit */int) arr_22 [9LL] [i_1 - 2] [i_2] [i_10] [(unsigned short)10])) >> (((((/* implicit */int) ((unsigned short) var_2))) - (55270))));
                            arr_48 [i_2] [i_1 + 2] [i_1] [i_1 - 2] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_27 [i_0] [i_1 + 1] [(unsigned char)12] [6ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_34 [i_0] [i_0] [i_2] [5] [4])))));
                            arr_49 [i_0] [i_1] [i_2] [i_2] [i_12 + 2] = ((/* implicit */unsigned short) (+(((arr_5 [i_0] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_0] [(unsigned short)7] [i_2] [i_10] [(unsigned char)3])))))));
                            var_34 |= ((/* implicit */signed char) (-(arr_47 [4] [i_1 - 1] [(signed char)6] [i_10] [i_10] [4] [i_12])));
                        }
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 12; i_13 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned int) (-((-(var_11)))));
                        arr_53 [i_2] [i_2 + 2] [i_1] [i_2] = ((/* implicit */long long int) (unsigned char)255);
                    }
                }
            } 
        } 
    } 
    var_36 *= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65535))));
    var_37 = ((((/* implicit */_Bool) ((long long int) var_8))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(var_10))), (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (unsigned char)137)))))))) && (((/* implicit */_Bool) var_12))));
    var_39 = var_13;
}
