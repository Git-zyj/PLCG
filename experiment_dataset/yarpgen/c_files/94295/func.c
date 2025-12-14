/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94295
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
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (unsigned short)55911))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0] [i_0]))))) : (arr_3 [i_1 + 3] [i_1 + 3])));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_8 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [(unsigned short)6] [i_0] [i_0 + 1]))));
                    arr_9 [i_0] [i_1] [i_0] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1]))) : (9223372036854775807LL))))));
                }
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    arr_13 [i_0] [i_0 - 1] [i_0] [i_0 - 2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) 18446744073709551615ULL)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (arr_12 [i_3] [i_1] [(unsigned char)1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 - 2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55911))) : (9223372036854775807LL)))) : (((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (16ULL) : (18446744073709551615ULL)))))));
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_3]);
                    arr_15 [i_0] [i_1] [i_0 + 2] [i_0] = ((/* implicit */unsigned int) (-((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8064)))))) : (1ULL)))));
                    /* LoopSeq 3 */
                    for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        arr_18 [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) (unsigned short)65535)))))) && (((/* implicit */_Bool) (unsigned short)65535))));
                        arr_19 [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) 1ULL)))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            arr_22 [i_0] [i_4] [i_4] [(unsigned char)12] [i_5] [i_5] = ((/* implicit */signed char) (unsigned char)0);
                            arr_23 [i_0] [i_4] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8388607LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)246))));
                            arr_24 [i_1 + 1] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_4])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_5 [i_0] [i_3] [i_3]))))), (max((((/* implicit */long long int) arr_21 [i_0 - 2] [i_1] [i_3] [i_4] [i_5])), (var_3))))))));
                            arr_25 [i_0] [21U] [i_3] [i_4] = ((/* implicit */unsigned short) (!((_Bool)1)));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 1; i_6 < 23; i_6 += 4) 
                        {
                            arr_30 [i_0] [(_Bool)1] [i_1] [i_3] [i_3] [(unsigned char)14] [i_6] = ((/* implicit */int) (unsigned short)127);
                            arr_31 [i_0] [i_1] [i_0] [i_6] [i_6] [i_1] = ((_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_17) : (((/* implicit */int) var_11))));
                            arr_32 [i_4] = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                        }
                        arr_33 [i_0 + 1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) min(((unsigned char)89), (((/* implicit */unsigned char) (_Bool)1))));
                        arr_34 [i_0 + 1] [i_0 + 1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_3] [i_4])))) ? ((+(arr_17 [i_0] [i_0]))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((unsigned long long int) var_16)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0)))))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            arr_41 [i_8] [i_1 + 3] [i_1] [i_1] [(unsigned char)10] [i_1 + 3] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 21U)))) ? (((/* implicit */int) (_Bool)0)) : ((-(((/* implicit */int) (signed char)-12))))));
                            arr_42 [i_0] [(unsigned char)21] [i_3] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 4294967290U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 4294967295U))))), (arr_27 [i_0 + 3] [i_1] [i_0 + 3] [i_7] [i_8] [i_1 - 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned long long int) var_2)) : (var_4)))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 2])))))));
                        }
                        arr_43 [i_7] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1 + 3] [(unsigned short)12]);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        arr_47 [i_0] [i_1] [i_9] [i_9] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)255)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_0 + 3] [i_1 + 3] [i_0] [i_1 + 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))) : (((((/* implicit */_Bool) (unsigned char)13)) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (15ULL))) : (((/* implicit */unsigned long long int) -1LL))))));
                        arr_48 [i_1 + 3] [i_3] [i_9] = ((/* implicit */unsigned int) (unsigned char)230);
                        arr_49 [i_0] [i_1 + 1] [i_0] [i_9] = ((/* implicit */long long int) (!((_Bool)0)));
                        arr_50 [i_0] [i_1] [i_3] [i_9] = ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_2)) : (2269814212194729984ULL))), (((/* implicit */unsigned long long int) (-(var_17))))))));
                    }
                }
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_11);
    var_20 = ((/* implicit */unsigned char) var_1);
}
