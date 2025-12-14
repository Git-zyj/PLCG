/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63114
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
    var_17 = ((/* implicit */signed char) (~((((-(var_9))) - (((/* implicit */long long int) -1492747280))))));
    var_18 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min(((((_Bool)0) ? (((/* implicit */int) var_13)) : (-13))), (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_3)))))))) & (max((((/* implicit */unsigned long long int) var_1)), (((7404527422027922821ULL) >> (((var_0) - (10045074557379646153ULL)))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) 2147483647);
                                arr_15 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */int) arr_6 [i_2] [i_0 - 3]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) ((long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 135291469824ULL)) ? (arr_17 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] [i_5]))))), ((~(16780125139297434201ULL))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((long long int) (+(arr_1 [i_5] [i_1])))))));
                            arr_22 [(_Bool)1] [i_1] [i_0] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_2] [i_1] [i_0] [i_0])) & (((/* implicit */int) arr_12 [i_6] [i_0] [i_0]))))))) ? ((+(((/* implicit */int) (unsigned short)7554)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-8))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_9 [i_0 - 3] [i_0] [i_0 + 1] [i_0] [i_0] [i_1]))))));
                            arr_23 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1666618934412117415ULL)) ? (((/* implicit */int) arr_8 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_13 [i_0 - 3] [i_1] [i_0 - 3] [i_0] [i_6] [i_6] [i_6])))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))))) ? (((int) max((1316597504447074230LL), (((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (unsigned char)234))));
                            arr_24 [i_0] [i_0 - 2] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) 17131972374952456514ULL)))))) : (max((((/* implicit */int) arr_14 [(_Bool)1] [i_2] [i_2] [i_2] [(_Bool)1])), ((+(((/* implicit */int) (_Bool)1))))))));
                            var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1] [i_2] [i_5] [i_6])) * (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_5] [i_6] [i_0] [i_1]))))) ? (min((arr_3 [i_0]), (arr_3 [i_0 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), (arr_11 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_0] [i_0])))))))) ? (min((((/* implicit */unsigned long long int) -13)), (max((2701975193947299800ULL), (2701975193947299800ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0] [i_5] [i_0] [i_6])) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_5] [i_6])) : (((/* implicit */int) (signed char)50)))))))));
                        }
                        var_22 = ((/* implicit */int) (_Bool)1);
                    }
                    for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        arr_27 [i_1] [i_2] [i_1] [i_1] |= ((/* implicit */unsigned int) (unsigned short)8599);
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            arr_30 [i_7] [i_1] [i_2] [i_7] [i_8] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_2] [i_7])), (arr_28 [i_8])))), (((unsigned int) arr_6 [i_2] [i_7]))))) ? (max((((/* implicit */unsigned long long int) arr_29 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0] [(signed char)2])), (2701975193947299798ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_26 [i_0] [(unsigned char)7])), (15744768879762251828ULL))))))))));
                            var_23 *= ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2]))))), (((((/* implicit */_Bool) -29)) ? (10669210314951901565ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_8]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_2] [i_7])) ? (((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_6 [i_7] [i_1]))))) : (min((arr_3 [i_1]), (((/* implicit */long long int) (signed char)45)))))))));
                            arr_31 [i_7] [i_1] [i_2] [i_7] [i_8] |= ((/* implicit */signed char) (~(min((max((((/* implicit */unsigned long long int) (signed char)95)), (arr_20 [i_2] [i_1] [i_1] [i_7] [i_8] [i_7] [i_7]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_7])) ? (((/* implicit */int) arr_6 [7U] [i_8])) : (((/* implicit */int) arr_2 [(_Bool)1] [(_Bool)1])))))))));
                            arr_32 [i_0] = ((/* implicit */unsigned char) min((min((arr_18 [i_0 - 1] [i_7] [i_7]), (arr_18 [i_0 + 2] [i_0 + 2] [i_8]))), (((((/* implicit */unsigned long long int) (+(arr_17 [i_0] [i_1] [i_2] [i_0])))) + ((-(arr_20 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] [i_0])))))));
                        }
                        arr_33 [i_7] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 10345844288932679178ULL)) ? (1666618934412117414ULL) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_1] [i_7])))) + (min((arr_18 [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-118))))), ((+(((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [i_7] [i_2] [i_2] [i_7]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) ? (3017807205163056257LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16384)))))) ? (((((arr_3 [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)21)) - (21))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16780125139297434201ULL))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 4; i_10 < 9; i_10 += 2) 
                        {
                            {
                                arr_40 [i_9] [i_0] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_21 [i_9] [i_0 - 2] [i_2] [i_10 - 4] [i_0 + 2] [i_10]))))));
                                var_24 &= ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_4 [i_0 - 1] [i_0 - 1] [i_10 - 2]), (arr_4 [i_0 - 3] [i_1] [i_10 - 2])))), ((+(((((/* implicit */_Bool) arr_6 [i_2] [i_9])) ? (((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_28 [i_10]))))))));
                                arr_41 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_16 [i_10 - 3] [i_10 - 1] [i_10] [i_10 - 1] [i_9] [i_9]), (arr_16 [i_10 - 1] [i_10 + 2] [i_10] [i_10] [i_10 + 1] [i_10 - 3])))) * (((((/* implicit */_Bool) arr_16 [i_10 - 1] [i_10 - 1] [i_9] [i_10] [i_10 + 3] [i_9])) ? (((/* implicit */unsigned long long int) arr_16 [i_10 + 3] [i_10 - 2] [i_10] [i_10] [i_10] [i_0])) : (16780125139297434181ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
