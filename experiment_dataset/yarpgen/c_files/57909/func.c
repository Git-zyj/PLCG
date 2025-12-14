/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57909
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((1041919865303606961LL) >= (((/* implicit */long long int) 1464959098)))))))) >= (((((((/* implicit */_Bool) var_15)) ? (var_4) : (var_1))) >> (((((long long int) 49152)) - (49148LL)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */unsigned int) (unsigned short)15775);
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_17 [i_0] [i_2] = ((/* implicit */short) (-(2607433943U)));
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_12 [23] [i_3] [i_2] [i_0]))));
                            arr_18 [i_0] [(signed char)6] [i_2] = ((/* implicit */int) arr_3 [i_0]);
                            var_19 |= ((((((/* implicit */int) (signed char)-54)) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned short)15775)) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)170)))) - (1844))));
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 2) 
                        {
                            arr_21 [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_2] [i_0] [i_2])) ? (1041919865303606961LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) arr_7 [i_3] [i_1] [i_5]))))) || (((/* implicit */_Bool) min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((262080U) - (262061U)))))))))));
                            var_20 = ((/* implicit */unsigned int) (-(((max((arr_14 [i_0] [i_1] [i_2]), (-5552207784399170726LL))) + (((8958407733259268861LL) >> (((/* implicit */int) (signed char)15))))))));
                            var_21 = ((/* implicit */short) (signed char)19);
                            var_22 = ((/* implicit */short) (~(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)28433))) >= (3400564024005798008LL)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            arr_24 [i_2] = ((/* implicit */signed char) max((1041919865303606969LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_3])))))));
                            var_23 = ((/* implicit */int) min((var_23), (min((var_7), ((-(((/* implicit */int) (short)10369))))))));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) >= (((3931111085U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-13229)))))));
                            var_25 = ((/* implicit */unsigned short) (~(((((/* implicit */int) (unsigned short)58780)) >> (((arr_2 [i_1] [i_1]) - (3056247031U)))))));
                        }
                        var_26 = ((/* implicit */int) var_1);
                        arr_27 [i_3] [i_0] [i_2] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)49761), ((unsigned short)0))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((8958407733259268865LL), (var_3)))) ? (((unsigned long long int) (signed char)-20)) : (((/* implicit */unsigned long long int) 2784116646U)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            arr_30 [i_2] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_2] [i_2])) <= (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0])) == (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])))))));
                            var_27 = (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [16U] [i_2]))) >= (arr_2 [i_0] [i_1])))));
                        }
                        for (int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            arr_34 [i_2] [i_0] [i_3] [i_3] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((min((((/* implicit */int) var_16)), (-91075917))) + (2147483647))) << ((((((~(var_7))) + (563036493))) - (17)))))), ((-((-(arr_22 [i_2] [i_2] [i_2] [11])))))));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((max((max((-221427934), (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) ((((/* implicit */_Bool) 12479087256758051942ULL)) || (arr_3 [3ULL])))))) | (((((((/* implicit */long long int) arr_2 [i_9] [i_9])) != (3LL))) ? (1277633562) : (((/* implicit */int) (((_Bool)1) || (arr_13 [i_0] [i_0] [i_0] [(signed char)1] [i_0])))))))))));
                            arr_35 [i_1] [i_9] [i_2] [i_0] [i_9] [i_9] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_2) : (((/* implicit */int) (short)10488))))) - (var_1)))));
                        }
                    }
                    for (int i_10 = 3; i_10 < 21; i_10 += 2) 
                    {
                        var_29 -= ((/* implicit */signed char) ((((/* implicit */int) ((var_13) <= (max((3570294718U), (((/* implicit */unsigned int) arr_29 [i_1] [i_1] [i_2] [i_10 + 3] [(signed char)11] [i_1] [i_1]))))))) <= ((+(((/* implicit */int) (unsigned short)22))))));
                        var_30 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_10 - 1] [i_10 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) arr_14 [i_0] [0U] [i_2])))))) : (((((/* implicit */_Bool) 4037330269U)) ? (var_11) : (2952421794U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -670602491)) ? (arr_31 [i_0] [i_1] [0] [(_Bool)1] [i_10 + 2]) : (((/* implicit */long long int) var_13))))))))));
                        arr_38 [i_0] [i_1] [i_2] [i_10] [i_10] = ((/* implicit */short) min((max((arr_33 [i_1] [i_1] [i_2] [i_1] [i_1]), (arr_33 [i_0] [i_0] [i_2] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) ((arr_28 [i_0] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [(unsigned short)21] [i_10])))))) >= (arr_26 [i_0] [i_10 - 2] [i_2] [i_10]))))));
                    }
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned int) (+((+(19)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
                        {
                            arr_44 [i_2] [17LL] [i_11] [i_2] [i_1] [17LL] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) -54983733)) ? (((2018013453U) - (((/* implicit */unsigned int) 658993979)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)480)))));
                            var_32 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_14))) / (1856945730997996722LL))) ^ ((+(8489016068143623165LL)))));
                        }
                        for (int i_13 = 1; i_13 < 23; i_13 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned int) 163830811869423008ULL);
                            var_34 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)29318)) && (((/* implicit */_Bool) (unsigned short)58927)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1403465459) <= (((/* implicit */int) var_14)))))) : (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_1] [i_1] [i_1] [i_2] [i_11] [(unsigned short)16])))))));
                            arr_47 [i_13] [i_13] [i_2] [i_11] [i_13 - 1] [i_11] [i_1] = ((/* implicit */signed char) ((((unsigned int) var_4)) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 16219986482521107942ULL)) || (((/* implicit */_Bool) -2040247122))))))));
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) (~(((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))))));
                        }
                        arr_48 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_11] [i_11] [i_11])) ? (((/* implicit */unsigned int) var_7)) : (2639672813U))));
                        var_36 = ((((arr_23 [i_11] [i_2] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26610))))) ? (((/* implicit */int) ((532770281) != (((/* implicit */int) (short)-26022))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)8191)) : (var_2))));
                    }
                    arr_49 [i_0] [i_0] [i_1] [i_2] = ((-8489016068143623154LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)38))));
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) - (((((/* implicit */_Bool) (short)-26022)) ? (min((((/* implicit */unsigned int) var_14)), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_6)) <= (arr_31 [i_1] [i_0] [i_1] [i_0] [i_0])))))))));
                    var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) 3967983679U)) ? (arr_33 [i_0] [i_0] [i_2] [17] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_2] [i_2])) >= (((/* implicit */int) (short)-26592)))))))))));
                }
            } 
        } 
    } 
    var_39 = ((/* implicit */_Bool) var_1);
}
