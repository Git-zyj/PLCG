/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67847
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
    var_10 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_11 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))), ((~(min((arr_0 [i_0] [(_Bool)1]), (((/* implicit */long long int) arr_2 [i_0]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            arr_5 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_1 + 2]);
            var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [22ULL] [i_0])) ? (((/* implicit */int) arr_4 [15U] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))));
        }
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_10 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_6 [i_0] [i_2] [i_0]) : (((/* implicit */unsigned long long int) arr_8 [i_0]))))));
            arr_11 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0]))))) >> ((((~(((/* implicit */int) arr_3 [i_0] [i_2])))) + (120)))));
        }
        for (signed char i_3 = 1; i_3 < 23; i_3 += 3) 
        {
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_3 - 1])) ? (((/* implicit */int) arr_14 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_14 [i_0] [i_0]))))) ? (((/* implicit */int) arr_14 [i_0] [i_0])) : ((+(((/* implicit */int) (short)32767))))));
            var_14 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_3 + 1] [i_3])) | (((/* implicit */int) arr_14 [i_3 - 1] [i_3 - 1]))))) >= (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0])))))) & (max((((/* implicit */long long int) arr_3 [i_0] [i_3 + 1])), (arr_0 [2U] [i_0])))))));
            arr_15 [14U] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_1 [i_0] [i_3 - 1])), (arr_0 [i_3 - 1] [i_0])));
            arr_16 [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) (((+(arr_13 [i_3 - 1] [i_3 - 1] [i_3 - 1]))) | ((~(arr_13 [i_3 - 1] [i_3 - 1] [i_3])))));
        }
    }
    var_15 |= ((/* implicit */unsigned long long int) var_5);
    var_16 += ((/* implicit */short) min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) min((((/* implicit */signed char) (!(var_7)))), (var_4))))));
    /* LoopSeq 4 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_17 ^= ((/* implicit */short) arr_14 [i_4] [i_4]);
        var_18 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned char)20] [i_4] [6])) ? (((/* implicit */int) arr_17 [i_4] [5LL])) : (((/* implicit */int) arr_1 [18U] [i_4]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_17 [i_4] [i_4]))))) : (((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_12 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4])))))))));
    }
    for (long long int i_5 = 1; i_5 < 20; i_5 += 2) 
    {
        arr_21 [i_5] = arr_9 [i_5];
        var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)23484)) : (((/* implicit */int) arr_2 [i_5 - 1]))))));
    }
    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(((/* implicit */int) arr_24 [(signed char)8])))))));
        var_21 = min((((((/* implicit */_Bool) arr_12 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) arr_12 [i_6] [i_6])) : (arr_13 [i_6] [i_6] [i_6]))), (((/* implicit */unsigned long long int) arr_12 [i_6] [i_6])));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_22 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [(signed char)10] [(signed char)10])) - (arr_6 [(unsigned short)18] [i_7] [i_7])))) ? (((((/* implicit */int) arr_2 [i_7])) | (((/* implicit */int) arr_23 [i_7])))) : (((/* implicit */int) arr_3 [i_7] [i_7])));
        var_23 = ((/* implicit */int) ((((((/* implicit */int) arr_1 [(unsigned char)22] [(unsigned char)22])) < (((/* implicit */int) arr_2 [i_7])))) ? (arr_22 [i_7] [i_7]) : (arr_6 [(short)8] [i_7] [i_7])));
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_7 [i_10])) & (arr_34 [i_10])));
                            var_25 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_7] [i_7])) ? (((/* implicit */int) arr_38 [i_7] [i_10] [i_10] [i_10] [4] [i_10])) : (((/* implicit */int) arr_31 [i_10]))))) ? (arr_32 [i_7] [i_7] [i_11] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_7] [i_7]))))));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_19 [i_11])) ? (arr_35 [i_11] [i_11] [i_11] [i_11] [i_7] [i_7]) : (((/* implicit */unsigned int) arr_7 [1U])))))))));
                            arr_39 [i_7] [i_9] [i_9] [i_7] [i_11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_20 [i_9])) | (15347622364132947767ULL)));
                            arr_40 [i_7] [i_7] [i_8] [i_8] [i_9] [i_10] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_7] [i_7] [i_9] [i_10] [i_11] [i_9])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15347622364132947780ULL)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (short)23465))))) : (((((/* implicit */_Bool) arr_35 [i_7] [i_7] [i_9] [i_7] [i_7] [i_7])) ? (arr_18 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_7] [i_9] [i_9] [i_11] [i_11] [i_7])))))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */int) arr_31 [i_9]);
                            arr_44 [(short)6] [i_9] [0U] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [6ULL] [i_12]))));
                        }
                        for (unsigned char i_13 = 1; i_13 < 10; i_13 += 1) 
                        {
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_8])) ? (arr_36 [i_13 - 1] [i_13 + 1] [(unsigned short)4] [i_13 + 1] [i_13 - 1] [i_13 - 1]) : (((/* implicit */unsigned long long int) arr_8 [i_9]))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_9] [i_13 - 1] [i_13 + 1])) ? (((((/* implicit */_Bool) arr_14 [i_8] [i_13])) ? (arr_36 [i_7] [i_7] [i_9] [1LL] [i_10] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_7] [i_7] [i_9]))))) : (((/* implicit */unsigned long long int) ((arr_7 [i_10]) ^ (((/* implicit */int) arr_3 [17] [i_9])))))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_13 + 1])) ? (((/* implicit */int) arr_26 [i_7] [i_7])) : (((/* implicit */int) arr_30 [i_9] [i_8] [i_8] [i_9]))));
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_7] [i_8])) || (((/* implicit */_Bool) arr_17 [i_7] [i_8]))))))))));
                            var_32 = ((/* implicit */int) (-(arr_32 [i_7] [i_10] [i_9] [i_10] [i_10] [i_13 - 1])));
                        }
                        var_33 = ((/* implicit */unsigned char) arr_34 [i_9]);
                        arr_47 [i_7] [i_9] [i_9] = ((/* implicit */int) ((((/* implicit */int) arr_29 [i_7] [i_10])) == (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_10] [5ULL])) && (((/* implicit */_Bool) arr_23 [i_7])))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 2; i_16 < 10; i_16 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_17 = 0; i_17 < 11; i_17 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)23489)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) (unsigned char)43))));
                            arr_60 [i_14] [i_14] [i_15] [i_16] [i_16] = ((/* implicit */int) (~(arr_32 [i_16] [i_16] [i_14] [i_16] [6U] [i_16 - 1])));
                        }
                        var_35 = arr_17 [i_15] [i_7];
                        arr_61 [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_16 - 2] [i_16 + 1] [i_16] [i_16] [i_16 - 1])) || (((/* implicit */_Bool) arr_57 [i_16 - 2] [i_16 - 1] [i_16 - 2] [i_16] [i_16 - 1]))));
                        arr_62 [i_7] [i_14] [i_15] [(signed char)0] |= ((/* implicit */signed char) (~(arr_18 [i_16 - 1])));
                    }
                    var_36 += (+((~(arr_32 [i_7] [i_7] [2ULL] [2ULL] [i_15] [i_15]))));
                    /* LoopSeq 3 */
                    for (unsigned char i_18 = 1; i_18 < 9; i_18 += 1) 
                    {
                        arr_65 [i_7] [i_14] [i_7] [i_14] = ((/* implicit */signed char) (+(((/* implicit */int) arr_30 [i_7] [i_14] [i_15] [i_14]))));
                        /* LoopSeq 2 */
                        for (long long int i_19 = 0; i_19 < 11; i_19 += 3) 
                        {
                            arr_69 [i_7] [i_7] [i_14] [i_14] [i_7] = ((/* implicit */_Bool) arr_57 [(_Bool)0] [i_18 + 1] [i_18 + 2] [i_18 + 1] [i_18]);
                            var_37 = ((/* implicit */unsigned long long int) min((var_37), (((arr_37 [i_18 + 2] [i_18] [i_18] [i_19] [i_19] [i_19]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_7] [i_7] [(unsigned short)0] [(unsigned short)0] [i_7] [(unsigned char)0]))))))))));
                            arr_70 [i_14] [i_14] = ((/* implicit */unsigned short) arr_14 [i_7] [i_15]);
                        }
                        for (short i_20 = 1; i_20 < 8; i_20 += 1) 
                        {
                            var_38 = ((/* implicit */long long int) arr_59 [i_14]);
                            var_39 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_3 [i_20 - 1] [i_15])) ? (((/* implicit */int) arr_54 [i_14] [i_14] [i_14] [i_7] [i_20] [i_15])) : (((/* implicit */int) arr_66 [i_7] [i_14] [i_20 + 3]))))));
                        }
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 1) 
                    {
                        arr_77 [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_41 [i_14] [i_14]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_14])))))) | (arr_22 [i_14] [i_21])));
                        arr_78 [4ULL] [i_14] [i_15] [4ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_17 [i_7] [i_7])) : (((/* implicit */int) arr_38 [i_7] [i_14] [i_15] [i_21] [i_14] [i_14]))));
                    }
                    for (int i_22 = 1; i_22 < 9; i_22 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_23 = 0; i_23 < 11; i_23 += 1) 
                        {
                            var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_22 - 1] [i_22 + 2])) ? (arr_12 [i_22 - 1] [i_22 + 1]) : (arr_12 [i_22 - 1] [i_22 + 1]))))));
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_22 + 2] [i_22 + 2] [i_22] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_22 - 1] [i_22 - 1] [i_14] [i_22] [i_23] [i_23]))) : ((~(arr_13 [i_7] [i_7] [i_15])))));
                            arr_84 [i_7] [i_7] [(short)6] [i_15] [i_14] [(short)6] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_7] [i_14] [i_7] [i_7]))) | (((((/* implicit */_Bool) arr_53 [i_7] [i_14] [i_7] [i_22])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [2LL] [2LL] [i_15]))) : (arr_46 [i_7] [i_14] [i_15] [i_7] [i_23])))));
                        }
                        for (unsigned int i_24 = 1; i_24 < 9; i_24 += 1) 
                        {
                            arr_87 [i_24 + 2] [i_22] [i_14] [i_14] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_15] [i_22 - 1])) <= (((/* implicit */int) arr_17 [i_24 + 1] [i_14]))));
                            var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_59 [4U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_7] [i_7]))) : (arr_64 [i_24] [i_7] [(short)4] [i_14] [i_7]))))));
                        }
                        for (unsigned short i_25 = 0; i_25 < 11; i_25 += 2) 
                        {
                            arr_92 [i_7] [(_Bool)1] [i_14] [i_22] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_22 + 1] [i_22 + 1] [i_22 + 2] [i_14]))) : (arr_12 [i_22 - 1] [i_22 + 2])));
                            var_43 += ((/* implicit */signed char) arr_50 [i_25] [i_15] [i_25]);
                            arr_93 [i_14] [i_22] [i_15] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_89 [i_22] [i_22 - 1] [i_22] [i_22 + 2] [i_14])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_71 [i_7] [i_7] [i_15] [i_22 - 1] [i_25] [i_22 + 2] [i_14])) ? (((/* implicit */int) arr_81 [i_14] [i_14])) : (((/* implicit */int) arr_3 [i_7] [i_14]))))) : (arr_6 [i_14] [i_15] [i_14])));
                        }
                        var_44 = ((/* implicit */long long int) arr_68 [i_7] [i_7] [i_7] [i_14] [i_7] [i_14]);
                        arr_94 [(_Bool)1] [(_Bool)1] [i_15] [i_14] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_75 [i_7] [i_14] [i_22 + 2])) < (arr_48 [i_22 - 1] [i_22 - 1])));
                    }
                }
            } 
        } 
    }
}
