/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91791
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
    var_11 = var_9;
    var_12 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)56804)) ? (((/* implicit */int) (unsigned short)56804)) : ((-2147483647 - 1))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */unsigned short) max(((short)32767), (((/* implicit */short) ((((/* implicit */_Bool) (-(2147483647)))) || (((/* implicit */_Bool) max((var_7), (((/* implicit */int) arr_4 [i_0] [i_3]))))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_2] [6LL] [i_3] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_3 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) >= (var_4))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (arr_12 [i_1] [i_2]))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 119236490)) || (var_0))) ? (min((var_5), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            var_14 = ((/* implicit */unsigned short) min((((((/* implicit */int) min(((signed char)44), (arr_0 [i_0])))) / (((var_3) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)43333)))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_6))))) > (min((((/* implicit */unsigned int) (-2147483647 - 1))), (2307517966U))))))));
                            arr_16 [i_3] [i_3] [i_2] [i_2] [9LL] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3 + 1])) ? (var_9) : (var_9)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) max((var_8), (((/* implicit */short) (signed char)15))))), (max(((unsigned short)0), (((/* implicit */unsigned short) (short)-32764))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2041372531U)))))));
                        }
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_3] [i_3] [i_3 + 1])))))) ? (max((((/* implicit */long long int) (~(-1181105711)))), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-13396))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))))));
                        var_16 = ((/* implicit */unsigned char) (~(((arr_2 [i_0]) | ((~(arr_10 [i_0] [i_1] [(signed char)0] [i_2] [i_1] [i_2])))))));
                        var_17 = ((((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */long long int) var_5)) : (arr_11 [i_3 + 1] [i_3 + 1] [5U]))) * (((/* implicit */long long int) (~(720192554)))));
                    }
                    for (long long int i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) (signed char)-25)) ? (var_10) : (((/* implicit */int) arr_9 [4])))), (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2])))), (((((/* implicit */int) (short)-32759)) | ((~(((/* implicit */int) (unsigned char)98))))))));
                        var_19 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) ((var_2) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) / (arr_12 [i_5] [i_1])))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        arr_25 [(unsigned char)5] = ((/* implicit */unsigned int) arr_1 [i_6]);
                        arr_26 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_6]))))), (((((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63268))) : (arr_18 [i_1] [i_1] [2ULL] [i_6]))) - (min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))));
                    }
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        arr_29 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) arr_0 [i_0]))))) : ((((-(arr_12 [i_0] [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((min((min((((/* implicit */unsigned long long int) 1439496290)), (arr_21 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)28))) != (2307517966U)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_2] [i_2] [i_7]))))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) arr_19 [i_8] [i_7] [i_2] [2])))), ((!(((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                            var_22 = ((/* implicit */signed char) ((max(((~(((/* implicit */int) var_6)))), ((~(((/* implicit */int) arr_0 [i_1])))))) | (arr_2 [i_8])));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_0))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_35 [i_0] [i_1] [i_2] = min(((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)28)) : (var_7))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)8)))))));
                            arr_36 [8] [(unsigned short)0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5)))) ? (min((((/* implicit */unsigned long long int) arr_22 [i_9] [i_7] [(unsigned short)8] [i_1] [i_0])), (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (1175494868U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                        }
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            arr_39 [0LL] [i_1] [i_2] [i_7] [i_7] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) & (((/* implicit */int) (unsigned char)242))))) ? (((((/* implicit */int) var_3)) & (((/* implicit */int) arr_8 [i_2])))) : (((((/* implicit */int) (short)13396)) & (((/* implicit */int) (_Bool)0))))));
                            arr_40 [i_0] [i_0] [i_0] [i_1] [i_2] [i_7] [i_10] = ((/* implicit */unsigned long long int) -929852799);
                            arr_41 [i_0] [i_1] [i_1] [i_7] [i_1] [(signed char)7] = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)45))) : (15590997378409934872ULL)));
                            var_25 = ((((/* implicit */int) (signed char)28)) + ((-(-785211034))));
                        }
                        arr_42 [i_7] [i_2] [i_2] [i_1] [7LL] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_7] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))) : (var_1))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [(signed char)2] [i_1] [(signed char)2] [i_0])) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [(signed char)2]))))))));
                    }
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (15U)))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_2] [i_2] [i_1] [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_2] [i_2])) : (((/* implicit */int) (short)13395))))))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (arr_18 [4ULL] [i_1] [i_1] [i_2]))))))))))));
                    var_27 = (~(((var_3) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_9 [i_1])))));
                }
            } 
        } 
        arr_43 [i_0] = ((/* implicit */short) (!(((((/* implicit */int) ((((/* implicit */int) var_6)) < (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0])))) <= (((/* implicit */int) ((arr_5 [i_0] [i_0] [i_0]) != (((/* implicit */unsigned long long int) arr_38 [9] [i_0] [i_0] [i_0] [i_0])))))))));
        var_28 = ((/* implicit */_Bool) (-(arr_18 [i_0] [(signed char)2] [i_0] [2LL])));
    }
}
