/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74069
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_10))))));
        arr_3 [(signed char)4] [i_0] = var_0;
        var_17 *= ((/* implicit */int) arr_1 [i_0] [i_0]);
        arr_4 [9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)6876)) || (((/* implicit */_Bool) (signed char)127))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_5 [(_Bool)1]);
                    arr_11 [i_0] [(short)3] [i_1] [i_2] = ((/* implicit */signed char) arr_5 [i_0]);
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
    {
        arr_15 [13LL] = max((((arr_5 [i_3]) & (((/* implicit */unsigned long long int) ((((arr_8 [i_3] [i_3] [i_3]) + (2147483647))) << (((((var_3) + (7496250319424052272LL))) - (23LL)))))))), (((unsigned long long int) arr_8 [i_3] [i_3] [i_3])));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                arr_21 [i_3] [i_5] [i_5] [(signed char)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) <= (((/* implicit */long long int) ((/* implicit */int) min((var_8), ((_Bool)0))))))))) : (((min((((/* implicit */unsigned long long int) (unsigned char)252)), (16299764922226523409ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3104346218U)) ? (var_3) : (8709742891479709778LL))))))));
                arr_22 [i_3] |= ((/* implicit */signed char) arr_7 [i_3] [i_3] [2]);
            }
            /* LoopNest 2 */
            for (unsigned char i_6 = 1; i_6 < 11; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_29 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) (~(max((((((/* implicit */int) (unsigned short)11576)) << (((((/* implicit */int) (signed char)-37)) + (44))))), (((/* implicit */int) (signed char)-127))))));
                        arr_30 [i_3] [i_3] &= ((/* implicit */long long int) var_12);
                        var_18 = var_11;
                    }
                } 
            } 
        }
        var_19 *= (-(max((1793405277U), (((/* implicit */unsigned int) arr_2 [i_3])))));
    }
    for (int i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        var_20 += ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_32 [i_8])) ? (arr_31 [i_8]) : (((/* implicit */unsigned long long int) arr_32 [i_8])))) << (((arr_32 [i_8]) - (2544033517U))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) (unsigned short)61909))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                for (int i_11 = 4; i_11 < 19; i_11 += 3) 
                {
                    {
                        arr_43 [i_8] [i_9] [i_9] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_40 [i_11 - 4] [i_11 - 1] [i_11 - 1] [i_11 - 4]))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)29336)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_13))));
                        arr_44 [i_11] [(unsigned char)12] [7ULL] [(_Bool)1] [i_8] [i_8] = var_9;
                        /* LoopSeq 3 */
                        for (int i_12 = 2; i_12 < 18; i_12 += 2) 
                        {
                            arr_47 [i_8] [i_9] [(unsigned char)9] [i_11 - 2] [i_11] = ((/* implicit */unsigned int) var_9);
                            arr_48 [i_8] [i_9] [i_8] [i_11] [i_11 - 4] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
                        }
                        for (unsigned int i_13 = 1; i_13 < 18; i_13 += 2) /* same iter space */
                        {
                            var_21 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) (short)-31596)) / (((/* implicit */int) (unsigned short)3626)))) * (((/* implicit */int) ((signed char) (unsigned char)7))))))));
                            arr_51 [i_11] = ((/* implicit */signed char) var_6);
                            arr_52 [i_8] [i_8] [2U] [(short)11] [i_11] = ((/* implicit */long long int) 565385666U);
                            arr_53 [16U] [16U] [(unsigned char)13] [i_11] = ((/* implicit */unsigned long long int) var_15);
                        }
                        for (unsigned int i_14 = 1; i_14 < 18; i_14 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) arr_45 [i_8] [i_9] [8ULL] [i_8] [i_8]))));
                            var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((var_11) << (((((/* implicit */int) arr_35 [i_9] [11])) + (16052))))), (((/* implicit */unsigned int) var_6))))) ? (((((((/* implicit */int) arr_38 [i_9] [i_11] [10ULL])) >= (((/* implicit */int) (unsigned short)15833)))) ? (((/* implicit */int) arr_34 [i_11 - 2])) : (((/* implicit */int) ((((/* implicit */long long int) var_0)) >= (arr_40 [i_8] [i_8] [12U] [i_8])))))) : (((((((/* implicit */int) ((short) 8894877122997293510LL))) + (2147483647))) << (((((var_15) + (37317382))) - (28)))))));
                            var_24 = (i_11 % 2 == zero) ? (((/* implicit */short) ((((((((/* implicit */long long int) var_11)) | (((arr_42 [i_11] [i_11]) ? (var_3) : (((/* implicit */long long int) 3144331006U)))))) + (9223372036854775807LL))) << (min((((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_14))), (((/* implicit */unsigned long long int) var_2))))))) : (((/* implicit */short) ((((((((((/* implicit */long long int) var_11)) | (((arr_42 [i_11] [i_11]) ? (var_3) : (((/* implicit */long long int) 3144331006U)))))) - (9223372036854775807LL))) + (9223372036854775807LL))) << (min((((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_14))), (((/* implicit */unsigned long long int) var_2)))))));
                        }
                        var_25 -= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_54 [i_11 - 3] [i_9] [i_9] [i_11] [i_9] [i_10])), (arr_50 [i_11 - 3] [18ULL] [i_8] [i_11] [i_10] [i_9]))))) : ((-(arr_40 [i_9] [i_9] [i_9] [i_9])))));
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */long long int) ((var_9) * (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-7381994038985153136LL))))));
}
