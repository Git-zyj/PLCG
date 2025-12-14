/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77309
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_10 = ((/* implicit */unsigned short) ((arr_4 [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1])))));
            var_11 = ((/* implicit */signed char) arr_1 [i_1]);
            arr_8 [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_1])) || (((/* implicit */_Bool) arr_7 [i_0]))));
            var_12 += ((/* implicit */signed char) ((arr_1 [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_0])))));
        }
        arr_9 [i_0] = ((/* implicit */short) arr_3 [i_0]);
        var_13 = ((/* implicit */signed char) ((arr_5 [i_0]) || (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) > (arr_4 [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_14 = ((/* implicit */_Bool) ((((arr_4 [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((arr_5 [i_0]) || (arr_11 [i_0])))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_18 [i_0] [i_3] [(unsigned char)7] [i_3] [(short)0] = ((((/* implicit */_Bool) arr_13 [i_0])) || (((/* implicit */_Bool) ((arr_5 [i_3]) ? (arr_1 [5LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)5] [8U])))))));
                        var_15 = ((/* implicit */unsigned int) arr_6 [i_4]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_19 [(_Bool)1]) ? (arr_1 [1]) : (arr_3 [i_0])))) ? (((/* implicit */int) arr_11 [i_6])) : (((/* implicit */int) arr_13 [i_2])))))));
                        arr_25 [i_6] [i_2] [i_6] [i_6] [i_6] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0])) <= (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)32256))))));
                        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) arr_1 [i_2]))));
                        var_18 -= arr_7 [i_2];
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((arr_15 [i_0] [i_2] [i_5]) ? (((arr_3 [i_0]) % (arr_23 [(_Bool)1] [(_Bool)1] [i_5] [(signed char)0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6] [i_5]))))))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (short i_7 = 2; i_7 < 23; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 23; i_11 += 3) 
                        {
                            {
                                arr_42 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_37 [i_7 - 1] [i_7 - 1] [i_7 - 2] [i_7 - 2] [i_7 + 1])) == (((/* implicit */int) arr_37 [i_7 + 1] [i_7] [i_7 - 2] [i_7 - 2] [i_7 + 1]))));
                                arr_43 [i_7] [i_7] [(signed char)18] [(unsigned short)6] [i_7] [i_7] [i_10] = ((/* implicit */unsigned short) arr_41 [i_9] [i_7 + 1] [i_7] [i_7] [i_7 + 1]);
                                arr_44 [(short)10] [i_10] [i_10] [i_11 + 1] = ((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_7] [i_7] [i_7 + 1] [i_10] [i_7 - 2] [i_7 - 1] [i_7])) ^ (((((/* implicit */int) arr_30 [(unsigned char)2] [i_8] [19LL])) | (((/* implicit */int) arr_27 [i_11] [i_7]))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_7] [4U] [12ULL])) ? (((/* implicit */int) arr_29 [i_8])) : (((((/* implicit */int) arr_32 [i_8] [i_9])) >> (((((/* implicit */int) arr_36 [i_7 - 2] [(_Bool)1] [i_9])) - (16880)))))));
                    arr_45 [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_7 - 2])) ? (((/* implicit */int) arr_34 [i_9] [i_8] [i_7])) : (((/* implicit */int) arr_29 [i_7 - 2]))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_9] [10ULL] [10ULL] [i_7 - 2])) ? (((/* implicit */int) arr_38 [i_9] [(short)0] [(short)0] [i_7])) : (((/* implicit */int) arr_38 [i_7] [22U] [2U] [22U]))));
                }
            } 
        } 
        var_22 = arr_38 [(signed char)12] [(signed char)12] [(_Bool)1] [i_7 - 2];
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)67)) : (1776204135)));
        /* LoopSeq 1 */
        for (long long int i_12 = 3; i_12 < 21; i_12 += 3) 
        {
            var_24 = ((/* implicit */_Bool) ((arr_31 [i_7] [(short)23]) >> (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-45)) || (((/* implicit */_Bool) (short)(-32767 - 1))))))));
            arr_50 [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_7 + 1] [i_7 + 1] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_12]))) : (arr_35 [4ULL] [i_12 + 1] [i_12 - 3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_7 - 2] [i_7 - 1] [i_12] [i_12 + 3]))) : (arr_46 [i_7 - 2])));
            arr_51 [i_12] [i_12 + 2] [i_12 + 2] = ((/* implicit */signed char) arr_46 [i_12 + 1]);
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                for (int i_14 = 2; i_14 < 23; i_14 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_15 = 0; i_15 < 24; i_15 += 3) /* same iter space */
                        {
                            arr_60 [i_13] [i_12 - 2] [i_12] [i_12 - 2] [15U] = ((/* implicit */short) arr_54 [i_7] [i_12]);
                            arr_61 [i_7] [18U] [i_13] [(short)2] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_15] [i_12] [i_15] [i_12] [i_14 - 2]))) >= (((((/* implicit */_Bool) arr_35 [i_7] [0U] [(signed char)21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [(short)2]))) : (arr_41 [i_7 - 2] [i_7 - 2] [i_13] [i_14 - 1] [i_15])))));
                            arr_62 [i_7] [i_7] [i_7] [i_7] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) 2247701084U)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-10365)))));
                        }
                        for (signed char i_16 = 0; i_16 < 24; i_16 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_46 [i_7]) | (arr_46 [i_7 + 1])))) ? (((/* implicit */int) arr_27 [1LL] [(_Bool)1])) : (((((/* implicit */int) arr_55 [i_7] [10U] [i_12 + 1] [i_13] [i_13] [i_16])) - (((/* implicit */int) arr_38 [i_7] [i_14 + 1] [i_12] [(short)18]))))));
                            arr_65 [i_7] [19ULL] [19ULL] [15LL] [7U] [i_12] [7U] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((arr_64 [i_7] [i_12] [19ULL] [(_Bool)0] [i_13]) << (((((/* implicit */int) arr_34 [i_16] [i_12 + 1] [i_12 + 1])) - (1425)))))) >= (((arr_59 [16ULL] [(unsigned char)13] [i_13] [(_Bool)1] [(_Bool)1]) ? (arr_35 [(_Bool)1] [(_Bool)1] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_7 + 1] [i_12 - 3] [i_7 + 1] [i_12] [i_16])))))));
                        }
                        for (signed char i_17 = 0; i_17 < 24; i_17 += 3) 
                        {
                            arr_70 [i_12] [(short)9] [(short)9] [i_12] [i_12] = ((/* implicit */long long int) arr_68 [i_7] [i_7] [i_7 - 1] [i_7] [i_7 - 1] [(_Bool)1] [i_7 - 1]);
                            var_26 = ((/* implicit */signed char) arr_63 [(short)8] [i_14 - 2] [i_12] [i_14] [(_Bool)1] [i_14 - 1] [i_14 - 1]);
                        }
                        arr_71 [(_Bool)1] [i_12] [(_Bool)1] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_12 - 1] [i_13] [i_14 - 2])) && (((/* implicit */_Bool) arr_55 [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 - 1] [i_14 - 1]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
            {
                for (long long int i_19 = 1; i_19 < 22; i_19 += 3) 
                {
                    for (signed char i_20 = 0; i_20 < 24; i_20 += 3) 
                    {
                        {
                            arr_78 [i_12] [i_12] [12LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_7 + 1] [i_19 + 1])) && (((((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_7])) || (arr_47 [i_12])))));
                            arr_79 [i_20] [i_12] [6ULL] [i_19] [i_20] = ((/* implicit */short) ((((/* implicit */int) arr_75 [i_12 + 2] [i_18 + 1] [(unsigned short)17] [i_19 + 2])) != (((/* implicit */int) arr_75 [i_12 + 1] [i_18 + 1] [i_18 + 1] [i_19 + 2]))));
                            arr_80 [i_19] [i_12] [14U] [i_19] [i_7 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_57 [i_18 + 1] [i_12] [i_12 - 3] [i_12] [i_12 - 1])) || (((/* implicit */_Bool) arr_38 [(unsigned char)7] [i_12] [i_12] [i_12 + 1]))));
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_21 = 1; i_21 < 24; i_21 += 3) 
    {
        arr_85 [i_21] [i_21] = ((/* implicit */unsigned long long int) min((max((arr_84 [i_21]), (arr_84 [i_21]))), (arr_84 [i_21])));
        arr_86 [i_21] = ((/* implicit */_Bool) arr_84 [i_21]);
        var_27 = ((/* implicit */_Bool) arr_83 [i_21 - 1]);
    }
    var_28 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) var_0)) % (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_7)))))))), (max((var_6), (((/* implicit */long long int) var_9))))));
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((var_8), (((/* implicit */unsigned short) var_0)))), (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_9))))) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))) - (5055)))))) : (min((((((/* implicit */long long int) ((/* implicit */int) var_4))) - (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */int) var_8)))))))));
}
