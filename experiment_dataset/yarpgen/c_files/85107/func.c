/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85107
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
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((min((((/* implicit */int) (unsigned short)14546)), (arr_9 [i_0] [i_1] [i_2] [i_3] [i_4]))) / (((arr_9 [i_0] [i_1] [i_3] [i_3] [i_4]) / (((/* implicit */int) (short)-1524))))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29671)) ? (1538542099488034004ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76)))))) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (min((((/* implicit */unsigned long long int) (signed char)-75)), (var_3)))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)1523)) ? (1023U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                var_14 = ((/* implicit */long long int) (((-(var_9))) >> ((((((!(((/* implicit */_Bool) (signed char)-110)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))) ^ (var_3))))) - (16746585649320863637ULL)))));
                /* LoopSeq 3 */
                for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        arr_20 [i_1] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned int) arr_9 [15] [i_1] [i_1] [i_1] [9])) > (var_8))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))) : ((+(((/* implicit */int) (unsigned short)40598)))))) > ((~(((/* implicit */int) min((((/* implicit */unsigned char) var_0)), (var_10))))))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)40589))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) min((((/* implicit */signed char) var_5)), ((signed char)-90)))) * (((/* implicit */int) ((signed char) var_7)))))));
                        arr_21 [i_1] [i_1] [i_5] [i_5] = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_1] [i_5] [i_5] [i_5]);
                    }
                    for (unsigned int i_7 = 2; i_7 < 14; i_7 += 3) 
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_7 + 1] [i_7 + 2] [i_5] [i_7] [i_7] [i_5])) ? (arr_10 [i_0 + 1] [i_1] [i_0 + 1] [i_0] [i_0 + 1] [i_1]) : (((/* implicit */int) arr_7 [i_1] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-17509))))) : (((((/* implicit */int) var_6)) + (arr_10 [i_0] [i_7] [i_0] [i_7] [i_0 + 1] [i_7])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 3; i_8 < 16; i_8 += 3) 
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1002U)) - ((+(((unsigned long long int) var_4))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((signed char) (signed char)93)), ((signed char)-114))))) | (var_8)));
                            arr_27 [i_8 - 1] [i_1] [i_7] [i_1] [i_1] [(unsigned char)13] = ((/* implicit */signed char) ((((arr_0 [i_0 + 1] [i_7 - 1]) << (((((/* implicit */int) (signed char)-100)) + (157))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) var_8)) : (arr_13 [i_5] [8LL] [i_5] [i_8] [i_8] [i_5] [(_Bool)1])))))))));
                        }
                        arr_28 [i_0 - 1] [i_1] [i_5] [i_1] [i_7] = ((/* implicit */short) (~(((/* implicit */int) (short)-32767))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            arr_32 [i_1] [(signed char)15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((var_0) ? (((/* implicit */int) (unsigned short)34171)) : (((/* implicit */int) (unsigned char)15))))))) || (var_0)));
                            var_19 = ((/* implicit */signed char) ((var_11) < (((/* implicit */long long int) ((/* implicit */int) ((arr_23 [i_1] [(unsigned char)7]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(signed char)2] [i_1])))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            var_20 ^= ((/* implicit */short) arr_18 [i_7 - 1] [15LL] [i_0] [i_7 - 1] [i_10]);
                            var_21 -= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (short)32762)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7] [i_1]))) : (var_9))));
                            arr_36 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100)))));
                            arr_37 [i_0] [i_0] [(signed char)15] [(unsigned char)6] [i_1] [i_7 + 1] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) : (var_11)));
                            var_22 = ((unsigned short) arr_35 [i_1] [i_7 - 2] [i_10] [i_10] [i_10] [i_10]);
                        }
                    }
                    for (unsigned short i_11 = 3; i_11 < 14; i_11 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 17; i_12 += 3) 
                        {
                            arr_42 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_39 [i_11 + 1] [i_0 + 1] [i_0 - 1] [6] [i_0 + 1]);
                            var_23 &= ((/* implicit */unsigned short) var_5);
                        }
                        arr_43 [i_11] [i_1] [i_1] [i_0] = ((/* implicit */short) (-(var_3)));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 13; i_13 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)110)) || (((/* implicit */_Bool) 2135157495)))))));
                        arr_47 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) var_8)) != (arr_16 [i_13 + 1] [i_1] [i_1] [i_0 + 1])));
                        var_25 = ((/* implicit */unsigned short) (+(arr_17 [(_Bool)1] [i_1] [i_5] [i_13 + 2] [i_13 + 4] [i_13 - 1])));
                        var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_2)))))));
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_1])) ? (arr_38 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    }
                    /* vectorizable */
                    for (signed char i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        arr_50 [i_0 + 1] [i_0 + 1] [i_5] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [1U] [i_1] [i_5] [i_14] [i_0 + 1] [i_14])) ? (((/* implicit */int) arr_11 [i_5] [i_0])) : (((/* implicit */int) var_10))));
                        var_28 = ((/* implicit */unsigned char) (short)-32767);
                        var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-12))));
                        arr_51 [i_0 - 1] [i_1] [i_0 - 1] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((signed char) arr_46 [i_0 - 1] [i_0 + 1] [i_0 - 1]));
                        var_30 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) arr_46 [i_0 - 1] [i_1] [i_14])) : (((/* implicit */int) (signed char)-1)))) + (((/* implicit */int) (signed char)-110))));
                    }
                    /* vectorizable */
                    for (long long int i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        var_31 *= ((((/* implicit */_Bool) arr_6 [i_15])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-12)) ? (3198842691U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)110)))))));
                        var_32 = (~(arr_3 [i_0 - 1] [i_0 + 1]));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 3) 
                        {
                            var_33 = ((/* implicit */_Bool) ((arr_23 [i_0 - 1] [i_0 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) 404190964945158156ULL))))))));
                            var_34 = ((/* implicit */int) min((var_34), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)17154))))) ? ((+(2035208633))) : (((/* implicit */int) var_10))))));
                        }
                        var_35 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-100))) | (8891178283438287610ULL)));
                    }
                }
                for (short i_17 = 0; i_17 < 17; i_17 += 3) 
                {
                    var_36 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((arr_10 [i_0] [i_1] [i_17] [i_0] [i_0] [i_1]), (1891044491)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned long long int) var_1)), (var_3))))), (((/* implicit */unsigned long long int) (signed char)115))));
                    var_37 = ((/* implicit */signed char) ((unsigned short) max((var_7), ((signed char)-100))));
                    arr_59 [i_1] [i_1] [3] [i_17] = (+(((/* implicit */int) (_Bool)1)));
                }
                /* vectorizable */
                for (signed char i_18 = 2; i_18 < 16; i_18 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 3; i_19 < 15; i_19 += 3) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                arr_68 [i_0] [(unsigned short)5] [i_20] [i_1] [i_19] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_40 [i_18] [i_18] [i_0 - 1] [i_0 - 1])))));
                                arr_69 [i_1] [i_18 - 1] [i_1] = ((/* implicit */unsigned short) ((signed char) (+(63))));
                                arr_70 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_63 [i_19 - 3] [i_20] [i_18] [i_18 - 1] [(short)3])) ? (((((var_11) + (9223372036854775807LL))) >> (((/* implicit */int) arr_25 [i_18] [i_1] [i_18] [i_19] [i_19])))) : (arr_8 [i_0] [i_1] [i_19 - 3])));
                                var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)20)))))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */short) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_53 [i_0] [i_1] [i_1] [i_0 + 1]))));
                }
            }
        } 
    } 
    var_40 = ((/* implicit */signed char) var_8);
}
