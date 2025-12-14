/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74370
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        var_17 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
    }
    var_18 = ((/* implicit */short) var_14);
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            for (int i_3 = 4; i_3 < 13; i_3 += 1) 
            {
                {
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_5 [i_1] [i_1]);
                    /* LoopSeq 4 */
                    for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_3 [i_2 + 2])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) -1790523046)) && (((/* implicit */_Bool) (unsigned char)0)))))))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((_Bool) arr_10 [i_1] [i_1] [i_3])))))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_15 [i_3] [i_2 + 1] [i_1])) ^ (max((arr_13 [i_1] [i_2] [i_1] [i_2] [i_4]), (((/* implicit */unsigned long long int) (short)32752))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1738932715))))) : (1738932715)));
                        arr_16 [i_4] [i_2] [i_3] [i_2] [i_4] [i_1] = ((((/* implicit */_Bool) (~(1152921504606584832LL)))) ? ((~(arr_13 [i_3 + 2] [i_2 + 2] [i_1] [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_7 [i_2] [i_1] [i_1]))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_5] = arr_11 [i_1] [i_2] [i_3] [i_1];
                        arr_20 [i_1] [i_2] [i_2] [i_3] [(unsigned char)6] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)32218)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)33318))))))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 3; i_6 < 13; i_6 += 1) 
                        {
                            var_22 |= ((/* implicit */short) ((((((((/* implicit */_Bool) arr_3 [i_1])) ? (-9223372036854775785LL) : (((/* implicit */long long int) arr_18 [i_5] [(short)12] [i_5] [10ULL] [(short)12] [10ULL])))) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_21 [i_2] [(_Bool)1] [i_6])))))) <= (((/* implicit */long long int) var_15))));
                            arr_25 [(signed char)6] [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                            var_23 += ((((((/* implicit */int) (short)32752)) | (((/* implicit */int) (signed char)6)))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_1] [12] [8U] [i_1] [i_6] [i_6 - 1] [i_6]))))));
                            var_24 = ((/* implicit */_Bool) ((arr_5 [i_6] [i_3]) + (((/* implicit */unsigned int) max((((/* implicit */int) max((arr_23 [i_1] [i_1] [(_Bool)1] [i_1] [i_1]), (((/* implicit */unsigned char) arr_8 [i_1]))))), ((~(((/* implicit */int) arr_17 [i_2] [i_3] [i_1] [i_2])))))))));
                            var_25 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43884)) ? (8095181284433534132ULL) : (381354732341360232ULL))))))));
                        }
                        for (unsigned int i_7 = 1; i_7 < 12; i_7 += 2) 
                        {
                            var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15810477064459871022ULL)) ? (4162649864U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (arr_5 [i_2 - 1] [i_7 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [(short)8])) * (((/* implicit */int) var_7)))))))));
                            var_27 ^= ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((((/* implicit */int) arr_28 [10ULL])) - (((/* implicit */int) (unsigned short)46654))))) | (((((/* implicit */_Bool) -9223372036854775784LL)) ? (-9223372036854775785LL) : (((/* implicit */long long int) 1738932715)))))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)33318)) ? (1738932715) : (((/* implicit */int) var_6)))))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            arr_32 [i_3] [i_3] [i_3] [i_5] [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [i_1] [i_1] [8U]))));
                            var_28 = ((/* implicit */unsigned long long int) ((min((var_13), ((+(((/* implicit */int) arr_10 [i_8] [i_5] [i_1])))))) & (((/* implicit */int) arr_30 [i_1] [i_2] [i_3] [i_5] [i_8] [i_5]))));
                        }
                        var_29 = ((/* implicit */int) min((var_29), (min((((((/* implicit */int) (short)14176)) ^ (-1798651600))), (((/* implicit */int) arr_24 [i_1] [12LL] [i_2 + 2] [i_5] [i_3] [i_1] [i_3]))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_35 [i_1] [i_2] [i_1] [i_3] [(short)13] = ((/* implicit */unsigned short) arr_23 [i_3] [i_1] [i_3] [i_3] [(signed char)4]);
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (unsigned short)0))));
                    }
                    for (unsigned char i_10 = 1; i_10 < 12; i_10 += 4) 
                    {
                        arr_38 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned int) (short)-32755));
                        var_31 = ((/* implicit */unsigned short) max(((~(arr_3 [0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) : (2585603259U))))));
                        /* LoopSeq 1 */
                        for (signed char i_11 = 1; i_11 < 14; i_11 += 1) 
                        {
                            arr_41 [i_1] [i_2] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) * (((((/* implicit */int) var_12)) + (((/* implicit */int) (unsigned char)191)))))))));
                            arr_42 [4LL] [i_2] [7LL] [i_1] [i_11 + 1] = ((long long int) (short)-1);
                            arr_43 [i_11 + 1] [i_10 + 1] [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) ((unsigned int) (short)-11601)));
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32749)) ? (((/* implicit */int) arr_10 [i_1] [i_2 + 2] [i_1])) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) 9007199254740991ULL))))))))))));
                            arr_44 [i_1] [i_10 + 3] [6LL] [i_2] [i_1] [i_1] = ((/* implicit */short) ((((arr_5 [i_2 + 2] [i_3 - 4]) != (arr_5 [i_2 + 1] [i_3 - 4]))) ? (arr_5 [i_2 + 1] [i_3 - 2]) : ((+(arr_5 [i_2 + 1] [i_3 - 4])))));
                        }
                    }
                    var_33 += ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33317))) < (((((/* implicit */_Bool) (unsigned char)246)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))))))) ? (((/* implicit */int) var_4)) : ((~(((((/* implicit */int) (signed char)-22)) - (((/* implicit */int) (short)-32755))))))));
                    var_34 *= ((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) -1300329686)))))))));
                    arr_45 [i_1] = ((/* implicit */unsigned long long int) 3884425215876053209LL);
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)12288)), (var_13)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))))))));
}
