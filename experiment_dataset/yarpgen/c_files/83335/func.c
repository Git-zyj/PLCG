/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83335
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
    var_19 ^= ((/* implicit */unsigned long long int) (-(var_5)));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_5)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_21 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)255)), ((~(arr_2 [(unsigned char)2] [i_0 + 1])))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [8LL] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_0] [(signed char)2])) > (arr_8 [i_0 + 1] [8U] [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))) : ((+(arr_1 [i_0])))))), (((((/* implicit */_Bool) ((int) arr_7 [i_0] [i_1] [i_1] [i_0]))) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1])) : (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            arr_15 [i_0] [i_1] [i_0] [i_3] [i_4] [2] [i_4] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_1])) ? (arr_6 [i_0 - 1] [i_0 + 1] [i_0 + 1] [(unsigned char)0]) : (((/* implicit */int) (unsigned char)175))))));
                            arr_16 [i_0] [11U] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(max((arr_9 [i_1] [i_1] [i_2] [i_0 - 1]), (arr_9 [14] [i_1] [i_2] [i_0 - 1])))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 65535ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15872))) : (arr_9 [i_0] [i_2] [7] [i_4]))), (((/* implicit */unsigned long long int) (~(arr_14 [i_0] [i_1] [i_2] [i_3] [i_4]))))))) ? (arr_1 [i_0 - 1]) : (((/* implicit */long long int) ((int) (+(arr_7 [i_1] [i_1] [i_1] [9])))))));
                            var_23 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [(unsigned char)5] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) : (arr_1 [i_2])))))));
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned short) arr_5 [i_4] [i_3] [i_2] [i_0 + 1]))), (2812006676473311344ULL)));
                        }
                    }
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        var_24 ^= ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_18 [i_5] [4ULL])) - ((~(arr_2 [(unsigned short)4] [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_5] [(unsigned char)9] [(unsigned short)6] [(_Bool)1])) ? (((/* implicit */long long int) min((arr_18 [i_0] [i_0]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [9] [10LL]))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15886))) : (arr_2 [i_1] [i_5])))))) : (min((((((/* implicit */_Bool) arr_9 [4U] [4U] [i_2] [4U])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15904))))), (((/* implicit */unsigned long long int) (short)0)))));
                        var_25 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [(unsigned char)4])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_5] [i_5]))))) : (min((((/* implicit */unsigned int) 241955752)), (arr_20 [i_0] [i_0] [11LL] [5LL] [i_5] [i_5]))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            arr_23 [i_0] [i_0] [1] [i_5] [i_6] [8LL] [i_6] = ((/* implicit */unsigned char) arr_20 [i_0] [i_1] [i_2] [7U] [7U] [i_5]);
                            var_26 ^= ((/* implicit */short) arr_5 [i_0 - 1] [i_1] [i_2] [i_5]);
                            var_27 -= ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)170)), (-12)));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 2) 
                        {
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (~((-(arr_18 [13ULL] [13ULL])))))) ? (((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_7])) ? (arr_11 [i_0] [i_1] [i_2] [i_5] [(short)6]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_5] [i_5] [i_0] [i_0] [i_0]))))) & (((/* implicit */long long int) ((int) arr_22 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_7 + 1] [i_2] [i_7 + 1] [i_7]))))))));
                            var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 65522ULL))) ? (((((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_5] [i_5])) + (arr_0 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0] [i_0] [i_2] [i_5]))))))));
                        }
                    }
                    /* vectorizable */
                    for (short i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        var_30 = arr_6 [i_0 - 1] [i_1] [i_0 - 1] [i_8 - 1];
                        var_31 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (arr_6 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])));
                        var_32 = ((/* implicit */long long int) arr_7 [i_8 + 2] [i_2] [i_0] [i_0]);
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 14; i_9 += 4) 
                    {
                        var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [(short)11] [i_0] [i_2] [i_1] [i_2])) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [(unsigned char)13] [6ULL] [i_2] [i_2] [8] [i_2])))))))) : (max((((/* implicit */long long int) (+(((/* implicit */int) (short)10892))))), (arr_2 [i_0 - 1] [i_0 - 1])))));
                        arr_33 [i_0] [i_9] [i_9] [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)253);
                        arr_34 [i_9] [i_2] [i_2] = ((/* implicit */unsigned short) arr_28 [i_9] [(unsigned char)4] [i_2] [i_9] [(unsigned short)13] [i_1]);
                        var_34 = arr_1 [i_0 - 1];
                    }
                    arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0])) ? (((/* implicit */int) arr_26 [i_0] [i_2])) : ((~(((/* implicit */int) (short)15906))))))), (max((min((((/* implicit */long long int) arr_20 [i_1] [i_1] [i_2] [i_0] [i_1] [i_0 - 1])), (-2041652440998624177LL))), (((/* implicit */long long int) arr_7 [i_0 + 1] [4ULL] [i_0 + 1] [i_0 + 1]))))));
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */unsigned short) var_0);
}
