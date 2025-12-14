/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67305
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
    var_19 = max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (0LL) : (((/* implicit */long long int) var_16))))) : (((((/* implicit */_Bool) (unsigned short)32421)) ? (((/* implicit */unsigned long long int) var_10)) : (var_14))))), (((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) max((8539856188502601557LL), (((/* implicit */long long int) (short)-25812))))) : (var_9))));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) var_3))))), ((-(172327741185992019LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (min((1946734141U), (((/* implicit */unsigned int) var_16))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0 - 1] [i_0 - 1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)160)) / (((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) (unsigned char)201)))) : (((/* implicit */int) arr_15 [i_2] [i_0] [i_2] [i_0]))))));
                                var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)96)), (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_3] [i_0]))) : (((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) var_13)))) >> (((((/* implicit */int) (unsigned char)232)) - (228))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */int) var_18);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_23 ^= ((/* implicit */unsigned long long int) var_12);
                        var_24 *= ((/* implicit */short) (unsigned char)86);
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 3; i_6 < 12; i_6 += 1) 
                        {
                            arr_21 [10LL] [11ULL] [i_0] [i_0] [i_6] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) (signed char)1)) >= (((/* implicit */int) (_Bool)1))))), ((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)145)) >= (((/* implicit */int) (unsigned char)96)))))))));
                            arr_22 [i_0 - 1] [i_1] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_20 [i_0 - 1])) + (2147483647))) << (((arr_10 [i_6 + 1] [i_2 - 1] [(unsigned short)3] [i_1 - 4] [i_1 - 4] [i_0 + 1]) - (11194631320741843576ULL))))) & (((/* implicit */int) min(((unsigned char)160), (((/* implicit */unsigned char) (signed char)127)))))));
                            var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-17084))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_18 [2U] [6LL] [i_6] [i_6]))))), (((var_8) << (((((/* implicit */int) arr_12 [4] [i_1 - 4] [2ULL] [2ULL] [2ULL] [2ULL])) - (867)))))))));
                        }
                        arr_23 [i_0] [i_1 - 2] [i_2 + 1] [i_5] = ((/* implicit */unsigned int) arr_19 [i_0] [i_1] [i_2 + 2] [i_5]);
                    }
                    for (unsigned char i_7 = 2; i_7 < 12; i_7 += 4) 
                    {
                        arr_27 [i_0] [i_2 + 1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0 + 1]))) % (arr_3 [i_0] [i_0]))) - (11340U)))));
                        var_26 = ((/* implicit */int) arr_24 [i_7] [6LL] [6LL] [6LL] [i_1 + 1]);
                        var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((arr_8 [i_7] [i_2 + 1]) ^ (((/* implicit */unsigned long long int) 4618574145311188955LL))))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((((((/* implicit */_Bool) (short)-17108)) ? (-741892099) : (((/* implicit */int) (short)(-32767 - 1))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                    }
                    var_28 ^= ((/* implicit */unsigned short) (((+((-(var_12))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned char)8] [i_1])))));
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */int) (short)-17092)) >= ((-(((/* implicit */int) var_4)))))))));
                }
            } 
        } 
        arr_28 [i_0] = ((/* implicit */long long int) var_1);
        arr_29 [12U] [i_0] &= ((/* implicit */_Bool) arr_13 [4U] [i_0 + 1]);
        arr_30 [(short)12] [(short)12] |= ((/* implicit */long long int) arr_1 [i_0]);
    }
    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                var_30 = ((/* implicit */short) arr_35 [i_8] [i_9] [i_8]);
                arr_39 [i_8] [i_10] [i_8] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_37 [i_8] [i_8] [i_9] [i_10]))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 3; i_11 < 22; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        {
                            arr_45 [i_10] [i_10] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_44 [i_11 - 1] [i_11 + 1])) ^ (var_6)));
                            var_31 += ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_37 [i_9] [i_11 + 2] [i_12] [i_12])) : (((/* implicit */int) arr_37 [2] [i_11 + 1] [(signed char)13] [3ULL]))));
                            var_32 += ((/* implicit */unsigned short) (-(arr_42 [i_10] [i_10] [i_11 + 1] [i_12])));
                        }
                    } 
                } 
            }
            arr_46 [i_9] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 6008614888261008331ULL)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
            arr_47 [i_9] = ((/* implicit */unsigned int) ((((arr_32 [i_9]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [(unsigned char)21] [i_9] [(unsigned char)21] [i_8]))))) >= (var_9)));
        }
        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) max((((((/* implicit */int) (unsigned char)170)) == ((-2147483647 - 1)))), (((arr_32 [i_8]) < ((+(12438129185448543285ULL))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 1) 
    {
        var_34 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_42 [i_13] [i_13] [i_13] [i_13])))) ? (((/* implicit */int) ((((/* implicit */_Bool) -3973028899543449107LL)) || (((/* implicit */_Bool) arr_40 [i_13] [i_13]))))) : (((/* implicit */int) arr_38 [i_13] [i_13]))));
        var_35 = ((/* implicit */int) ((var_14) == (arr_48 [i_13] [i_13])));
    }
    for (unsigned int i_14 = 1; i_14 < 11; i_14 += 2) 
    {
        var_36 += ((/* implicit */signed char) ((((arr_50 [i_14] [i_14 + 3]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 6008614888261008310ULL)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (short)-17084))))), (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_37 [i_14 + 3] [i_14 + 2] [i_14 + 1] [(signed char)16]), (((/* implicit */unsigned char) var_13))))))));
        arr_53 [i_14] = arr_40 [i_14] [(signed char)10];
    }
}
