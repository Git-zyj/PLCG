/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70112
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
    var_15 = ((/* implicit */signed char) var_13);
    var_16 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((314776812U) << (((-361403618) + (361403632)))))) ? ((-(var_7))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                arr_7 [i_2] [i_1] = ((/* implicit */unsigned int) (unsigned short)45441);
                arr_8 [i_1] [i_2] = ((/* implicit */int) ((arr_2 [i_1 + 2] [i_1 + 2]) % (((/* implicit */unsigned long long int) arr_0 [i_1 + 2] [i_1 + 2]))));
                var_17 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_10)))));
            }
            arr_9 [i_1] [i_1 + 2] = ((/* implicit */unsigned short) arr_4 [i_1] [i_0] [i_0]);
            arr_10 [i_1] = ((/* implicit */unsigned char) 2113929216);
        }
        /* vectorizable */
        for (unsigned short i_3 = 1; i_3 < 24; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
            {
                arr_17 [i_0] [i_3] [i_4] [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_16 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])) >= (((((/* implicit */_Bool) (unsigned short)20080)) ? (arr_4 [(signed char)21] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_16 [i_4] [i_3] [i_0] [i_0]))))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0] [24U])) >= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)20094)))))))));
            }
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    arr_23 [(signed char)13] [i_3 - 1] [i_3] [i_5] = ((/* implicit */long long int) ((unsigned char) arr_15 [i_3 - 1] [i_3]));
                    var_19 = ((/* implicit */unsigned int) var_11);
                }
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    var_20 |= ((/* implicit */int) ((((/* implicit */int) (signed char)77)) == (((/* implicit */int) (unsigned short)20092))));
                    arr_26 [i_0] [i_5] [i_3] [i_3] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1])) ? (arr_14 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]) : (((/* implicit */unsigned int) arr_11 [i_3 - 1] [i_3 + 1]))));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        var_21 *= ((/* implicit */short) ((((((/* implicit */int) (unsigned short)45441)) >> (((12865650140289485562ULL) - (12865650140289485543ULL))))) >> (((((((/* implicit */_Bool) 3095713758337953272ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_3] [i_5] [i_7] [i_8] [i_8]))) : (arr_16 [i_3] [i_5] [i_7] [14]))) - (60637U)))));
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 13179254578538244267ULL))));
                        arr_29 [i_5] [5LL] [i_5] [i_7] [i_8] = ((/* implicit */int) ((signed char) var_1));
                        arr_30 [i_5] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_7] [i_8])))) ? (arr_12 [i_7] [i_3 - 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])))));
                    }
                }
                for (signed char i_9 = 2; i_9 < 24; i_9 += 1) 
                {
                    arr_33 [i_0] [i_9] [i_9] [i_9] [i_9 - 1] [i_5] = (-(((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_5] [i_9 - 1]))))));
                    var_23 -= ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_24 [i_3 - 1] [16LL])) : (((/* implicit */int) arr_24 [i_3 - 1] [(unsigned char)0])));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        arr_36 [i_10] [i_3] [i_5] [i_5] [i_5] [i_3] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)51)) ? (var_9) : (var_4)))));
                        arr_37 [i_0] [11LL] [i_5] [i_0] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_9] [14] [i_3] [i_0])))))));
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((unsigned int) var_5)))));
                        arr_38 [12U] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((arr_35 [i_0] [i_5] [i_9 - 1] [i_9] [i_10] [i_10]) | (((((/* implicit */_Bool) var_3)) ? (arr_2 [(short)13] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20078)))))));
                        arr_39 [i_0] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (arr_22 [i_10] [i_5] [i_5] [i_3])))) ? (((((/* implicit */_Bool) arr_16 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10] [i_10])) ? (arr_35 [i_0] [9] [9] [(unsigned short)22] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_0)))))));
                    }
                    arr_40 [i_0] [(short)9] [i_5] [i_5] [i_9] [i_9] = ((/* implicit */short) var_11);
                }
                for (int i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (-(((arr_3 [i_0] [i_0]) >> (((var_10) - (884632504U))))))))));
                    var_26 = ((/* implicit */signed char) (+(6419151564911528848ULL)));
                    arr_43 [i_0] [i_3 - 1] [i_5] [i_11] = (i_5 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5] [i_5]))) | (arr_2 [(unsigned char)23] [(unsigned char)23]))) | (((/* implicit */unsigned long long int) ((arr_13 [5U] [i_11]) >> (((/* implicit */int) arr_24 [i_0] [i_5])))))))) : (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5] [i_5]))) | (arr_2 [(unsigned char)23] [(unsigned char)23]))) | (((/* implicit */unsigned long long int) ((arr_13 [5U] [i_11]) >> (((((/* implicit */int) arr_24 [i_0] [i_5])) - (71)))))))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_12 = 1; i_12 < 21; i_12 += 1) 
                {
                    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_3 - 1] [i_3 + 1] [i_0] [i_0]))) : ((-(var_14)))));
                    arr_46 [i_3 - 1] [i_5] [i_5] = ((/* implicit */unsigned char) (-(arr_4 [i_0] [i_12 + 3] [i_3 + 1])));
                }
                for (unsigned char i_13 = 2; i_13 < 22; i_13 += 1) 
                {
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)45449)) : (((/* implicit */int) arr_24 [i_0] [12LL])))) : (((/* implicit */int) arr_47 [2U] [2U])))))));
                    arr_50 [i_3] [i_5] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [2LL] [i_3 - 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_0] [i_0])) : (arr_2 [i_5] [i_3])));
                }
                arr_51 [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1039)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [(unsigned char)2]))) : (arr_0 [(_Bool)1] [i_3])))) ? (arr_16 [i_5] [i_3] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_0] [i_0] [(unsigned char)9] [i_0]))));
            }
            arr_52 [i_3] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_12))));
            arr_53 [11] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_11 [i_3 + 1] [i_3 - 1])) | (arr_0 [i_3] [i_3 - 1])));
        }
        arr_54 [i_0] [i_0] = ((/* implicit */long long int) arr_5 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 22; i_14 += 4) 
    {
        arr_58 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_24 [i_14] [i_14])) : (((/* implicit */int) arr_24 [i_14] [i_14]))));
        arr_59 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 14734550783306751429ULL)) ? (((/* implicit */int) (short)-1045)) : (((/* implicit */int) (short)1022))));
        /* LoopNest 2 */
        for (long long int i_15 = 2; i_15 < 21; i_15 += 3) 
        {
            for (signed char i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                {
                    arr_65 [i_14] [i_14] [i_15] [i_14] = ((/* implicit */signed char) 5394450819163956441ULL);
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 4; i_17 < 20; i_17 += 2) 
                    {
                        arr_70 [21ULL] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) (-(var_6)));
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) var_9))));
                        var_30 += ((/* implicit */signed char) ((((/* implicit */int) var_2)) << (((1073312437U) - (1073312414U)))));
                        arr_71 [i_15] = ((/* implicit */int) ((((((/* implicit */_Bool) 18341179809876434590ULL)) || (((/* implicit */_Bool) arr_21 [i_14] [i_14] [i_14] [i_14])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6433))) : (arr_45 [i_17 + 1] [i_15] [i_15] [i_15 - 2])));
                    }
                    arr_72 [i_16] [i_15] [i_16] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_14] [i_15] [i_16] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (1622318918))))) : (arr_3 [i_16] [i_14])));
                    arr_73 [i_15] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_47 [i_15] [i_14]))))) >= (arr_35 [i_14] [i_15 + 1] [i_15 + 1] [8ULL] [8ULL] [i_15 + 1])));
                }
            } 
        } 
        var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_14] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20092))) : (var_4)));
    }
    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) var_5))));
}
