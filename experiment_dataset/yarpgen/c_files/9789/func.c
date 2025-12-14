/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9789
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (~(var_2))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((arr_5 [i_1 - 2] [12LL]) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])))) << (((arr_5 [i_1 - 3] [i_1 - 2]) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (((/* implicit */int) var_1))))));
                                var_16 = ((/* implicit */signed char) ((((-1112370195) + (2147483647))) >> (((1560201404U) - (1560201399U)))));
                                var_17 += ((/* implicit */unsigned short) var_2);
                                arr_12 [i_3] [i_3 - 1] [i_2] [2U] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_0] [i_3])) ? (arr_3 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4)))))))) ? (((arr_2 [i_1 - 1]) * (((/* implicit */int) arr_0 [i_4])))) : (((/* implicit */int) ((((((/* implicit */int) arr_8 [i_3] [i_3])) >= (((/* implicit */int) var_1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(short)18] [i_3 + 3]))) : (var_5)))))))));
                            }
                        } 
                    } 
                    var_18 ^= ((/* implicit */unsigned int) ((((arr_4 [i_1 - 1]) / (arr_4 [i_1 + 2]))) / (max((arr_4 [i_1 - 1]), (arr_4 [i_1 - 1])))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 1; i_6 < 20; i_6 += 2) 
                        {
                            arr_17 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((var_5), (((/* implicit */long long int) arr_11 [i_0] [i_1] [i_1] [4] [i_6])))), (((/* implicit */long long int) (~(var_6))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_2 [i_2])) : (var_13)))) ? (((/* implicit */unsigned int) max((arr_2 [3U]), (var_9)))) : (((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [16ULL] [i_5] [16ULL]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0])))))))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */long long int) arr_6 [i_0] [i_1 - 3] [i_6 + 2])), (arr_4 [i_1 - 3]))) : (arr_4 [i_1 - 3])));
                            arr_18 [i_0] [i_1] [i_1] [i_5] [i_0] = ((/* implicit */int) arr_0 [i_6]);
                        }
                        /* LoopSeq 3 */
                        for (int i_7 = 1; i_7 < 21; i_7 += 1) 
                        {
                            arr_21 [(_Bool)1] [i_1 - 2] [i_2] [(unsigned short)1] [(unsigned short)3] [8ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 - 1])) ^ (((/* implicit */int) arr_1 [i_1 - 3]))))) ? (((((/* implicit */_Bool) arr_1 [i_1 + 2])) ? (var_7) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (var_3)))))));
                            arr_22 [i_0] [i_1] [i_2] [i_5] [i_7 + 1] |= ((/* implicit */unsigned char) max((var_2), (max(((+(var_13))), (((/* implicit */long long int) ((arr_5 [i_0] [i_1]) ? (((/* implicit */int) arr_11 [i_7 - 1] [i_0] [i_2] [i_2] [(_Bool)1])) : (((/* implicit */int) arr_9 [i_0] [i_5] [i_2])))))))));
                            var_20 = ((min((var_8), (((/* implicit */long long int) var_0)))) + (((/* implicit */long long int) min((1560201404U), (2734765892U)))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_7 + 1] [(_Bool)1] [i_2] [i_1] [i_0])) * (((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_5] [0]))))) > (min((((/* implicit */long long int) arr_19 [i_0] [i_1] [i_2] [(short)3] [i_7 - 1])), (var_8))))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */short) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (var_6))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))))) << (((((((/* implicit */_Bool) max((arr_24 [i_0] [i_1] [i_0] [(unsigned char)11] [i_8] [i_8] [i_8]), (((/* implicit */int) arr_11 [i_8] [i_5] [i_2] [(unsigned char)13] [i_0]))))) ? ((+(var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (arr_24 [i_0] [i_1] [i_5] [(short)8] [i_8] [i_0] [i_5]) : (((/* implicit */int) arr_15 [(unsigned char)17] [i_5] [i_1] [i_1] [i_0] [i_0]))))))) - (4068040195U)))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_8 [i_0] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) min((1560201400U), (2734765892U)))))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            var_24 = ((((((((/* implicit */int) var_12)) == (arr_27 [(_Bool)1] [(unsigned char)19] [i_2] [(unsigned char)1] [i_9]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) >= (((/* implicit */int) arr_1 [5])))))) : (min((arr_25 [i_2] [i_2] [i_9] [i_5] [(unsigned char)18]), (((/* implicit */unsigned long long int) var_5)))))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [7ULL] [(unsigned char)9] [i_2] [i_5] [i_1 + 1]))))));
                            arr_28 [(unsigned char)15] [i_5] [(unsigned char)15] [i_1 - 2] [i_0] |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_10)) >= (max((arr_4 [i_1 - 4]), (var_11))))))) - (min((((/* implicit */unsigned int) arr_15 [i_1 - 1] [i_1 - 3] [i_1 - 4] [i_1 - 1] [i_5] [i_9])), (((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */unsigned int) 1455546300)) : (1560201380U)))))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_25 [i_0] [10] [i_5] [i_5] [i_2])))) ? (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) arr_7 [(unsigned char)1] [i_1]))))) : (arr_3 [(unsigned char)2] [i_1 - 1] [(unsigned char)18])))) ? (((((arr_27 [i_0] [i_1 - 1] [(_Bool)1] [i_9] [i_1 - 3]) + (2147483647))) << (((((arr_27 [i_1] [i_1 - 4] [i_9] [i_1 - 4] [i_9]) + (2143283471))) - (13))))) : (((((/* implicit */_Bool) arr_26 [i_0] [8LL] [i_1 - 1] [(_Bool)1] [i_1 - 3])) ? (((var_10) ^ (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_2] [i_5] [20U])))) : ((+(((/* implicit */int) arr_15 [(unsigned char)9] [i_1] [i_0] [i_5] [i_9] [11U]))))))));
                        }
                        var_26 |= ((var_6) <= (((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) arr_13 [i_1])) : (((/* implicit */int) arr_20 [i_1 + 1] [i_1] [i_5] [i_1 + 2] [i_2]))))));
                        var_27 |= ((/* implicit */unsigned short) (-((+(((((/* implicit */long long int) var_9)) & (var_8)))))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned char)224)), (2734765892U)));
}
