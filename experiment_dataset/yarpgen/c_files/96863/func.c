/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96863
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) 15127969559589319784ULL))))), (max((arr_1 [i_0]), (arr_1 [i_0])))))) >> ((((-(var_12))) - (2980354969329558293LL)))));
                arr_4 [i_0] = ((/* implicit */short) (((-(1614739690))) < (((/* implicit */int) (signed char)67))));
                arr_5 [(unsigned short)6] [0U] [(unsigned short)6] = ((/* implicit */unsigned int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (309097436U) : (var_1)))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) max((((unsigned long long int) arr_6 [i_0] [i_0] [i_0] [i_0])), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)32)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) < (15606005421897538279ULL)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) 1654200926U);
                        arr_13 [i_0] [i_0] [i_0] = ((/* implicit */int) var_6);
                    }
                    arr_14 [i_0] = ((/* implicit */unsigned short) var_14);
                }
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    arr_19 [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)12985)) || (((/* implicit */_Bool) arr_1 [i_4]))));
                    arr_20 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_4]))))) ? (((((/* implicit */int) (short)7740)) & (var_14))) : (max((((/* implicit */int) arr_1 [i_1])), (-1614739691)))));
                }
                for (short i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 1) 
                        {
                            {
                                arr_29 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) arr_27 [i_0] [i_0]);
                                arr_30 [i_0] [i_1] [i_0] [8] [i_7] [i_7] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)13090)) * (((/* implicit */int) (short)7753)))) * (((/* implicit */int) (unsigned short)0))))) >= (arr_17 [i_1] [i_6] [i_7 - 2])));
                                arr_31 [(unsigned short)0] [i_5] [i_5] [i_5] [i_6] [i_7 - 1] [i_7 + 1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7 + 1] [i_7 + 1] [i_7])) ? ((+(((/* implicit */int) (short)28)))) : (((/* implicit */int) (!((_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_32 [i_0] [i_5] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((int) (+(var_0))))), (((((/* implicit */unsigned long long int) arr_26 [i_1] [i_5] [i_5])) / (18446744073709551610ULL)))));
                    arr_33 [i_0] &= ((/* implicit */unsigned short) (short)32263);
                    arr_34 [i_5] = ((/* implicit */_Bool) (unsigned char)83);
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            for (unsigned short i_10 = 2; i_10 < 16; i_10 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                    {
                        arr_46 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_10 - 2] [i_9 + 1] [i_9 + 1])) ? (((/* implicit */int) arr_39 [i_9 + 1] [i_11])) : (((/* implicit */int) arr_37 [i_10 - 1]))));
                        arr_47 [(short)10] [i_9 + 1] [i_11] [2ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_10 + 1])) ? (((/* implicit */int) arr_38 [i_8])) : (((/* implicit */int) arr_38 [i_8]))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        var_18 ^= 2400242911765336926LL;
                        arr_50 [i_9] [(short)5] [i_9 + 1] [i_9] = ((/* implicit */signed char) (((~(min((7214352768247971139ULL), (2030563714424782893ULL))))) ^ (((/* implicit */unsigned long long int) max((2400242911765336937LL), (((/* implicit */long long int) (signed char)68)))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        var_19 = ((/* implicit */long long int) (~(((2030563714424782893ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
                        arr_54 [i_13] [i_13] [i_10] [i_8] [i_8] = ((/* implicit */unsigned short) arr_44 [i_13] [i_10 + 2] [i_9 + 1] [i_8] [i_8]);
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_57 [i_8] [i_8] [i_9 + 1] [i_10 + 1] [i_14] [i_14] = ((/* implicit */signed char) -1614739671);
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 2; i_15 < 14; i_15 += 1) 
                        {
                            arr_60 [i_15] [i_14] [i_15] [(short)2] [(short)2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_0))))));
                            arr_61 [i_8] [i_8] [13ULL] [i_15] [i_14] [(unsigned short)7] = ((/* implicit */short) min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7741)))))) ? (arr_52 [i_8] [i_9 + 1] [i_10 - 1] [i_14] [11ULL] [11ULL]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_15 + 2] [i_14] [i_8])) ? (arr_44 [i_15 - 1] [i_9 + 1] [i_10 + 1] [i_14] [i_14]) : (((/* implicit */int) arr_53 [i_9] [i_9] [i_14] [i_15 - 1])))))))));
                        }
                        for (short i_16 = 0; i_16 < 18; i_16 += 3) 
                        {
                            arr_65 [i_8] [i_9] [i_10] [i_16] [5] [i_16] = ((/* implicit */int) arr_59 [(unsigned char)4] [i_8] [i_9] [i_10] [i_10 - 1] [3] [i_16]);
                            arr_66 [i_16] [i_9] [i_10] [i_14] [i_14] [(_Bool)1] [i_16] = ((/* implicit */short) max((((/* implicit */int) ((arr_40 [i_16] [i_8] [i_8]) >= (2030563714424782893ULL)))), (((((/* implicit */int) (unsigned short)60637)) & (((/* implicit */int) (short)20889))))));
                            arr_67 [i_16] [i_14] [(_Bool)1] [i_9] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_10 - 1] [i_10 + 2] [i_10 - 1])) || (((/* implicit */_Bool) ((arr_42 [i_10 + 2] [i_10 - 2] [i_10 + 2]) ^ (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
                            arr_68 [i_8] [i_9 + 1] [i_16] [i_14] [5ULL] = ((/* implicit */signed char) var_9);
                        }
                        arr_69 [i_14] [(short)15] [i_9 + 1] [i_9] [i_8] = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-4074)))))))), (((max((2703629127U), (((/* implicit */unsigned int) arr_55 [i_8])))) - (3616771258U)))));
                        arr_70 [i_8] [i_9 + 1] [i_10] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) (~(min((min((2400242911765336936LL), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 13697526917406696494ULL)))))))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 3) 
                    {
                        var_20 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)53450))));
                        var_21 ^= ((/* implicit */int) 4294967295U);
                        arr_73 [i_8] [i_9] [i_9] [i_17] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((arr_56 [i_8] [i_10 - 1]) / (((/* implicit */int) arr_48 [(unsigned short)15] [i_10 - 1] [(unsigned short)15] [i_9 + 1]))))), (var_10)));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_4);
}
