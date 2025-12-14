/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63332
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
    for (short i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    var_20 = ((/* implicit */unsigned short) arr_3 [i_2] [i_1] [3ULL]);
                    var_21 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (-6598939204672568776LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242)))))) | (((((/* implicit */_Bool) min((-9223372036854775802LL), (var_6)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_1] [(signed char)10])) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) var_0))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 8; i_4 += 4) 
                        {
                            {
                                arr_15 [(unsigned short)7] [i_0] [i_0] [i_0 - 2] = ((/* implicit */signed char) ((((arr_2 [i_0 - 1]) / (arr_2 [i_2 + 3]))) - (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-19049)))))));
                                arr_16 [i_4] [i_4 + 2] [i_0] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [(unsigned short)5] [i_2] [i_0] [6ULL] [i_0] [i_2 - 1] [i_0 - 4])) || (((/* implicit */_Bool) -9223372036854775802LL))));
                            }
                        } 
                    } 
                    var_22 = (-(((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 2] [i_0 - 4])) ? (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 2] [i_0 - 4])) : (((/* implicit */int) var_12)))));
                }
                for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        arr_21 [4ULL] [i_6] [i_0] [i_0] [5LL] [5LL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12200776487663872995ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [2] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)20399))))) : (((-1LL) | (((/* implicit */long long int) ((/* implicit */int) arr_13 [(short)2] [i_5] [i_5] [(unsigned short)0] [2ULL] [(unsigned short)1] [(unsigned short)0])))))))) > (((unsigned long long int) max((arr_4 [i_6]), (((/* implicit */unsigned long long int) var_11)))))));
                        arr_22 [i_0] [i_0] = arr_20 [i_6] [0] [i_1] [i_0];
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) arr_0 [i_7] [i_5]);
                        var_24 += ((max((((/* implicit */unsigned long long int) var_0)), (5364973981470534884ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [2ULL] [i_0 - 3]))));
                    }
                    var_25 = ((/* implicit */unsigned char) arr_3 [(short)4] [i_1] [i_0]);
                    var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) -9223372036854775794LL)), (min((((/* implicit */unsigned long long int) min((arr_7 [(unsigned char)4] [(signed char)11] [7ULL] [(unsigned char)4]), (((/* implicit */short) var_5))))), ((~(arr_20 [i_5] [i_5] [i_1] [i_0])))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_8 = 1; i_8 < 11; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 2; i_9 < 10; i_9 += 1) 
                    {
                        arr_31 [i_0] [i_8] [i_1] [i_0] = ((/* implicit */int) var_15);
                        var_27 *= ((/* implicit */unsigned char) -6598939204672568776LL);
                        var_28 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_8] [i_0]))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_9] [i_8] [i_1] [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (6245967586045678597ULL)))));
                    }
                    var_29 += ((/* implicit */long long int) ((arr_25 [i_8] [i_8] [i_8 + 1] [i_0 - 2] [2LL] [i_0]) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)253))))) : (((((/* implicit */int) arr_13 [i_8] [i_8 + 1] [(signed char)7] [(unsigned short)6] [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_17 [i_8] [i_1] [i_0] [i_0]))))));
                    arr_32 [i_0] [i_0] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_23 [11] [i_1] [i_0])))) >= ((+(((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (short i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            {
                                arr_37 [i_11] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((unsigned long long int) 12200776487663872995ULL)) / ((+(arr_19 [i_11] [i_10] [i_8] [(signed char)0] [10LL] [10LL])))));
                                var_30 = (~(arr_24 [i_8 - 1] [i_0] [i_0 - 1]));
                                var_31 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_13 [i_11] [9] [i_0] [i_8] [(signed char)1] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_10] [i_10] [i_8] [i_0]))) : (9223372036854775776LL)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_32 -= var_1;
}
