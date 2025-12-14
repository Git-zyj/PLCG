/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91681
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] [(short)3] [i_0] = ((/* implicit */_Bool) ((min(((-(3170168417804341088LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))))) ^ ((~(-3170168417804341088LL)))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 7; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_15 = arr_0 [i_0] [i_1];
                                var_16 += ((((/* implicit */long long int) max((min((((/* implicit */unsigned int) var_9)), (var_14))), (max((1072693248U), (((/* implicit */unsigned int) var_7))))))) == (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_4]))) : (max((-3170168417804341075LL), (3170168417804341083LL))))));
                                arr_14 [i_4] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2]))))) == (((/* implicit */int) ((((/* implicit */int) (signed char)33)) == (((/* implicit */int) arr_1 [i_2])))))))) | (((/* implicit */int) arr_0 [i_2] [i_3]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 3; i_5 < 9; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    for (unsigned int i_8 = 3; i_8 < 11; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 3; i_9 < 12; i_9 += 3) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned long long int) arr_24 [i_9] [1]);
                                arr_27 [i_9 - 3] [i_8] [9ULL] [i_6] [i_8] [i_8] [9ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_8 + 1])) ? (((/* implicit */int) min((arr_22 [i_7] [i_7] [i_8 - 1] [i_9 - 1] [i_9 - 1] [i_9]), (((/* implicit */short) arr_20 [i_6] [i_6] [i_8 - 1] [i_9 - 1]))))) : (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 2) 
                    {
                        arr_32 [i_5] [i_10] [i_10] [(unsigned short)1] = ((/* implicit */signed char) ((unsigned short) arr_19 [i_5]));
                        /* LoopSeq 4 */
                        for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_30 [i_11] [i_6] [i_6] [i_11] [i_12] [12])), (arr_25 [i_5] [i_6] [i_10] [i_11] [i_12])))) * (((((/* implicit */long long int) ((/* implicit */int) arr_34 [(signed char)3] [i_12]))) / (arr_19 [i_5 + 3])))))) ? (3170168417804341088LL) : (((-3170168417804341088LL) / (-8063848898889884632LL)))));
                            arr_35 [i_6] [i_10] [i_10] [i_10] [i_12] = ((/* implicit */long long int) arr_15 [i_5]);
                            var_19 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) -3170168417804341088LL)), (arr_31 [i_6] [i_10]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_11 - 2] [i_5 + 3])) ? (((/* implicit */int) arr_34 [i_11 - 2] [i_5 + 3])) : (((/* implicit */int) arr_34 [i_11 - 2] [i_5 + 3])))))));
                            var_20 -= ((/* implicit */long long int) var_2);
                        }
                        for (int i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_36 [(signed char)11] [i_6] [i_10] [i_11] [i_5] [6ULL] [(unsigned short)12]))))), (arr_23 [i_11] [i_6] [i_11] [i_11] [i_10] [i_11]))))))));
                            arr_39 [i_5] [i_10] [i_10] [i_10] [i_11] [i_5] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_30 [7ULL] [7ULL] [i_10] [i_5 + 2] [i_13] [i_13])), (var_6)))) : (((((/* implicit */_Bool) min((-3170168417804341088LL), (((/* implicit */long long int) var_1))))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) var_7))))));
                            var_22 = arr_23 [i_10] [i_11 + 1] [i_5 + 2] [i_5 - 3] [i_5 - 3] [i_10];
                            arr_40 [i_10] [i_10] [i_11] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [(signed char)4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_22 [i_5] [6U] [i_6] [i_10] [(unsigned char)11] [i_13]))))), (((arr_31 [i_10] [i_10]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5])))))))) ? (((((/* implicit */_Bool) ((arr_29 [i_10] [i_6]) / (((/* implicit */unsigned long long int) -3170168417804341088LL))))) ? (((/* implicit */unsigned long long int) 3589402209U)) : (((((/* implicit */_Bool) (signed char)-44)) ? (2141942102528144831ULL) : (((/* implicit */unsigned long long int) 3694576043U)))))) : (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) 1195066858U)), (-3170168417804341078LL))), (((/* implicit */long long int) (_Bool)1)))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_43 [i_10] = ((/* implicit */unsigned short) 3170168417804341088LL);
                            arr_44 [i_10] [i_11] [i_10] = ((/* implicit */unsigned int) max((-2006786609), (((/* implicit */int) (_Bool)1))));
                        }
                        for (int i_15 = 1; i_15 < 12; i_15 += 2) 
                        {
                            arr_48 [i_5] [i_10] [i_6] [i_6] [i_10] [i_11 - 1] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_38 [i_10] [i_15 + 1] [i_11 - 2] [i_10] [i_5 + 3] [i_5] [i_10]))) ? (min((arr_38 [i_10] [i_15 + 1] [i_11 - 2] [i_5] [i_5 + 3] [i_5] [i_10]), (arr_38 [i_10] [i_15 + 1] [i_11 - 2] [i_5 - 2] [i_5 + 3] [(unsigned short)5] [i_10]))) : ((+(arr_38 [i_10] [i_15 + 1] [i_11 - 2] [i_10] [i_5 + 3] [i_5 + 2] [i_10])))));
                            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) var_12)))))))));
                        }
                        arr_49 [i_5 + 1] [10] [i_6] [i_10] [i_10] [4] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 16304801971181406785ULL)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) (_Bool)1)))), (443362317)));
                        /* LoopSeq 2 */
                        for (unsigned int i_16 = 0; i_16 < 13; i_16 += 1) 
                        {
                            arr_53 [i_5 - 2] [i_10] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_21 [7ULL] [i_6] [i_6])))))))));
                            var_24 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) 481557374U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-36)))));
                            var_25 = ((/* implicit */unsigned char) arr_19 [i_5]);
                        }
                        for (unsigned char i_17 = 0; i_17 < 13; i_17 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_51 [i_10] [i_6] [i_10] [(short)3] [i_17] [i_5]) ^ (arr_23 [i_11] [i_6] [0] [i_6] [(_Bool)1] [i_17])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned short) arr_33 [i_5] [i_11] [i_10] [i_17] [i_17] [i_6] [i_11 - 1])))))) : (var_14)))), (max((((/* implicit */unsigned long long int) arr_33 [4U] [4U] [i_5] [i_11] [i_11] [i_11] [4U])), (((arr_29 [i_5 + 4] [(signed char)11]) * (((/* implicit */unsigned long long int) 3124599166U)))))))))));
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4413918263747348507LL)) ? (((/* implicit */int) (_Bool)1)) : (2006786609)))))))));
                        }
                        arr_57 [i_6] [i_10] [i_10] = ((((/* implicit */int) arr_18 [i_10] [i_10] [5LL])) | (2006786613));
                    }
                    for (short i_18 = 2; i_18 < 10; i_18 += 4) 
                    {
                        arr_60 [i_10] [i_6] [i_6] [i_6] [i_18] [i_6] = ((min((9632224664450811641ULL), (((/* implicit */unsigned long long int) 4294967295U)))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_5] [i_5] [i_18 + 3] [i_18] [i_18] [i_18])) & (((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_5] [i_6] [i_10] [i_6] [i_5 + 3] [i_10] [i_10])) && (((/* implicit */_Bool) (unsigned char)32)))))))));
                        arr_61 [i_18] [i_10] [2ULL] [2ULL] [i_18] = ((/* implicit */unsigned int) var_2);
                    }
                    arr_62 [i_10] [i_10] [i_10] [i_5] = ((/* implicit */unsigned char) (~((((~(arr_19 [i_10]))) | (max((((/* implicit */long long int) var_3)), (var_10)))))));
                }
                var_28 = ((/* implicit */long long int) min((3354897964354539204ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                /* LoopSeq 1 */
                for (long long int i_19 = 1; i_19 < 12; i_19 += 1) 
                {
                    arr_65 [i_5 + 1] [i_6] [i_19] = ((/* implicit */short) arr_17 [4U] [i_6]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 3; i_20 < 11; i_20 += 1) 
                    {
                        var_29 = ((/* implicit */short) max((max((var_5), ((~(((/* implicit */int) arr_41 [i_5] [i_6] [i_6] [i_19 - 1] [i_19] [i_19] [i_20 - 2])))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_5] [i_19])))))));
                        var_30 -= ((/* implicit */unsigned int) ((((arr_66 [i_5 - 1]) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) arr_66 [i_5 + 1])))) | (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_5] [i_6]))) : (arr_31 [4] [4])))))))));
                        var_31 &= ((/* implicit */short) ((((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */int) arr_16 [i_5 - 2])) : (((/* implicit */int) (signed char)-14)))) | (((/* implicit */int) max((((/* implicit */signed char) ((arr_29 [4ULL] [i_6]) < (((/* implicit */unsigned long long int) var_1))))), (arr_37 [i_5 + 2] [i_5] [8U] [i_5 + 3] [2] [i_5 + 2] [i_5 - 2]))))));
                    }
                    var_32 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_5]))));
                }
            }
        } 
    } 
}
