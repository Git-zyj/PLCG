/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73138
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) var_4);
                    var_15 = arr_2 [(short)17] [(short)17];
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [(unsigned char)5] [i_2] [i_2] [15ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) (signed char)-13)) - (((/* implicit */int) arr_6 [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_0]))))) ? ((+(((/* implicit */int) arr_6 [(_Bool)1])))) : ((-(((/* implicit */int) arr_10 [i_0] [i_1] [i_2])))))) : (((((((/* implicit */int) var_3)) - (((/* implicit */int) (signed char)4)))) + (arr_1 [i_3 + 2] [i_3 + 2])))));
                                var_16 = ((((((/* implicit */_Bool) var_12)) ? (arr_11 [i_3 + 2] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 + 1]))))) - ((-(arr_11 [i_3 + 1] [i_3 + 1]))));
                                var_17 = ((((/* implicit */int) (unsigned short)28494)) - (((/* implicit */int) (signed char)-13)));
                                arr_13 [i_1] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */unsigned long long int) (~(arr_1 [i_3 + 1] [i_3 + 2])))) : (arr_11 [i_3 + 2] [i_3 + 2])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_1] [7] [(unsigned char)15] [i_5] [16U] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [(unsigned char)8] [i_5] [i_6])) ? (((/* implicit */int) arr_16 [(_Bool)1])) : (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_5] [i_6])))));
                                var_18 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)24)) - (((/* implicit */int) var_0)))))))) > (((/* implicit */int) arr_2 [20ULL] [20ULL])));
                                arr_20 [i_0] [i_0] [(signed char)12] [i_0] [i_0] = (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_5]) : (arr_0 [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (signed char)-1)))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            for (long long int i_9 = 2; i_9 < 9; i_9 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        var_20 = ((((/* implicit */_Bool) (+(0LL)))) ? (((var_13) - (((/* implicit */long long int) ((/* implicit */int) (signed char)5))))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_9 - 1]))));
                        arr_29 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) min(((-(arr_28 [0] [4] [i_9 - 2] [i_10] [7U] [i_9 + 1]))), (((((/* implicit */unsigned long long int) var_4)) * (arr_28 [i_7] [(signed char)1] [i_9] [i_10] [i_9] [i_9 - 1])))));
                        arr_30 [i_7] [i_8] [8LL] [i_10] = min((((((/* implicit */_Bool) (signed char)-2)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) arr_10 [i_8] [i_8] [i_9 - 1])));
                        arr_31 [i_9 - 1] [i_9 - 1] [i_9] [i_9] [i_9 + 1] [i_9 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) min((var_1), (arr_17 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9] [i_9 - 1])))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_10)) > (((/* implicit */int) var_1)))) ? (((/* implicit */int) (signed char)-43)) : (arr_1 [i_7] [i_8])))) : ((+(min((((/* implicit */long long int) (signed char)-5)), ((-9223372036854775807LL - 1LL))))))));
                        var_21 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_27 [i_9 - 2] [(unsigned short)5] [i_7] [(signed char)6])) * (((/* implicit */int) arr_27 [i_9 + 1] [(unsigned char)9] [i_9] [i_10])))), (((/* implicit */int) (signed char)3))));
                    }
                    for (short i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-14)) ? (((((/* implicit */_Bool) arr_17 [i_11] [i_8] [i_11] [(unsigned char)3] [i_8])) ? (((/* implicit */int) arr_27 [i_11] [(unsigned short)3] [i_11] [i_11])) : (((/* implicit */int) arr_16 [i_7])))) : (((/* implicit */int) var_8))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_9 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-43))));
                            var_24 = ((/* implicit */_Bool) var_1);
                        }
                        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_17 [(unsigned char)14] [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 - 1]), (((/* implicit */short) arr_14 [i_7] [i_9 + 1] [i_9] [i_11] [i_7] [(_Bool)1]))))) ? (((((/* implicit */_Bool) max(((unsigned char)250), (((/* implicit */unsigned char) (signed char)-6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_42 [i_11]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) (short)20149)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)10)))))))));
                            arr_43 [i_7] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((max((((/* implicit */unsigned int) (signed char)-43)), (536870911U))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551594ULL)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) (signed char)9)))))))), (min((((/* implicit */long long int) (signed char)-43)), ((-9223372036854775807LL - 1LL))))));
                            var_26 -= ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_25 [i_9 - 2] [i_9 - 2] [i_9 + 1]), (arr_25 [i_9 - 2] [i_9 - 2] [i_9 + 1])))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_38 [i_9 - 1])))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
                        {
                            arr_46 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_8] [i_9 + 1] [i_9 + 1] [9] [i_11]))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned char)4] [(unsigned char)4] [20]))) / (11U)))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_28 [i_9 + 1] [(unsigned short)4] [i_9] [i_9] [i_9 - 1] [i_9 - 2]) : (arr_28 [i_9 - 2] [i_9 - 2] [(unsigned char)8] [i_9] [i_9] [i_9 - 1])));
                        }
                        /* vectorizable */
                        for (unsigned int i_15 = 1; i_15 < 9; i_15 += 3) 
                        {
                            arr_49 [i_7] [i_8] [i_8] [i_9 - 1] [5ULL] [i_15] [i_15] = ((/* implicit */short) ((long long int) arr_22 [i_9 - 2] [i_9 - 1]));
                            arr_50 [i_7] [i_8] [i_11] [i_11] = ((/* implicit */long long int) var_6);
                            var_28 = ((/* implicit */int) arr_48 [i_7] [i_7] [i_7] [i_7] [(short)5] [i_7] [(unsigned short)2]);
                            arr_51 [i_7] [i_7] [i_7] [i_7] [(short)3] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_9 - 2] [i_9 + 1])))));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_16 = 2; i_16 < 9; i_16 += 4) 
                        {
                            arr_54 [i_7] [i_7] [(unsigned char)3] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((11U), (((/* implicit */unsigned int) arr_10 [i_9 - 2] [i_9 - 2] [i_16 - 1]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))) / (499582910021721480ULL))) : (((((/* implicit */unsigned long long int) var_4)) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_11] [i_8] [i_9] [i_7] [i_16]))) * (35ULL)))))));
                            var_29 += ((/* implicit */int) arr_9 [20LL] [i_8] [i_9] [i_11] [i_16]);
                            var_30 += (((((!(((/* implicit */_Bool) var_11)))) ? (((50ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7] [i_9]))) : (arr_45 [(unsigned char)9] [i_8] [i_8] [i_8] [7ULL])))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1165993336604181726ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967285U)))))));
                        }
                        for (signed char i_17 = 0; i_17 < 10; i_17 += 2) 
                        {
                            var_31 = ((/* implicit */long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_48 [i_7] [i_7] [i_8] [(signed char)1] [i_9] [i_11] [3])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_5 [i_7])))) > (((/* implicit */int) ((unsigned short) var_0))))))));
                            arr_57 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (((-(18446744073709551608ULL))) / (var_7)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min(((signed char)27), (((/* implicit */signed char) ((-1560374946) > (((/* implicit */int) (short)-27835))))))))));
                            var_32 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) (signed char)-46)))));
                            arr_58 [i_7] [(short)5] [i_7] [(_Bool)1] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43))) + (17ULL))) * (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) var_8)), (11U))) >> ((((~(((/* implicit */int) (unsigned char)116)))) + (118))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_61 [i_7] [i_8] [i_9 - 2] [i_11] [i_18] = ((/* implicit */unsigned short) (+(15908427902210580951ULL)));
                            arr_62 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_7] [i_8] [(unsigned char)3])) - (((/* implicit */int) (signed char)-18))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */int) arr_10 [i_7] [(unsigned char)19] [i_11])) - (((/* implicit */int) arr_15 [i_7] [i_8] [i_9] [i_11] [i_11]))))));
                            var_33 = ((/* implicit */unsigned int) arr_27 [i_7] [(short)9] [(signed char)3] [i_11]);
                        }
                    }
                    arr_63 [i_7] [i_8] [7] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_9] [i_9 + 1] [i_9] [(_Bool)1] [i_9 + 1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 2] [i_9])) ? (((/* implicit */int) arr_15 [i_9 + 1] [i_9] [i_9 - 1] [i_9 + 1] [i_9])) : (((/* implicit */int) arr_15 [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_9 - 1])))))));
                }
            } 
        } 
        arr_64 [(unsigned short)5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [i_7] [i_7])) ? (((/* implicit */int) arr_47 [i_7] [i_7])) : (((/* implicit */int) arr_47 [i_7] [i_7]))))), (((((/* implicit */_Bool) (unsigned short)58555)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58555))) : (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (unsigned short)58555)) : (-300135053))))))));
        var_34 = ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)27))))) ? (((/* implicit */int) arr_6 [i_7])) : (((/* implicit */int) arr_27 [i_7] [i_7] [i_7] [i_7])))) > (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)27)) * (((/* implicit */int) arr_34 [(short)7] [i_7] [i_7] [i_7]))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) arr_38 [i_7])))));
    }
}
