/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60718
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
    var_16 = ((/* implicit */unsigned long long int) min(((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_4))))), (((/* implicit */long long int) var_7))));
    var_17 = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) var_7))) / (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)(-32767 - 1))))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))) : (max((7846250312430355453LL), (((/* implicit */long long int) (signed char)-16))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [12LL] [i_0] = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */unsigned short) (short)(-32767 - 1)))))), (max((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0])))))), (((/* implicit */long long int) arr_1 [i_0]))));
        var_18 ^= ((/* implicit */int) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9))) + (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) % (((long long int) var_10))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_19 = ((/* implicit */short) (((~(((/* implicit */int) var_7)))) << ((((+(var_13))) - (2609939341U)))));
        var_20 = ((/* implicit */short) (unsigned short)2048);
        var_21 = ((/* implicit */unsigned int) ((((unsigned long long int) arr_5 [i_1])) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))));
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
            {
                var_22 -= ((/* implicit */unsigned long long int) arr_9 [i_1]);
                arr_12 [i_1] [i_2] [17] [11U] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)63487)) ? (arr_10 [i_1] [i_2] [i_3] [i_3]) : (((/* implicit */int) (unsigned short)63487)))));
                var_23 = ((((/* implicit */long long int) (-(((/* implicit */int) (short)16383))))) / (((((/* implicit */_Bool) (unsigned short)63487)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2048))) : (var_9))));
                arr_13 [i_1] = ((/* implicit */short) arr_2 [i_1] [i_1]);
                var_24 ^= ((/* implicit */short) ((arr_10 [i_1] [i_2] [i_2] [i_2 - 2]) <= (var_11)));
            }
            for (short i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1207282256312292346LL)) ? (((/* implicit */unsigned long long int) arr_2 [i_2 + 1] [i_2 - 2])) : (arr_17 [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2 - 1])));
                    /* LoopSeq 3 */
                    for (short i_6 = 1; i_6 < 17; i_6 += 1) 
                    {
                        var_26 -= ((/* implicit */unsigned short) ((short) arr_20 [i_1] [i_1] [i_2] [i_6 + 2] [i_6 - 1]));
                        arr_21 [i_1] [i_2] [i_4] [i_6] &= ((((/* implicit */_Bool) (short)-29480)) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2]))))));
                        arr_22 [i_1] [i_6] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_1]))) : (arr_2 [i_5] [i_1])));
                        var_27 -= ((((/* implicit */_Bool) 0LL)) ? (((-8900230830723998916LL) % (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_3 [i_2 - 2]))))));
                    }
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        arr_25 [i_7] [i_2] [i_7] [i_7] [i_7] [i_2] = ((short) (-(var_11)));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2 + 1] [i_2] [2ULL])) ? (((/* implicit */int) arr_16 [4LL] [i_2 - 2] [i_2] [i_2])) : (((/* implicit */int) arr_16 [i_2] [i_2 - 1] [i_2] [i_2]))));
                        var_29 = ((/* implicit */int) arr_24 [i_1] [i_7] [i_4] [i_5] [i_7]);
                        arr_26 [i_7] [i_2] [i_4] [i_4] [i_5] [i_7] = ((/* implicit */signed char) (short)32767);
                    }
                    for (short i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        arr_30 [i_1] [i_2 - 2] [(signed char)11] [i_5] [i_8] = ((/* implicit */unsigned int) var_0);
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) : (33554431LL)))))));
                    }
                }
                for (long long int i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    arr_34 [i_1] [i_2] [i_9] [12LL] = arr_9 [i_9];
                    var_31 = ((/* implicit */short) (-(((/* implicit */int) arr_19 [i_1] [i_2]))));
                }
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) var_8)) + (20518))))) >= (((/* implicit */int) arr_32 [i_1] [i_2 - 2] [i_10]))));
                            arr_43 [i_1] [i_10] [0U] [i_10] [0U] = ((/* implicit */short) (((+(((/* implicit */int) (_Bool)0)))) << (((((/* implicit */int) (unsigned short)2048)) - (2037)))));
                            var_33 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_7 [i_2 - 2])) ? (-1845618512309509634LL) : (((/* implicit */long long int) arr_10 [i_1] [i_2 - 1] [i_10] [i_4])))));
                            arr_44 [i_11] [i_10] [i_10] [i_4] [i_10] [i_2] [i_1] = (i_10 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) << ((((-(arr_39 [i_1] [i_10]))) - (6830655721957115085LL)))))) : (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) << ((((((-(arr_39 [i_1] [i_10]))) - (6830655721957115085LL))) + (3103360343869010479LL))))));
                        }
                    } 
                } 
            }
            arr_45 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_2]))) / ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_2 - 2] [(unsigned short)6] [i_1] [i_2 - 2] [i_2 + 1] [i_1] [i_2 + 1]))) : (((((/* implicit */_Bool) (signed char)31)) ? (arr_39 [i_1] [i_2]) : (arr_20 [(short)7] [2LL] [i_2] [i_2] [i_2]))));
        }
    }
    var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) var_14)) : (max((((/* implicit */unsigned int) (short)32767)), (var_13)))))) ? (-4839116306797966091LL) : (((/* implicit */long long int) min((((((/* implicit */int) (short)-20267)) | (var_11))), ((~(((/* implicit */int) var_7))))))));
    var_35 = ((/* implicit */short) min((var_35), (var_8)));
}
