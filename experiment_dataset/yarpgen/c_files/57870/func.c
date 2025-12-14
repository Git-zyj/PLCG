/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57870
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned short) arr_1 [i_0]))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((var_0) ? (min((((/* implicit */int) var_4)), (arr_0 [i_0 + 1]))) : ((~(arr_0 [i_0 + 1])))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_16 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2] [i_2])))))));
        var_17 = ((/* implicit */short) ((((((/* implicit */int) var_4)) >= ((-(((/* implicit */int) arr_6 [i_2] [i_2])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2])) - (var_6)))) ? (((/* implicit */int) arr_8 [i_2])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [(unsigned char)3] [(unsigned char)3])) : (var_6))))) : (((/* implicit */int) arr_7 [9ULL] [i_2]))));
        var_18 = ((/* implicit */short) arr_6 [7] [i_2]);
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_11 [i_3] = ((/* implicit */signed char) ((int) max((arr_10 [i_3] [i_3]), (((/* implicit */unsigned int) var_3)))));
        arr_12 [i_3] = ((/* implicit */short) arr_9 [i_3] [i_3]);
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
    }
    for (long long int i_4 = 2; i_4 < 14; i_4 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_4] [i_4])) ? (((/* implicit */int) arr_9 [i_4 + 2] [(unsigned char)8])) : (((/* implicit */int) ((unsigned short) arr_6 [i_4 + 2] [i_4])))));
        /* LoopSeq 4 */
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */_Bool) max((((unsigned char) arr_10 [i_5] [i_4 + 1])), (max((((/* implicit */unsigned char) var_11)), (arr_6 [i_4 + 3] [i_4 + 1])))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_4 + 1] [i_5])) ^ (((/* implicit */int) arr_6 [i_4] [i_5]))))) ? (((((/* implicit */int) arr_9 [i_4] [i_5])) & (((/* implicit */int) arr_6 [i_4 + 3] [i_5])))) : ((~(((/* implicit */int) arr_6 [i_5] [i_4 + 3]))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
        {
            arr_19 [i_6] [i_4] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_18 [i_4 + 2] [i_6]))))));
            /* LoopSeq 2 */
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                arr_23 [i_7] [i_6] [i_7] = ((/* implicit */unsigned char) arr_8 [i_4 - 1]);
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    var_23 = ((/* implicit */unsigned int) arr_13 [i_4 + 1]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        var_24 = (!(((/* implicit */_Bool) arr_27 [i_9] [i_4 + 1] [(_Bool)1] [i_4] [i_4 + 3] [(unsigned char)15] [i_4 + 2])));
                        var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1672188890U)))) ? (((/* implicit */int) arr_6 [i_4 - 2] [i_4 + 1])) : (((/* implicit */int) arr_9 [i_4 + 2] [i_4 + 2]))));
                        arr_29 [i_7] [(signed char)4] [(signed char)4] = ((/* implicit */signed char) arr_17 [i_4 + 2] [i_9] [i_9]);
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_13 [i_4 + 3]))));
                    }
                    /* vectorizable */
                    for (short i_10 = 2; i_10 < 16; i_10 += 4) 
                    {
                        var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 2])) / (((/* implicit */int) arr_15 [i_4 + 3] [i_4 + 1]))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_10] [i_10 - 1] [i_4 - 2])) || (((/* implicit */_Bool) arr_17 [i_10] [i_10 - 1] [i_4 + 2]))));
                    }
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_21 [i_4 + 3] [i_4 + 1] [i_8]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) arr_8 [i_8]))))) : (arr_16 [i_4] [i_6] [i_4]))))));
                }
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_36 [12ULL] [i_6] [i_7] [(signed char)15] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_4] [i_4 - 2] [i_7]))));
                    var_30 = ((/* implicit */short) (-(((/* implicit */int) arr_7 [i_4 + 3] [i_4]))));
                }
                arr_37 [8] |= ((/* implicit */signed char) ((((((/* implicit */int) arr_13 [i_4 - 2])) != (((/* implicit */int) var_1)))) ? (((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)26806)))) : (((/* implicit */int) max((arr_13 [i_4 - 2]), (arr_13 [i_4 - 2]))))));
                var_31 ^= ((/* implicit */unsigned long long int) (+((((!(var_1))) ? (((/* implicit */int) ((short) arr_10 [i_4] [i_6]))) : (var_6)))));
            }
            for (signed char i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) var_12)))))) : (min((var_10), (((/* implicit */unsigned long long int) arr_28 [i_4 - 1] [i_4 + 1] [i_4 + 2]))))));
                var_33 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_27 [i_12] [i_12] [i_4 - 1] [1U] [i_4] [i_4 - 2] [i_4]), (arr_27 [i_12] [i_4] [i_4 + 3] [i_4] [i_4] [i_4 - 2] [i_4])))), (((((/* implicit */_Bool) arr_27 [i_12] [(unsigned short)13] [i_4 - 1] [i_4] [i_4] [i_4 + 3] [i_4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_27 [i_4] [i_4 + 1] [i_4 - 2] [i_4 + 2] [i_4 + 1] [i_4 - 1] [i_4]))))));
                var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_4] [i_4 + 1]))))))))));
            }
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 17; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    {
                        arr_46 [i_4] [i_6] [i_13] = ((/* implicit */unsigned long long int) (~(arr_43 [i_4 - 2] [i_6] [i_13])));
                        var_35 -= ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_18 [i_4 - 2] [i_4 - 2]))))));
                    }
                } 
            } 
            var_36 = ((/* implicit */short) ((((/* implicit */int) (short)26806)) >> (((((/* implicit */int) (short)-25165)) + (25189)))));
            var_37 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)45147)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53200))) : (713380780049345730LL))) < (((/* implicit */long long int) (-(arr_16 [i_4 - 2] [1] [i_4]))))));
        }
        for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
        {
            var_38 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_39 [i_4 + 1] [(signed char)12] [i_15] [(signed char)2])))) | (((/* implicit */int) min((((/* implicit */signed char) arr_8 [i_4 + 2])), (arr_30 [i_4 + 1] [i_4] [i_4] [i_15] [i_15] [i_15] [i_15]))))));
            var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((arr_39 [i_4] [i_4] [i_4] [10]), (((/* implicit */short) var_11))))) ? (((/* implicit */int) arr_27 [i_15] [(short)14] [i_4] [(signed char)7] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_40 [i_4 + 1] [i_4 + 3] [i_4])))))))));
            var_40 = ((/* implicit */unsigned short) min((var_40), (var_5)));
            var_41 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_31 [i_4] [i_4] [i_4 + 2] [i_15] [i_4] [i_4 + 2])))))));
        }
        for (unsigned char i_16 = 3; i_16 < 15; i_16 += 4) 
        {
            arr_52 [(short)13] [i_16 - 3] [i_16] = ((/* implicit */_Bool) min((max((((/* implicit */int) arr_22 [i_4 + 2] [(short)7])), (var_6))), ((~(((/* implicit */int) arr_33 [i_4 + 1] [i_16 + 2]))))));
            var_42 ^= ((/* implicit */signed char) var_3);
            var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_9 [i_4 + 2] [i_4 + 1])))))))));
            /* LoopSeq 2 */
            for (signed char i_17 = 2; i_17 < 14; i_17 += 1) 
            {
                var_44 &= ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_15 [i_17 + 2] [i_16 + 1]), (var_11))))));
                arr_56 [i_16] [(signed char)11] = ((/* implicit */_Bool) var_9);
            }
            for (short i_18 = 0; i_18 < 17; i_18 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_19 = 3; i_19 < 15; i_19 += 4) 
                {
                    var_45 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_54 [i_4] [i_19 - 1] [(signed char)7] [i_4 + 2])) ? (((/* implicit */int) arr_49 [i_4 - 1] [i_19 + 2] [i_18])) : (((/* implicit */int) arr_49 [i_4] [i_19 - 3] [i_18]))))));
                    var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_1)))))));
                    arr_62 [i_19] [i_16] [i_16] [i_4] = arr_7 [i_4 + 1] [i_18];
                    var_47 *= ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_38 [i_4 + 3] [i_16 - 2] [i_19]))))));
                    arr_63 [i_16] [i_4] [9LL] [i_18] [i_19] = ((/* implicit */unsigned char) ((long long int) (_Bool)0));
                }
                for (unsigned short i_20 = 0; i_20 < 17; i_20 += 4) 
                {
                    arr_68 [i_4] [i_16] [(unsigned short)9] [(_Bool)1] = ((/* implicit */signed char) max((((/* implicit */long long int) ((arr_24 [i_4 - 1] [i_4 + 2] [i_16 - 3] [i_16 - 3]) ? (((((/* implicit */_Bool) arr_9 [i_18] [i_20])) ? (((/* implicit */unsigned int) arr_43 [i_4] [12LL] [i_18])) : (arr_16 [3ULL] [i_16] [i_18]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_16] [i_20])))))), ((~(max((((/* implicit */long long int) (short)15961)), ((-9223372036854775807LL - 1LL))))))));
                    arr_69 [i_4] [i_16] [i_20] = ((/* implicit */signed char) (+(2568248489U)));
                    var_48 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                    arr_70 [i_4] [6LL] [i_16] [i_4] [i_20] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_17 [i_4] [i_16 - 2] [i_4 - 2])) ? (((/* implicit */int) arr_18 [i_4] [i_16])) : (((/* implicit */int) arr_18 [i_4] [i_4])))));
                }
                for (short i_21 = 1; i_21 < 13; i_21 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_22 = 1; i_22 < 14; i_22 += 2) 
                    {
                        arr_77 [5] [i_4] [i_16 - 3] [i_18] [i_21 + 4] [i_16] [(short)10] = ((/* implicit */unsigned long long int) arr_35 [(unsigned char)7] [i_16 - 2] [5] [i_22 + 1] [9U] [i_22]);
                        var_49 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_16 [i_4 - 2] [i_4 + 2] [i_4 - 1])))) ? (((arr_16 [i_4 + 3] [i_4 + 3] [i_4 + 3]) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) arr_16 [i_4 + 2] [i_4 - 1] [i_4 + 3])) ? (arr_16 [i_4 - 2] [i_4 - 2] [i_4 - 2]) : (arr_16 [i_4 + 1] [i_4 + 3] [i_4 + 1])))));
                    }
                    for (int i_23 = 2; i_23 < 15; i_23 += 1) 
                    {
                        arr_81 [i_4] [i_4] [i_16] [i_18] [0ULL] [i_21] [i_23 + 1] = ((/* implicit */signed char) arr_41 [i_4] [i_16 - 3] [(unsigned char)14] [(unsigned char)3]);
                        arr_82 [i_16] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_16 [9ULL] [i_4 - 2] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_4] [i_4] [(unsigned char)4] [6] [(unsigned char)4] [i_21] [i_23 - 1]))) : (arr_16 [(short)9] [(_Bool)1] [(short)15]))));
                        arr_83 [i_4] [i_16] [i_4] = ((/* implicit */long long int) (+((~((~(((/* implicit */int) arr_75 [i_4] [i_21] [i_23 - 1]))))))));
                    }
                    for (unsigned char i_24 = 0; i_24 < 17; i_24 += 2) /* same iter space */
                    {
                        var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_53 [i_21])) ? (((/* implicit */int) arr_79 [i_4] [2ULL] [i_18] [4U])) : (((/* implicit */int) var_1)))))));
                        var_51 = ((/* implicit */signed char) arr_27 [16ULL] [16ULL] [i_18] [(short)15] [i_21 + 4] [16ULL] [16ULL]);
                    }
                    for (unsigned char i_25 = 0; i_25 < 17; i_25 += 2) /* same iter space */
                    {
                        var_52 = ((/* implicit */long long int) (+(((/* implicit */int) (short)3840))));
                        arr_90 [i_16] [i_21] [(signed char)6] [(signed char)10] [i_18] [i_16] [i_16] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_32 [i_16])) ? (((/* implicit */int) arr_45 [i_4] [i_4])) : (((/* implicit */int) arr_78 [i_4] [i_4] [i_4] [i_4 + 2] [i_16 + 1] [i_25]))))));
                        var_53 = ((/* implicit */unsigned char) arr_32 [i_16]);
                        arr_91 [i_4] [i_16] [i_16] [i_21] [i_21] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_4 - 2] [i_4 + 3] [i_16 - 2] [i_21] [i_21 - 1] [i_21]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_4)))))));
                    }
                    arr_92 [i_16] [i_16] = ((/* implicit */int) (~((+(((((/* implicit */_Bool) arr_31 [i_4 + 2] [(_Bool)1] [i_18] [i_21] [(unsigned short)11] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_16]))) : (arr_67 [i_16])))))));
                    /* LoopSeq 1 */
                    for (signed char i_26 = 3; i_26 < 14; i_26 += 3) 
                    {
                        var_54 |= ((/* implicit */unsigned char) var_10);
                        arr_97 [i_4] [i_4] [i_4] [i_4] [i_16] = ((/* implicit */signed char) max((max(((~(((/* implicit */int) arr_13 [(signed char)12])))), (((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_60 [i_4] [i_16] [i_16 + 1] [i_4 + 1])) && (((/* implicit */_Bool) (-(arr_55 [i_16] [i_18] [i_21 + 2] [i_21 + 2])))))))));
                        var_55 = ((/* implicit */signed char) (-(((/* implicit */int) arr_9 [i_16] [i_18]))));
                    }
                }
                /* LoopSeq 1 */
                for (signed char i_27 = 1; i_27 < 16; i_27 += 4) 
                {
                    var_56 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_96 [i_4 + 2] [i_16 + 2] [i_27 + 1] [i_27] [(unsigned short)11] [i_16 - 3]) ? (((/* implicit */int) arr_98 [i_4] [i_4 - 2] [(unsigned char)10] [i_16 - 1] [i_27 + 1])) : (((/* implicit */int) arr_96 [i_4 + 1] [i_16] [i_27 + 1] [i_27] [3ULL] [i_16 - 1]))))) ? ((+(((/* implicit */int) min((((/* implicit */unsigned char) arr_28 [i_4] [i_16] [i_27 - 1])), (arr_66 [i_18] [(_Bool)1] [i_18] [i_18] [i_18] [i_18])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */int) arr_20 [i_18] [i_4 + 3]))))))))));
                    var_57 = ((/* implicit */signed char) (+(min((arr_64 [i_4] [i_4] [i_4 - 2] [i_16 - 1]), (arr_64 [(_Bool)1] [i_4] [i_4 - 1] [i_16 - 3])))));
                }
            }
        }
    }
}
