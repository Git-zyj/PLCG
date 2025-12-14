/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68627
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
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 23; i_3 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [(signed char)14] [i_0]))) | (((arr_4 [i_2 + 2] [i_1] [i_1 - 2]) ? (max((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_1])), (2721329476U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                        arr_9 [i_0] [i_1] [i_3] [i_2] [i_3 + 1] = ((/* implicit */_Bool) (unsigned short)32100);
                        arr_10 [i_1 - 4] [i_1 + 3] [(_Bool)1] [i_3] = ((/* implicit */signed char) arr_4 [i_0] [i_2] [i_3]);
                    }
                    for (int i_4 = 1; i_4 < 23; i_4 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1])))))) == (((/* implicit */int) min((arr_2 [i_0 - 1]), (arr_3 [i_4 - 1]))))));
                        var_18 = ((/* implicit */unsigned char) (+(((unsigned long long int) max((var_5), (arr_8 [i_0 - 2]))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 4; i_5 < 23; i_5 += 4) 
                        {
                            arr_15 [i_0 + 2] [i_4] [i_0 + 2] [i_4] [i_5] [i_2 + 2] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_0 [i_5])))) ? (((((/* implicit */_Bool) arr_12 [(short)7] [i_1] [i_1] [i_1])) ? (arr_12 [i_0 - 1] [0LL] [2ULL] [i_0 + 2]) : (var_11))) : (((/* implicit */int) var_10))));
                            var_19 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)12288)) : (((/* implicit */int) (unsigned short)33436))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 1; i_6 < 23; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_6 - 1] [i_4])) != (((/* implicit */int) arr_13 [i_6 - 1] [i_6] [i_6] [i_6 + 1] [i_4]))));
                            arr_18 [(signed char)10] [(unsigned short)20] [i_2] [i_4] [i_2] [i_6 - 1] [i_2] = ((/* implicit */_Bool) ((arr_11 [i_0 + 1] [i_1 - 3] [i_0 + 1] [i_1 - 3]) ? (((/* implicit */int) arr_7 [i_1 - 3] [i_6 + 1] [i_6 - 1])) : (((/* implicit */int) (signed char)27))));
                            var_21 *= ((/* implicit */short) ((long long int) arr_3 [i_2 + 2]));
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 2) /* same iter space */
                        {
                            var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)32094)) ? (min((((((/* implicit */_Bool) (short)-7626)) ? (var_11) : (((/* implicit */int) (_Bool)1)))), (959348425))) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_2 - 1] [i_4] [i_7]))));
                            arr_23 [i_0 + 2] [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53744)) ? (-537917648313995251LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53252)))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_2 + 1] [i_7 - 2])) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_2 + 2] [i_7 - 1])) : (((/* implicit */int) var_12)))))))));
                            arr_24 [i_4] = ((/* implicit */long long int) (signed char)7);
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)53247))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10980)) ? (10179285283285684453ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) (unsigned char)21)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_17 [i_0])))) ? (((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_6 [i_0] [21LL] [i_1])))) : ((+(((/* implicit */int) (unsigned short)54381)))))))))));
                            var_26 -= ((((/* implicit */_Bool) ((unsigned char) arr_19 [i_1 + 1] [i_1 + 1]))) ? (((unsigned long long int) ((((/* implicit */_Bool) -1227942368)) ? (var_3) : (((/* implicit */unsigned long long int) 4272476766U))))) : (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [20LL] [i_1 + 3]))) : (arr_17 [(signed char)3]))), (((/* implicit */unsigned long long int) arr_5 [i_0 - 1])))));
                        }
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) min((min((((((/* implicit */_Bool) (unsigned short)53254)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)252)))), (var_11))), (((/* implicit */int) arr_25 [i_0] [(unsigned short)18] [i_1] [i_2 + 1] [(unsigned short)2])))))));
                        arr_29 [(signed char)22] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_5 [i_0 - 2]), (arr_5 [i_0 - 2])))) >> (((((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (((/* implicit */int) arr_5 [i_0 - 2])) : (((/* implicit */int) arr_5 [i_0 - 2])))) - (136)))));
                    }
                    arr_30 [i_0] [(signed char)3] [i_2] [i_1] = ((/* implicit */unsigned short) ((long long int) (short)-3661));
                    var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) (unsigned short)41285)))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) * ((-(((/* implicit */int) (signed char)90))))))) : (max((((/* implicit */long long int) -1211575054)), (9223372036854775807LL)))));
    var_30 &= ((/* implicit */unsigned short) var_5);
    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_9))))) & (min((var_3), (((/* implicit */unsigned long long int) (unsigned char)156))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-45))) : (var_1))))) : (((/* implicit */int) var_9))));
    var_32 = ((/* implicit */long long int) 18446744073709551615ULL);
}
