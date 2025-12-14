/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68348
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
    var_17 += ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_5 [(_Bool)1] [i_1] [i_0]) : (((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 2; i_2 < 10; i_2 += 1) 
                {
                    var_18 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) arr_1 [i_1] [i_1]))))))) ? (((((/* implicit */_Bool) arr_3 [i_2 + 1] [(short)3])) ? (arr_3 [i_2 - 1] [i_2 - 1]) : (((/* implicit */long long int) arr_1 [i_2 - 1] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [(signed char)2] [(signed char)2] [i_1]))))))));
                    arr_9 [i_0] [i_1] [(unsigned char)8] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((arr_7 [i_0] [i_1] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) : (arr_4 [i_0] [i_1])))) ? (((/* implicit */unsigned int) arr_1 [i_2 - 1] [i_0])) : (arr_4 [i_0] [i_2 - 2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_2] [9U] [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])));
                                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_0] [i_4])) ? (arr_12 [i_0] [i_1] [i_2 - 2] [i_0] [i_4 + 1]) : (arr_12 [i_4 - 1] [i_0] [i_2] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_1] [i_0])) ? (arr_11 [i_0] [i_1] [i_2 - 2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_4 + 1] [i_4])) : (arr_13 [i_0] [i_0] [5ULL] [i_2] [i_3] [i_0])))) : (arr_14 [2U] [i_4 - 2] [i_4 - 2] [i_4 - 1] [(unsigned char)2] [i_2 - 2] [i_2]));
                                var_21 |= ((/* implicit */short) min(((~(((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_12 [i_0] [0U] [0U] [i_3] [(short)10]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_2] [i_1]))))))), (((/* implicit */long long int) ((arr_7 [(signed char)7] [i_2 - 2] [i_2 - 2]) ? (((/* implicit */int) arr_7 [i_2] [i_2 - 2] [i_2 - 2])) : (((/* implicit */int) arr_8 [i_4 - 2] [i_4] [i_4 - 1] [i_3])))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)125)) ? (10262690872953877060ULL) : (((/* implicit */unsigned long long int) 2010010203U))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_4 [i_0] [i_1])))) ? (arr_11 [i_0] [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 2] [(_Bool)1]) : (((/* implicit */long long int) min((arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_1]), (((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_1] [i_2 - 2] [i_2 + 1] [i_2])))))))));
                }
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    arr_18 [i_1] [i_1] [i_5] |= ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
                    arr_19 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5] [i_1])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))) ? (arr_12 [i_5] [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0]))))))) : (min(((-9223372036854775807LL - 1LL)), ((-9223372036854775807LL - 1LL))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_10 [i_6 - 2] [i_6] [i_6] [i_6 - 3] [i_6 + 1] [i_1]))));
                                arr_26 [i_0] [(short)8] [i_5] [i_5] [i_5] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_14 [i_7] [i_1] [i_7] [i_6 - 1] [i_5] [i_1] [i_1]), (arr_14 [i_7] [i_7] [i_6] [i_6 - 1] [i_5] [i_5] [i_5])))) ? (max((arr_14 [i_0] [i_0] [i_0] [i_6 + 1] [i_0] [i_0] [i_0]), (arr_14 [i_7] [i_7] [i_6 - 3] [i_6 - 3] [i_5] [i_0] [(short)8]))) : (arr_14 [i_6] [2U] [i_6] [i_6 - 2] [i_5] [i_0] [i_0])));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) arr_5 [i_0] [i_1] [i_5]);
                }
                for (unsigned short i_8 = 2; i_8 < 9; i_8 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_9 = 1; i_9 < 8; i_9 += 2) 
                    {
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_1] [i_8])))))));
                        var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [i_1])) ? (arr_5 [i_0] [i_8] [i_8]) : (arr_5 [i_0] [i_0] [i_0])));
                    }
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        arr_36 [i_8] [i_8] [i_8 + 2] [i_8 + 2] |= ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_22 [i_8] [i_8 - 2] [i_8 - 2] [i_8]))))));
                        var_26 += ((/* implicit */unsigned char) arr_28 [i_8]);
                    }
                    for (unsigned int i_11 = 1; i_11 < 10; i_11 += 3) 
                    {
                        var_27 = arr_17 [i_0] [i_1] [i_8] [i_11 + 1];
                        var_28 |= ((((/* implicit */_Bool) arr_35 [i_8 - 2] [i_8 - 2] [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_8 + 1])) ? (min((((/* implicit */int) arr_20 [i_11 - 1] [i_8] [i_1] [i_0])), (arr_1 [i_1] [i_1]))) : (arr_32 [i_8 - 1] [i_1] [i_0] [i_8 + 1] [i_1] [i_0]));
                        /* LoopSeq 1 */
                        for (int i_12 = 0; i_12 < 11; i_12 += 3) 
                        {
                            arr_42 [i_0] [i_1] [i_8] [i_11] [i_8] |= ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) arr_34 [i_1] [i_8 - 1] [i_8 + 1] [i_11 + 1] [i_11 - 1] [i_12])), (arr_12 [i_1] [i_8 + 1] [i_8 + 2] [i_1] [i_11 - 1])))));
                            var_29 += ((/* implicit */signed char) min(((+(((/* implicit */int) arr_20 [i_8 - 1] [i_8] [i_8 - 1] [(_Bool)1])))), (((/* implicit */int) max((arr_20 [i_11] [i_8 - 2] [i_8 - 2] [i_0]), (arr_20 [i_11] [i_8] [i_8 - 2] [i_8]))))));
                        }
                        arr_43 [i_11 - 1] [i_8 - 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8 + 2])) ? (arr_28 [i_8 - 1]) : (arr_28 [i_8 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0]))) : (max((arr_16 [i_0] [i_1] [i_8] [i_1]), (((arr_7 [i_0] [i_1] [i_11]) ? (((/* implicit */unsigned long long int) arr_28 [i_8])) : (arr_29 [i_0] [(short)4] [i_8] [i_11 - 1])))))));
                    }
                    var_30 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_40 [i_8] [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_8] [i_0])) ? (arr_25 [i_1] [1] [i_1] [i_0] [i_1]) : (arr_25 [i_8] [i_8] [i_8 - 1] [i_0] [i_8])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 2; i_13 < 9; i_13 += 2) 
                    {
                        var_31 += (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_8] [i_8])))))))));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (arr_12 [9] [i_0] [i_1] [i_0] [9])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [2] [i_1] [i_1] [i_0] [i_1])) ? (((/* implicit */int) arr_39 [i_13] [i_8] [(_Bool)1] [i_1] [i_0])) : (arr_28 [0ULL])))) : (arr_3 [i_13 + 2] [i_8 - 1])))) ? (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))));
                    }
                    for (int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        var_33 += ((/* implicit */unsigned char) arr_38 [i_0] [i_0] [i_8] [i_0] [i_14]);
                        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) arr_23 [i_0] [i_0] [i_0] [i_1]))));
                        arr_49 [i_0] [i_1] [i_8] [i_14] |= ((/* implicit */short) min((((/* implicit */long long int) arr_27 [i_8] [i_8] [i_8])), (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_1] [i_8 - 2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_8] [i_8] [i_1] [i_8 + 1]))) : (arr_11 [i_14] [i_14] [i_1] [i_1] [i_1] [i_0])))));
                        arr_50 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_0] [i_1] [i_8 - 2] [i_14]))))), (arr_17 [i_8] [i_8] [i_8] [i_8 + 1])))) ? (((/* implicit */int) arr_46 [i_1] [i_0] [i_1] [i_0] [i_1])) : (((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_0] [i_14])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */int) arr_33 [i_0] [i_0] [10LL] [i_0] [i_0]))))));
                        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_0] [i_0] [i_8 - 2] [i_8 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_0] [i_8 - 2] [i_14] [i_0] [i_8 - 2]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0])) ? (arr_38 [i_0] [i_0] [(signed char)2] [i_0] [i_0]) : (arr_30 [i_0] [i_0] [i_0])))) ? (min((arr_16 [i_0] [i_0] [i_8] [5]), (((/* implicit */unsigned long long int) arr_24 [i_0] [i_1] [i_1] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))));
                    }
                    var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_8 - 2])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_1] [i_0] [i_8 + 1])) : (arr_47 [i_0] [i_1] [i_8] [i_1]))))));
                }
                for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    arr_53 [i_0] [i_0] [i_1] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_15] [i_15] [9] [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_39 [i_0] [i_0] [i_1] [i_15] [(unsigned char)8]))))) : (arr_17 [i_0] [i_0] [i_0] [i_0])));
                    arr_54 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_0]))));
                    arr_55 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_0] [i_1] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_48 [i_0] [i_1] [i_1] [i_1])) ? (arr_13 [i_15] [i_1] [i_1] [i_1] [i_0] [i_0]) : (arr_48 [i_0] [i_0] [i_15] [i_0]))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_15] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_15]))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned int) max((var_37), (arr_4 [i_0] [i_0])));
                        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) min((max((((/* implicit */unsigned long long int) arr_44 [i_0] [i_0] [i_0] [i_0])), (arr_16 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_23 [i_0] [i_1] [i_1] [i_1])), (arr_48 [i_1] [i_1] [i_15] [i_16])))))))));
                        arr_58 [i_1] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1162048922)) ? (-1158150453) : (-1073741824)))) ? (((((/* implicit */_Bool) arr_32 [i_0] [i_1] [i_15] [i_15] [i_1] [i_16])) ? (arr_30 [i_1] [i_1] [i_16]) : (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])))) : (((/* implicit */unsigned long long int) arr_32 [i_15] [i_1] [i_15] [i_15] [i_1] [10LL]))))) ? (max((((((/* implicit */_Bool) arr_56 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_1] [i_1] [i_0])) : (arr_47 [i_0] [i_1] [i_15] [i_0]))), (((/* implicit */unsigned long long int) min((arr_56 [i_0] [i_1] [i_15] [i_15]), (arr_41 [i_1] [i_0] [i_0] [i_1] [i_0] [i_16])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_16] [i_1] [i_16] [i_16] [i_16] [i_1])) ? (((/* implicit */int) arr_57 [i_0] [i_1] [i_15] [i_15] [i_16] [i_16])) : (((/* implicit */int) arr_57 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_15] [i_15] [i_15] [i_15] [i_15])) ? (arr_3 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_1] [i_15] [i_15]))))))));
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_15] [i_1])) ? (arr_16 [i_0] [i_1] [i_1] [i_1]) : (arr_16 [i_0] [i_1] [i_15] [i_17])));
                    }
                    for (int i_18 = 0; i_18 < 11; i_18 += 1) 
                    {
                        var_41 |= ((/* implicit */long long int) (+((+(((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_1] [i_1] [i_1] [(signed char)6])) ? (arr_47 [i_18] [i_15] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_35 [(short)3] [(short)3] [i_15] [(short)3] [(unsigned short)0] [(short)3]))))))));
                        var_42 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_33 [i_18] [i_18] [i_18] [i_18] [i_18])) : (((/* implicit */int) arr_33 [i_18] [i_1] [i_1] [i_1] [i_0]))))));
                        arr_63 [i_0] [i_0] [i_0] [i_18] = ((/* implicit */unsigned int) arr_62 [i_0] [i_15] [i_1] [i_1] [i_0] [i_0]);
                        var_43 += ((/* implicit */int) arr_34 [i_18] [i_18] [i_18] [i_18] [9LL] [i_18]);
                    }
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_52 [i_1])) : (((/* implicit */int) arr_27 [i_0] [i_1] [(unsigned char)5]))))) ? ((~(arr_1 [i_15] [i_1]))) : ((~(((/* implicit */int) arr_39 [i_0] [i_0] [(short)3] [i_0] [4ULL])))))))))));
                }
                var_45 += ((/* implicit */signed char) (-(((arr_7 [i_0] [i_0] [i_1]) ? (((/* implicit */int) arr_7 [6U] [6U] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_20 = 0; i_20 < 23; i_20 += 2) 
        {
            arr_68 [i_19] [i_19] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_64 [i_19] [i_19])), (arr_65 [i_19] [i_20]))), (((/* implicit */unsigned long long int) arr_64 [i_19] [i_20]))));
            arr_69 [i_20] = arr_64 [i_20] [i_19];
        }
        for (unsigned int i_21 = 1; i_21 < 22; i_21 += 1) 
        {
            arr_72 [i_19] [i_21] [i_21] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_71 [i_19]))));
            arr_73 [(unsigned char)22] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_71 [i_21 - 1])) ? (((/* implicit */int) arr_71 [i_21 - 1])) : (((/* implicit */int) arr_71 [i_21 - 1]))))) ? ((+(((/* implicit */int) arr_71 [i_21 + 1])))) : (((/* implicit */int) max((arr_71 [i_21 + 1]), (arr_71 [i_21 - 1]))))));
        }
        arr_74 [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_66 [i_19] [i_19] [i_19]), (arr_66 [i_19] [i_19] [i_19])))) ? (((/* implicit */unsigned long long int) min((arr_64 [i_19] [i_19]), (arr_64 [i_19] [i_19])))) : (((((/* implicit */_Bool) arr_70 [i_19])) ? (max((((/* implicit */unsigned long long int) arr_64 [i_19] [i_19])), (arr_66 [i_19] [i_19] [i_19]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_71 [i_19])))))))));
        var_46 = ((/* implicit */unsigned long long int) min((var_46), (max((min((arr_65 [i_19] [i_19]), (arr_65 [i_19] [i_19]))), (arr_67 [i_19] [i_19] [i_19])))));
        var_47 += ((/* implicit */int) (((!(((/* implicit */_Bool) arr_67 [i_19] [i_19] [i_19])))) ? (max((((/* implicit */unsigned long long int) arr_64 [i_19] [i_19])), (arr_65 [i_19] [i_19]))) : (((((/* implicit */_Bool) arr_64 [i_19] [i_19])) ? (arr_65 [i_19] [i_19]) : (arr_66 [i_19] [i_19] [i_19])))));
    }
}
