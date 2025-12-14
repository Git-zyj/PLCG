/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87218
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
    var_10 = ((max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -504474324)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_6)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */_Bool) arr_5 [i_0]);
                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(var_3))), (min((((/* implicit */unsigned long long int) var_8)), (arr_1 [i_0])))))) ? (max((((/* implicit */long long int) min((((/* implicit */signed char) arr_4 [i_0] [i_1] [i_1])), (var_5)))), (min((-9213850417920315294LL), (((/* implicit */long long int) var_1)))))) : (((/* implicit */long long int) max((((/* implicit */int) ((short) 4213906503U))), (((int) var_0)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        for (signed char i_3 = 3; i_3 < 12; i_3 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_12 [i_2] [i_2] [i_3] [i_4] = (unsigned char)64;
                    arr_13 [i_2] [i_3] [i_2] = (-(((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2]))) : ((+(var_6))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 9; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 9; i_6 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_7 [i_4]))))))) ? ((~(((((/* implicit */_Bool) arr_5 [i_2])) ? (var_6) : (arr_0 [i_3] [i_4]))))) : ((~(((((/* implicit */_Bool) arr_3 [i_4] [i_5])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                                var_14 |= ((/* implicit */unsigned char) arr_7 [i_2]);
                                arr_18 [11LL] [i_3] [i_3] [i_2] [i_5 + 3] [i_6 + 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_5 [i_2]) / (arr_5 [i_2]))))));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 1] [i_2] [i_2 + 1] [i_2]))) : (arr_14 [i_2])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((arr_0 [i_2] [(unsigned short)11]) != (((/* implicit */long long int) 3538343228U))))) : (((((/* implicit */_Bool) (unsigned short)23406)) ? (arr_5 [i_2]) : (arr_5 [i_2])))))) : ((+(1638890677U)))));
                                arr_19 [i_2] [i_3 - 1] [i_2] [i_3 - 1] [11U] [i_3 - 1] [i_6] = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) arr_17 [i_6 - 2] [i_6 - 1] [i_6] [i_6] [i_6 + 3]))), (max((2147483647), (((/* implicit */int) (unsigned char)47))))));
                            }
                        } 
                    } 
                    arr_20 [i_2] [i_2] [i_4] = ((/* implicit */short) (_Bool)1);
                }
                for (long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    var_16 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_7] [i_3] [(signed char)5] [i_2])) - (arr_5 [i_7])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_3 + 1] [i_7] [i_7] [i_2]))) : (((((/* implicit */_Bool) arr_2 [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_1 [i_7]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_23 [i_3]), (((/* implicit */int) arr_17 [i_7] [i_7] [i_3] [i_2 + 1] [i_2 + 1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_2] [i_3 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_14 [i_7])))) : (((long long int) arr_21 [i_2] [i_2] [i_2] [i_2 + 1])))))));
                    arr_24 [i_7] [i_3] [i_7] |= ((/* implicit */int) max((min((var_3), (((/* implicit */unsigned long long int) arr_2 [i_7] [i_7])))), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_1)))))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_17 += ((/* implicit */unsigned char) (signed char)-13);
                    /* LoopSeq 3 */
                    for (short i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 13; i_10 += 3) 
                        {
                            var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)23415)) : (504474324))), (((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (((/* implicit */int) arr_8 [10LL] [10LL])) : (((/* implicit */int) var_1))))))) ? (((((/* implicit */int) arr_9 [i_2 + 1] [i_3] [i_10])) * (((/* implicit */int) arr_7 [i_10])))) : (((/* implicit */int) (short)-5692))));
                            var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((int) arr_4 [i_2] [i_2 + 1] [i_3 + 1]))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))), (arr_1 [i_2])))));
                        }
                        /* LoopSeq 1 */
                        for (int i_11 = 0; i_11 < 13; i_11 += 1) 
                        {
                            var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) arr_33 [i_11] [i_11] [i_11] [7LL] [i_9] [i_2 + 1] [i_2 + 1])))) : (max((((/* implicit */int) arr_16 [i_2 + 1] [i_3] [i_3 + 1] [(unsigned short)10] [(unsigned short)10])), (((((/* implicit */_Bool) arr_3 [i_2] [i_8])) ? (((/* implicit */int) arr_16 [i_8] [i_8] [4ULL] [(_Bool)1] [i_8])) : (((/* implicit */int) (unsigned char)50))))))));
                            arr_34 [i_2] [i_3 + 1] [i_8] [4ULL] [4ULL] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) == (min((arr_1 [(_Bool)1]), (arr_1 [(unsigned char)10])))));
                            arr_35 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] = (i_2 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_11 [i_2]) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) arr_11 [i_2]))))) ? ((+(((((/* implicit */int) arr_8 [i_9] [i_2])) << (((((/* implicit */int) arr_3 [i_3] [i_9])) - (50523))))))) : (((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_11 [i_2]) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) arr_11 [i_2]))))) ? ((+(((((((/* implicit */int) arr_8 [i_9] [i_2])) + (2147483647))) << (((((((/* implicit */int) arr_3 [i_3] [i_9])) - (50523))) - (3))))))) : (((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) var_5)))))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */long long int) var_8)), (var_6))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)42))))) * (arr_6 [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                            var_22 = ((/* implicit */_Bool) (signed char)0);
                        }
                        var_23 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_2 + 1] [i_2 + 1] [4U])) ? (((((/* implicit */_Bool) arr_15 [i_8] [0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [6LL] [i_8] [i_3])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [i_2] [i_3] [i_8] [i_9])), (arr_33 [i_2] [i_2] [i_3] [i_8] [i_8] [i_9] [i_9]))))))) ? (((((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [(signed char)10] [i_9] [i_3] [(signed char)4] [i_8]))))) | (((/* implicit */long long int) arr_30 [i_2] [i_8] [0])))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_29 [i_3] [i_3 - 1] [i_3] [(unsigned char)2] [i_3 - 3] [i_3 - 3])) ? (((/* implicit */int) arr_10 [(_Bool)1] [i_3] [i_8] [(_Bool)1])) : (((/* implicit */int) arr_7 [i_8])))))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        var_24 ^= ((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) -504474317)))))) ? ((+(max((16667297933844199503ULL), (7167076976142410695ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_3] [i_8]) | (((/* implicit */long long int) var_4))))) ? ((-(var_4))) : (((/* implicit */int) max((arr_3 [2LL] [i_2]), (((/* implicit */unsigned short) (signed char)12))))))))));
                        arr_40 [i_2] [i_3] [i_3] [i_2] [i_13] = ((/* implicit */unsigned short) var_9);
                    }
                    for (unsigned char i_14 = 1; i_14 < 12; i_14 += 3) 
                    {
                        arr_43 [(signed char)6] [i_3] |= ((/* implicit */signed char) (+(max((((((/* implicit */int) arr_42 [i_2] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_14 + 1] [i_14])) - (arr_23 [i_8]))), (((/* implicit */int) max((var_7), ((unsigned char)108))))))));
                        /* LoopSeq 1 */
                        for (signed char i_15 = 1; i_15 < 10; i_15 += 2) 
                        {
                            arr_46 [i_2] = ((/* implicit */_Bool) (~(max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) / (arr_30 [i_3 - 3] [i_14 + 1] [i_2]))), (((/* implicit */unsigned int) arr_8 [i_3 - 1] [i_2]))))));
                            arr_47 [i_15] [i_2] [i_15] [i_15] = ((/* implicit */long long int) arr_36 [i_8] [i_15] [i_15] [i_15] [i_15] [i_15 - 1] [i_15]);
                        }
                    }
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 1; i_16 < 9; i_16 += 3) 
                {
                    var_25 = ((/* implicit */short) max(((+((-(((/* implicit */int) arr_25 [i_2 + 1] [i_3 - 2])))))), (((((/* implicit */_Bool) 1826871298U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))));
                    arr_50 [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) min((arr_2 [i_2] [i_16]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_29 [i_2] [i_2] [9U] [i_2] [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_29 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1])))))));
                }
                arr_51 [(unsigned short)8] [(unsigned short)8] |= (((!(((/* implicit */_Bool) arr_9 [i_3 + 1] [10ULL] [i_3 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_2] [i_2] [i_2] [6ULL] [i_2 + 1] [i_3 - 2])) ? (((/* implicit */int) arr_29 [(short)2] [i_2] [i_2] [2] [i_2 + 1] [i_3 - 3])) : (((/* implicit */int) arr_22 [i_3 - 1] [i_2 + 1]))))) : (((((/* implicit */_Bool) arr_29 [i_2] [i_2 + 1] [i_2 + 1] [12LL] [i_2 + 1] [i_3 + 1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_3 - 1] [i_2 + 1]))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) var_2);
}
