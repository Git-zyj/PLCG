/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98917
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
    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_12)))) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_18 *= ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) arr_3 [i_2] [i_2])))) ? (((/* implicit */int) (unsigned short)63932)) : (var_9))), (-309544921)));
                        var_19 = ((/* implicit */short) ((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)26936)))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_10 [i_1] [i_0] = ((/* implicit */short) (((+(var_7))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((-2147483624) != (1338028096)))))));
                        arr_11 [i_0] [i_0] [(short)13] [(unsigned short)8] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1])) != (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1]))))) >= (((/* implicit */int) arr_3 [i_0] [11U]))));
                        var_20 = ((/* implicit */unsigned int) var_5);
                    }
                    var_21 = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (12626188164540799670ULL)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_5] [i_2] [i_1] [i_0])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_1 [11U]))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (unsigned short)65317))) | (((/* implicit */int) (short)-13808))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_0] [6U] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_1 [i_5]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                        var_25 = arr_0 [i_1] [i_5 - 1];
                    }
                    for (short i_6 = 2; i_6 < 14; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_6] [(unsigned char)3])) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)21730))))))))));
                        arr_17 [i_0] [i_1] [i_0] [i_2] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) (+(2147483624)))) ? (((/* implicit */int) ((unsigned short) arr_7 [i_0] [9U] [i_2]))) : (((/* implicit */int) ((short) var_2))))) == (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [(unsigned short)8])) >= (min((var_5), (((/* implicit */int) var_8)))))))));
                        var_27 = ((/* implicit */int) min((var_27), (((((/* implicit */_Bool) ((unsigned short) arr_12 [i_0] [i_0 + 2] [i_6 - 2] [(short)14] [i_6] [i_6 - 1]))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0 + 2] [i_6 + 1] [i_6] [i_6] [i_6 - 1])) ? (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_6 + 1] [2] [(unsigned short)12] [i_6 + 1])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-26922)), (arr_12 [i_0 - 2] [i_0 + 1] [i_6 - 1] [i_0 - 2] [i_6] [i_6 - 1]))))))));
                    }
                    var_28 = ((/* implicit */unsigned char) max((1229874279U), (((/* implicit */unsigned int) arr_1 [i_1]))));
                    var_29 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (max((((/* implicit */unsigned int) arr_8 [i_1] [i_2])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2178681772U))))) : (((/* implicit */unsigned int) max((var_9), (((/* implicit */int) var_8)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) != (4294967295U))))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            var_31 = ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_7] [i_8]), (arr_0 [i_7] [i_8]))))) ^ (((((/* implicit */_Bool) arr_0 [i_7] [i_8])) ? (((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2700))) : (arr_16 [i_7] [i_7] [i_7] [i_8]))) : (arr_18 [i_7] [i_8]))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                arr_26 [i_7] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((113987155U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-10040)))));
                var_32 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7] [(short)0] [i_8] [i_9])) ? (((/* implicit */int) arr_1 [i_7])) : (((/* implicit */int) arr_0 [i_7] [i_7])))))))) + (((/* implicit */int) ((short) arr_16 [i_7] [i_7] [i_7] [i_7])))));
                arr_27 [i_7] [i_8] [i_7] [i_9] = arr_21 [(short)12] [i_7] [i_9];
                arr_28 [i_7] [(_Bool)1] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max((max((1953239995U), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) ((int) arr_2 [i_7] [i_8] [i_7])))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((arr_16 [i_7] [i_8] [i_7] [i_9]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_9] [i_8] [(unsigned char)4]))))) : (((((/* implicit */_Bool) arr_18 [i_7] [(short)12])) ? (arr_21 [i_8] [i_7] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_7] [i_8])) && (((/* implicit */_Bool) arr_16 [i_7] [i_8] [i_7] [i_9]))))))));
            }
            var_33 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((((/* implicit */int) (short)4347)) >> (((((/* implicit */int) var_0)) - (51))))))))) & (((4294967293U) & (((/* implicit */unsigned int) 1338028086)))));
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_16 [i_7] [i_8] [i_8] [i_8])) : (var_12))))) * (((/* implicit */int) (((~(((/* implicit */int) arr_5 [i_8])))) < (((/* implicit */int) arr_0 [(_Bool)0] [i_8]))))))))));
        }
        var_35 = ((/* implicit */unsigned char) var_6);
        var_36 = ((/* implicit */short) ((unsigned int) (short)-30886));
    }
    var_37 = ((/* implicit */short) min((-1338028097), (((/* implicit */int) (short)-30886))));
    var_38 = ((/* implicit */int) var_2);
}
