/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97932
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_11 |= ((/* implicit */signed char) ((short) (~(((((/* implicit */int) var_2)) ^ (((/* implicit */int) (signed char)-55)))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        var_12 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)35))))) ? (arr_5 [(signed char)16] [i_0] [i_0]) : (arr_3 [(signed char)6] [i_0 - 1])))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            arr_13 [i_2] = ((/* implicit */long long int) arr_11 [i_0] [(_Bool)1] [9LL] [i_2] [9LL] [i_4]);
                            arr_14 [(_Bool)1] [i_3] [i_2] |= ((/* implicit */unsigned short) (~((~(max((((/* implicit */int) arr_8 [(unsigned char)0])), (-1)))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 2) 
                        {
                            var_13 &= ((/* implicit */unsigned short) arr_3 [i_2] [i_5]);
                            arr_18 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_5])) || ((!(((/* implicit */_Bool) (signed char)-66))))));
                            arr_19 [i_0] [i_1] [(signed char)11] [i_0] [(signed char)11] [(unsigned short)2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (arr_3 [i_0 - 1] [i_0])));
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 16; i_6 += 2) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_1 + 2] [i_1] [i_3 + 1] [i_6 + 2] [i_6] [(signed char)0])) != (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2] [i_3 + 1]))));
                            var_15 ^= ((/* implicit */int) ((15947199612939984253ULL) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3)))))));
                            var_16 = ((/* implicit */unsigned short) (signed char)-57);
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            arr_28 [(_Bool)1] [i_1] [i_2] [i_3] [2ULL] &= ((((/* implicit */int) arr_22 [i_0] [i_7 + 1] [i_2] [i_2] [i_0 + 1] [i_0])) - (((/* implicit */int) arr_22 [i_7] [i_7 + 1] [i_2] [i_2] [i_0 + 1] [(short)17])));
                            arr_29 [i_7] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [(signed char)0] [i_7]);
                            arr_30 [i_7] [i_3 + 1] [(_Bool)1] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_2]))))) ? (-20) : ((~(((/* implicit */int) arr_10 [5LL] [i_1] [i_2] [i_2] [i_3 - 1] [i_3] [i_7]))))));
                            arr_31 [i_7 + 1] [i_3] [10LL] [i_1 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) (_Bool)1))));
                            var_17 += ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
                        }
                        for (unsigned short i_8 = 1; i_8 < 16; i_8 += 1) 
                        {
                            arr_36 [i_0] [i_0] [i_0] &= ((/* implicit */signed char) (_Bool)1);
                            var_18 = ((/* implicit */signed char) max((var_7), (((/* implicit */unsigned short) arr_11 [(unsigned short)14] [i_1 + 1] [i_2] [i_3] [(unsigned short)4] [i_1 + 1]))));
                        }
                        var_19 = ((/* implicit */signed char) (+(arr_26 [i_3 + 1] [i_0 + 1] [i_2] [i_1 - 2] [i_3 + 2])));
                    }
                    for (short i_9 = 1; i_9 < 17; i_9 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned char) (unsigned short)42464);
                        var_21 = max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_1] [i_2] [i_2] [i_9])) ? (((/* implicit */int) arr_20 [i_0] [i_0] [i_1 + 1] [i_2] [i_2] [i_2])) : (arr_25 [i_1] [i_2]))), (((/* implicit */int) ((-3099131331651161168LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_9]))))))))), ((~(arr_9 [i_0] [i_9]))));
                        var_22 = ((/* implicit */_Bool) (((((+(arr_25 [i_1 + 1] [i_0 + 1]))) + (2147483647))) >> (((((((/* implicit */int) (signed char)45)) >> (((((/* implicit */int) (short)-21947)) + (21949))))) % ((~(((/* implicit */int) arr_38 [i_9 - 1]))))))));
                        var_23 = ((/* implicit */int) (unsigned char)0);
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) var_5);
}
