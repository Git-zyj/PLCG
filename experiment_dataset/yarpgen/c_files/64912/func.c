/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64912
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
    var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (((unsigned short) var_11))))) ? ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))) : ((+(((/* implicit */int) ((signed char) var_13)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-62))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)65))))) : ((+(((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned short)13] [i_3 + 2])))))), (min((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3])), (((((/* implicit */int) arr_0 [i_0] [i_3])) - (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3 + 3]))))))));
                                arr_13 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((unsigned short) ((((/* implicit */int) arr_7 [i_0] [i_3 + 3] [i_0] [(signed char)0])) >= (((/* implicit */int) arr_7 [i_0] [i_3 + 1] [i_2] [i_3]))));
                                arr_14 [i_4] [i_0] [i_3 + 4] [i_2] [12] [i_0] [i_0] = arr_5 [(unsigned short)5];
                                arr_15 [i_0] [13] [i_2] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) max((arr_1 [i_1] [i_1]), (((/* implicit */int) arr_10 [(_Bool)1]))))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((short) arr_8 [i_1])), (((/* implicit */short) ((unsigned char) arr_1 [i_0] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_10 [i_0]) ? (arr_1 [i_0] [i_3]) : (((/* implicit */int) arr_10 [9])))) > (min((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_4])), (arr_3 [i_0] [(unsigned char)13] [i_0]))))))) : (((unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_4]))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) min((arr_4 [i_5] [(signed char)8]), (arr_4 [i_0] [i_1])))), (((unsigned short) var_0))));
                        arr_20 [5ULL] [2] [i_0] [2] = ((/* implicit */unsigned short) max((((int) var_4)), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(short)10] [i_1] [i_5])))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        arr_25 [i_2] [i_2] [i_0] = ((/* implicit */short) ((max((((((/* implicit */_Bool) arr_18 [i_0] [(signed char)11] [(signed char)13] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) : (var_13))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                        arr_26 [i_0] [i_2] [i_6] [i_6] &= ((/* implicit */_Bool) min((((((/* implicit */int) arr_8 [i_0])) + (((/* implicit */int) arr_6 [i_0] [4U] [i_2] [i_6])))), (((/* implicit */int) arr_8 [i_0]))));
                        var_16 = ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) arr_2 [i_6])) ? (arr_3 [(unsigned char)3] [i_1] [13]) : (((/* implicit */int) arr_10 [i_0])))), (((/* implicit */int) max((arr_18 [i_0] [i_1] [i_1] [i_6]), ((signed char)112)))))), (((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2] [i_6])) ? (((/* implicit */int) arr_23 [i_0] [i_1])) : (((/* implicit */int) arr_18 [i_0] [(short)4] [i_0] [i_6]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) var_4)) | (arr_3 [8] [i_2] [i_0]))))));
                            var_18 *= ((/* implicit */unsigned int) arr_27 [i_2] [i_2] [i_2] [i_2]);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            arr_31 [i_8] [i_8] [i_0] [i_0] [(short)5] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_23 [i_0] [i_0]))))));
                            arr_32 [i_0] [i_0] [(unsigned short)11] [i_0] [i_8] = ((/* implicit */unsigned short) ((var_6) > (((/* implicit */unsigned long long int) var_7))));
                            arr_33 [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (~(max((((/* implicit */int) arr_2 [i_8])), (max((arr_22 [i_0] [i_0] [i_2] [i_6] [(signed char)5]), (((/* implicit */int) arr_27 [i_1] [i_2] [i_6] [i_8]))))))));
                            var_19 = max(((~(((/* implicit */int) arr_7 [i_8] [i_6] [(short)9] [i_1])))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_21 [i_0] [i_0] [i_2] [i_0] [i_8])), (arr_0 [i_0] [i_8])))) ? (((/* implicit */int) ((unsigned short) arr_4 [(unsigned char)0] [(unsigned char)0]))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)31467)) && (((/* implicit */_Bool) arr_23 [i_0] [i_1]))))))));
                        }
                        /* vectorizable */
                        for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            arr_36 [i_0] [i_0] [i_2] [i_6] [i_0] = ((/* implicit */signed char) (~((+(arr_30 [i_9] [i_6] [i_2])))));
                            var_20 ^= ((/* implicit */int) ((((/* implicit */int) (signed char)-113)) <= (((/* implicit */int) arr_5 [i_1]))));
                        }
                        arr_37 [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_1]))) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) ((signed char) arr_2 [i_1])))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_45 [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_11] [i_10] [i_1] [i_1])), ((unsigned short)0)))))), (((/* implicit */int) arr_29 [i_2] [i_0] [i_2] [i_10] [i_11] [i_10]))));
                            var_21 = ((/* implicit */unsigned char) min((((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_2] [i_1] [i_0])))))));
                        }
                        arr_46 [i_10] [(unsigned char)12] [i_1] [i_10] [i_0] [i_1] = ((int) ((short) max((((/* implicit */signed char) arr_10 [i_10])), ((signed char)126))));
                        arr_47 [i_0] [(short)8] [i_10] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((max((((arr_30 [i_0] [i_0] [(unsigned char)1]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */long long int) 476909551)))), (((/* implicit */long long int) arr_41 [i_0] [i_0] [4U] [(short)4]))));
                    }
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_10 [i_1])), (((((/* implicit */_Bool) arr_3 [(unsigned char)2] [10ULL] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_43 [i_0] [i_1] [i_1] [i_2] [i_2]))))))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_44 [i_1])) ? (476909523) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0]))))))));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])) ? (((arr_30 [i_0] [i_1] [(unsigned short)12]) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((-234661383) ^ (((/* implicit */int) (unsigned char)0)))))))) ? (((min((((/* implicit */unsigned long long int) 609500837)), (var_12))) - (max((((/* implicit */unsigned long long int) arr_42 [(signed char)10] [(signed char)10] [i_2] [i_2] [i_2] [(_Bool)0] [i_2])), (var_6))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]))))))))));
                }
            } 
        } 
    } 
    var_24 = var_5;
}
