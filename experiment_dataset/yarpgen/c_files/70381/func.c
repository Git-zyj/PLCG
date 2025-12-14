/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70381
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
    var_19 = ((/* implicit */unsigned int) ((unsigned char) var_10));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [(short)4] &= ((/* implicit */unsigned char) ((unsigned long long int) arr_1 [i_0]));
        var_20 *= ((/* implicit */short) (~(arr_0 [i_0])));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_7 [(unsigned short)19] &= arr_0 [i_1];
        var_21 = ((((arr_2 [16ULL]) == (arr_0 [(unsigned short)17]))) ? (arr_6 [i_1]) : (((/* implicit */int) arr_1 [i_1])));
        var_22 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_1]))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
    {
        arr_11 [2LL] [0U] = ((/* implicit */unsigned char) max((arr_8 [i_2] [i_2 - 1]), (arr_8 [i_2 - 1] [i_2])));
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    arr_18 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */int) arr_12 [i_3]);
                    var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_16 [i_2 + 1] [i_3] [(_Bool)1] [i_3]), (arr_4 [i_2 + 1])))) ? (((/* implicit */long long int) ((int) var_15))) : (max((((/* implicit */long long int) 3804182203U)), (arr_16 [i_2 - 1] [(short)12] [i_3] [i_3])))));
                    var_24 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_2 [i_3])) ? (arr_2 [i_4]) : (((/* implicit */unsigned long long int) arr_17 [i_4] [i_3] [i_3] [i_2 + 1])))), (min((((/* implicit */unsigned long long int) arr_16 [i_2] [i_3] [i_4] [i_2])), (arr_5 [(unsigned char)10]))))) | (((/* implicit */unsigned long long int) arr_8 [(short)7] [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_12 [18LL])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_2))))))) == (((((((/* implicit */unsigned long long int) arr_9 [i_2])) - (arr_5 [i_2]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5] [i_6])) || (((/* implicit */_Bool) arr_0 [i_4]))))))))));
                                var_26 = ((/* implicit */unsigned int) (+(min((arr_10 [i_6 - 2]), (arr_10 [i_6 - 2])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        var_27 *= ((/* implicit */long long int) ((max((arr_27 [i_7]), (arr_27 [i_7]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_7])) || (((/* implicit */_Bool) arr_27 [i_7]))))))));
        var_28 |= ((arr_2 [i_7]) - (((((arr_2 [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) >> (((((((/* implicit */int) arr_24 [i_7])) + (((/* implicit */int) var_2)))) + (1844))))));
        arr_28 [i_7] [i_7] = ((/* implicit */int) arr_24 [i_7]);
        /* LoopSeq 4 */
        for (int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)32961)), (2128698834U)))) ? ((-(4128767553U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)511)))));
            arr_32 [8U] [i_7] [i_8] &= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (arr_29 [i_7] [i_8]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))));
            var_30 = ((/* implicit */_Bool) min((1524187813U), (((/* implicit */unsigned int) (signed char)127))));
            var_31 = ((/* implicit */short) ((((arr_29 [i_7] [i_7]) > (arr_29 [i_7] [i_8]))) ? (min((arr_29 [i_7] [i_8]), (arr_29 [i_8] [i_7]))) : ((+(arr_29 [(signed char)2] [(signed char)2])))));
        }
        for (unsigned int i_9 = 2; i_9 < 20; i_9 += 4) 
        {
            var_32 |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
            /* LoopSeq 3 */
            for (long long int i_10 = 2; i_10 < 21; i_10 += 3) 
            {
                arr_37 [i_7] [18] [i_7] [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                var_33 *= ((/* implicit */unsigned char) min((31U), (((/* implicit */unsigned int) (unsigned short)37782))));
                var_34 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_10])) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_34 [i_7])), (var_4))))))) + (((/* implicit */int) ((_Bool) var_10)))));
            }
            for (short i_11 = 1; i_11 < 21; i_11 += 3) 
            {
                var_35 = ((/* implicit */int) arr_38 [i_7] [i_7] [i_9 + 2] [i_11]);
                var_36 = ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_7] [i_7] [i_7] [i_7]))) + (arr_31 [i_9 + 2] [i_9 - 2])))));
            }
            for (long long int i_12 = 1; i_12 < 21; i_12 += 2) 
            {
                arr_43 [i_7] [i_9] [i_9 - 2] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [(unsigned short)9] [i_7] [4LL])) ? (((/* implicit */int) var_2)) : (((arr_35 [i_7] [i_12 - 1] [(_Bool)1]) + (arr_35 [i_7] [i_12 + 1] [(signed char)7])))));
                arr_44 [i_7] [i_12 - 1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned int) arr_38 [i_12] [i_12] [i_12] [i_9 + 2]))), (max((var_9), (((/* implicit */unsigned long long int) var_15))))));
                var_37 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)2973)), ((unsigned short)37798)));
                var_38 = ((/* implicit */long long int) max((var_38), (arr_31 [i_7] [i_12])));
            }
        }
        for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            var_39 = ((/* implicit */short) ((unsigned char) arr_29 [i_7] [i_7]));
            var_40 *= ((/* implicit */signed char) max((min(((!(((/* implicit */_Bool) arr_26 [i_7])))), ((!(((/* implicit */_Bool) arr_47 [i_7] [i_7])))))), ((!(((/* implicit */_Bool) arr_47 [i_7] [i_13]))))));
            var_41 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_7])) || (((/* implicit */_Bool) arr_26 [i_7])))))));
        }
        for (long long int i_14 = 2; i_14 < 20; i_14 += 2) 
        {
            var_42 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (896809994) : (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 22; i_15 += 4) 
            {
                for (long long int i_16 = 0; i_16 < 22; i_16 += 4) 
                {
                    {
                        var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) var_14))));
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 1) 
                        {
                            arr_61 [i_7] [21U] [i_15] [(short)21] [21U] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_14 + 1])) || (((/* implicit */_Bool) arr_26 [i_14 + 2]))))), ((-(((/* implicit */int) arr_26 [i_14 + 1]))))));
                            var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_42 [i_14 + 2])) ? (arr_42 [i_14 - 1]) : (((/* implicit */unsigned int) arr_58 [i_7] [i_7] [i_14 + 1] [i_16] [i_17])))), (((/* implicit */unsigned int) arr_56 [i_14] [i_14])))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_18 = 0; i_18 < 22; i_18 += 3) 
                        {
                            arr_64 [2LL] [i_15] &= ((/* implicit */unsigned int) ((int) (-(max((((/* implicit */unsigned long long int) arr_29 [i_7] [i_7])), (arr_0 [i_15]))))));
                            arr_65 [i_15] [i_14] [(short)0] [i_14] [i_18] [i_18] [2] = ((/* implicit */short) min((-2355562804560707270LL), (((/* implicit */long long int) 2147483633))));
                            var_45 = ((/* implicit */short) max((((/* implicit */int) var_18)), ((~((+(((/* implicit */int) arr_52 [i_14] [i_18]))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_19 = 2; i_19 < 20; i_19 += 4) 
                        {
                            var_46 = ((/* implicit */unsigned int) arr_58 [i_14] [i_14] [i_14] [i_14 - 2] [i_19 - 1]);
                            var_47 = ((/* implicit */signed char) arr_49 [i_19 - 2] [i_19 - 2] [i_19]);
                        }
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned char i_20 = 4; i_20 < 13; i_20 += 3) 
    {
        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)63)))))));
        /* LoopNest 3 */
        for (signed char i_21 = 0; i_21 < 14; i_21 += 2) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (signed char i_23 = 0; i_23 < 14; i_23 += 3) 
                {
                    {
                        var_49 = ((/* implicit */unsigned short) ((arr_2 [i_20 - 3]) | (arr_77 [i_20 - 3] [i_20 + 1] [i_20 - 3])));
                        var_50 ^= ((/* implicit */unsigned long long int) (~(arr_75 [i_20 - 4] [i_20 + 1] [i_20 - 3] [i_20 + 1])));
                        var_51 = ((/* implicit */unsigned char) arr_12 [i_20]);
                    }
                } 
            } 
        } 
        var_52 = ((/* implicit */_Bool) ((unsigned long long int) arr_30 [i_20 - 2] [i_20]));
        arr_80 [i_20] [i_20] = ((/* implicit */unsigned int) var_13);
        arr_81 [i_20] = ((/* implicit */unsigned int) arr_66 [i_20] [i_20 - 3] [(short)3] [i_20] [i_20 - 2]);
    }
    for (unsigned short i_24 = 0; i_24 < 19; i_24 += 2) 
    {
        var_53 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_16 [10U] [i_24] [i_24] [i_24]))))));
        /* LoopNest 2 */
        for (unsigned char i_25 = 1; i_25 < 18; i_25 += 4) 
        {
            for (unsigned long long int i_26 = 0; i_26 < 19; i_26 += 3) 
            {
                {
                    arr_89 [i_25] [17U] [i_26] [i_25] = ((/* implicit */unsigned char) arr_24 [i_25 - 1]);
                    var_54 = ((/* implicit */unsigned long long int) var_8);
                    arr_90 [i_24] [i_24] [i_24] |= ((/* implicit */unsigned char) max((var_7), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)233)), (2147483642))))));
                    var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) arr_66 [i_25 + 1] [19U] [i_26] [i_24] [i_25]))));
                    var_56 = ((/* implicit */unsigned char) arr_60 [i_24] [i_25 + 1] [i_26] [i_26] [i_24]);
                }
            } 
        } 
    }
}
