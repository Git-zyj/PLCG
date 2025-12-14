/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79445
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) ((short) ((int) 949224303U)));
                            var_16 = ((/* implicit */short) ((max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (var_7)))), (((((/* implicit */_Bool) (unsigned short)65532)) ? (9223372036854775799LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32756))))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_8 [(short)15] [i_1] [i_0]), (((/* implicit */long long int) var_11))))) ? (((/* implicit */int) (unsigned short)42879)) : (((/* implicit */int) var_14)))))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 2; i_4 < 14; i_4 += 3) 
                            {
                                arr_16 [i_1] [i_0] = ((/* implicit */long long int) arr_11 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 - 2] [i_4 - 1]);
                                arr_17 [i_0] [i_0] [i_2] [(unsigned short)12] [i_0] [1] [i_3] = ((/* implicit */long long int) var_10);
                                arr_18 [i_0] [i_0] [i_0] [i_3] [i_3] [(unsigned short)11] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) -9223372036854775798LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 - 1] [i_0] [i_1 - 1] [i_0]))) : (arr_5 [i_0] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (short)-32764))) ? (((/* implicit */int) ((signed char) (-2147483647 - 1)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-1)))))))));
                                arr_19 [i_0] [i_3] [i_3] [i_3] [(signed char)14] |= ((/* implicit */long long int) ((max((-7293002734302714343LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned short)65535))))))) != (((/* implicit */long long int) ((((/* implicit */unsigned int) ((int) 2441288996U))) | (((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1085))) : (var_12))))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
                            {
                                var_17 *= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((signed char) 1824571533U))) ? (-7293002734302714343LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))));
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_10 [i_0 + 1] [i_0 + 1] [i_1 + 2] [i_0 + 1] [i_1 + 2] [i_0 + 1]))));
                            }
                            arr_23 [i_0] [i_0] [(signed char)2] [(signed char)0] = ((((/* implicit */long long int) ((/* implicit */int) (signed char)12))) / (((((/* implicit */_Bool) arr_6 [i_0 + 1] [10ULL] [i_2 + 1] [i_3])) ? (-5847457092003118238LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_2] [i_2]))))));
                            /* LoopSeq 2 */
                            for (signed char i_6 = 3; i_6 < 15; i_6 += 3) 
                            {
                                var_19 = ((/* implicit */unsigned short) ((((((arr_0 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1253))))) * (((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_0] [i_6]) / (var_8)))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)(-127 - 1)), (var_2)))))));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) ((short) 321953962)))) != (((/* implicit */int) (signed char)12)))))));
                                var_21 = ((((/* implicit */_Bool) (unsigned short)64282)) ? (((/* implicit */long long int) ((var_13) - (var_12)))) : (((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (-9223372036854775799LL))));
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (signed char)-113)) < (((/* implicit */int) (signed char)12)))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-5)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0])))))), (18446744073709551611ULL))))));
                                arr_27 [i_0] [i_0] [i_0] [12U] [12U] [12U] [i_0] = ((signed char) ((((long long int) (unsigned short)1)) > (((long long int) 1471289399U))));
                            }
                            for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
                            {
                                arr_30 [i_0] [i_0] [i_0] [i_0] = 16705999078914658577ULL;
                                arr_31 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [11ULL] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_10)))))))) << (((((((/* implicit */_Bool) (signed char)42)) ? (arr_11 [i_1 + 3] [i_1 + 3] [i_1 + 1] [i_1 - 2] [i_1 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 3]))))) - (2252534341U)))));
                            }
                        }
                    } 
                } 
                arr_32 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */int) (signed char)-26)) - (((/* implicit */int) (signed char)47)))), ((+(((/* implicit */int) var_11))))));
                /* LoopSeq 2 */
                for (signed char i_8 = 1; i_8 < 15; i_8 += 2) 
                {
                    var_22 = ((/* implicit */int) arr_13 [(short)11] [i_0] [i_0] [i_0 + 1]);
                    var_23 = ((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1471289399U)))) | (arr_33 [i_0] [i_0 - 1] [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_12 [2LL] [i_1])))));
                    arr_36 [i_0] = arr_2 [(short)8];
                }
                /* vectorizable */
                for (signed char i_9 = 2; i_9 < 15; i_9 += 2) 
                {
                    arr_40 [i_0] [i_9] |= ((/* implicit */short) ((((/* implicit */_Bool) -9223372036854775800LL)) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)119)) / (((/* implicit */int) (unsigned short)31549)))))));
                    var_24 = ((/* implicit */long long int) max((var_24), (((((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [8ULL] [i_0 + 1] [i_0] [(signed char)12]))) & (arr_9 [i_9] [i_0] [i_0] [i_0 + 1])))));
                }
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) (unsigned short)14);
    var_26 = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)54018)))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))))));
    var_27 = ((/* implicit */unsigned short) -8453613764178829058LL);
}
