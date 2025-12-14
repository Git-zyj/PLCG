/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96995
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
    var_20 = ((/* implicit */long long int) var_1);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (var_14)))));
        var_22 -= ((/* implicit */short) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 15811825418248583370ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */unsigned int) max((arr_6 [i_1] [i_1] [3LL]), (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((arr_5 [i_2]), (((/* implicit */unsigned int) (unsigned char)165)))))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                var_24 = ((/* implicit */unsigned short) var_10);
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned int) min((var_25), (min((((/* implicit */unsigned int) var_13)), (var_2)))));
                        var_26 = ((min((((arr_6 [i_1] [i_2] [i_5]) + (((/* implicit */int) var_3)))), (max((((/* implicit */int) arr_3 [i_3])), (arr_17 [i_1] [i_2] [i_3] [i_4] [i_5]))))) - (((int) (-(arr_9 [i_1])))));
                    }
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) var_2);
                        arr_22 [i_3] [i_2] [i_2] [i_2] [i_3] [i_4] [i_6] = ((/* implicit */short) var_10);
                    }
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                    {
                        var_28 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) | (((/* implicit */int) arr_24 [i_1] [i_3] [i_3] [i_4] [i_4] [i_4])))))));
                        arr_26 [i_3] [i_7] [i_3] [(unsigned short)13] [i_7] = ((/* implicit */unsigned int) var_12);
                        var_29 = ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (((short) (unsigned char)252))))) >= (((/* implicit */int) (_Bool)1))));
                        var_30 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_1] [i_1] [i_3] [i_7])) | (((/* implicit */int) min((((/* implicit */signed char) var_11)), (arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))), (((((/* implicit */_Bool) (unsigned short)65515)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))))));
                    }
                    var_31 = ((/* implicit */short) max((((/* implicit */unsigned short) min((((/* implicit */short) var_12)), ((short)32767)))), ((unsigned short)32704)));
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    var_32 *= ((/* implicit */unsigned short) (((_Bool)1) ? (arr_6 [i_1] [i_3] [i_8]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_1] [i_2])) && (((/* implicit */_Bool) (unsigned char)193)))))));
                    var_33 = ((/* implicit */unsigned char) arr_23 [i_2] [i_3]);
                    var_34 = ((/* implicit */signed char) ((var_17) ? (arr_9 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233)))));
                    arr_29 [i_1] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_1] [i_2] [i_3] [i_8]))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_33 [i_9] [i_3] [i_3] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) var_13);
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        arr_36 [i_1] [i_2] [i_3] [i_3] [i_10] = ((/* implicit */unsigned int) min((max((arr_21 [i_1] [i_2] [i_9] [i_10]), (arr_21 [i_10] [i_9] [i_3] [i_1]))), (((/* implicit */long long int) ((_Bool) arr_21 [i_9] [i_9] [i_9] [i_9])))));
                        var_35 = ((/* implicit */unsigned short) arr_17 [i_1] [i_2] [(short)13] [i_9] [i_10]);
                    }
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned short) 18446744073709551608ULL);
                        arr_40 [i_3] [i_2] [i_3] [i_3] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_32 [i_11] [i_9] [i_3] [i_2] [(_Bool)1]), (arr_32 [i_3] [i_2] [i_2] [i_2] [i_11])))) ? (min((((/* implicit */int) arr_32 [i_1] [i_2] [i_3] [i_9] [i_11])), (arr_17 [i_1] [i_2] [i_3] [i_9] [i_11]))) : (arr_17 [i_1] [i_2] [i_3] [i_9] [i_11])));
                        arr_41 [i_3] = ((/* implicit */unsigned short) ((unsigned int) var_17));
                    }
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_37 = ((/* implicit */short) (~(((/* implicit */int) var_11))));
                    var_38 *= ((/* implicit */short) ((((/* implicit */int) arr_25 [i_1] [i_2] [i_3] [i_12] [i_12] [i_12])) >= (((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */int) (short)-32757)) : (((/* implicit */int) var_16))))));
                    var_39 = arr_43 [(unsigned char)15] [i_1] [i_3] [i_12] [i_12] [i_12];
                }
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    for (signed char i_14 = 1; i_14 < 20; i_14 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) min(((short)32764), (((/* implicit */short) var_15))))) ? (var_14) : (((/* implicit */int) arr_16 [i_1] [i_2] [i_13] [i_14])))));
                            arr_50 [i_3] [i_2] [i_3] [i_13] [(unsigned short)11] = ((/* implicit */unsigned char) arr_44 [i_3]);
                            arr_51 [i_14] [i_2] [i_3] [i_3] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_3] [i_13])) ? (var_14) : (((/* implicit */int) min((((/* implicit */short) var_7)), (var_0))))))) ? (min((((((/* implicit */_Bool) arr_31 [i_1] [i_2] [i_3] [i_13] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_2))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_17))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                        }
                    } 
                } 
                arr_52 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) (short)32767)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), ((unsigned short)34421))))))) : (((((/* implicit */_Bool) (short)-6)) ? (((((/* implicit */int) arr_8 [i_1] [i_2] [i_3])) & ((-2147483647 - 1)))) : (arr_44 [i_3])))));
            }
        }
        arr_53 [i_1] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)32764)))) & (((/* implicit */int) (short)-3))));
        var_41 = ((/* implicit */int) ((unsigned int) max((((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_19)) - (173))))), ((~(var_14))))));
    }
    for (short i_15 = 0; i_15 < 22; i_15 += 1) /* same iter space */
    {
        arr_56 [i_15] = ((/* implicit */short) (unsigned short)14009);
        var_42 = ((/* implicit */_Bool) min((min(((~(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((_Bool) arr_14 [i_15] [i_15] [i_15] [i_15]))))), (((/* implicit */unsigned long long int) var_16))));
        var_43 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) max((var_7), (((unsigned char) var_3))))) : (((/* implicit */int) ((max((((/* implicit */long long int) arr_16 [i_15] [i_15] [i_15] [i_15])), (arr_20 [9U] [i_15]))) < (((/* implicit */long long int) ((((/* implicit */_Bool) 14722323936139158716ULL)) ? (((/* implicit */int) arr_18 [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) (short)32767))))))))));
    }
    /* vectorizable */
    for (short i_16 = 0; i_16 < 22; i_16 += 1) /* same iter space */
    {
        var_44 = ((/* implicit */unsigned int) arr_20 [i_16] [i_16]);
        var_45 = (unsigned char)89;
        var_46 = ((/* implicit */unsigned long long int) var_5);
    }
}
