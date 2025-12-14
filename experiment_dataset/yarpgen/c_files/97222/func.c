/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97222
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
    var_17 = ((/* implicit */unsigned char) ((_Bool) var_5));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (unsigned short i_3 = 3; i_3 < 13; i_3 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0] [i_0] [(short)8] [i_3]);
                            arr_13 [i_3] = ((/* implicit */unsigned long long int) arr_2 [i_2] [(short)12]);
                            var_19 -= ((/* implicit */unsigned char) arr_4 [i_0]);
                            var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_3 - 2] [i_3] [i_3 - 2] [i_3 - 3]))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */long long int) min((var_13), (((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [(signed char)9]))))) : ((~(((/* implicit */int) arr_4 [i_0]))))))));
                            arr_18 [i_0] [i_3] = ((/* implicit */long long int) min((((/* implicit */int) ((short) var_15))), (((((/* implicit */_Bool) arr_14 [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_14 [i_3 + 1] [4U] [i_3 + 2] [4U] [i_3 + 2] [0ULL])) : (((/* implicit */int) arr_14 [i_3] [(unsigned char)2] [i_3] [i_3] [i_3 + 2] [i_3]))))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [i_3 + 1])) <= (((/* implicit */int) arr_3 [i_3 + 2])))) ? (((((/* implicit */_Bool) arr_3 [i_3 - 3])) ? (((/* implicit */int) arr_3 [i_3 + 1])) : (((/* implicit */int) arr_3 [i_3 - 1])))) : (((/* implicit */int) arr_3 [i_3 - 1])))))));
                            var_22 *= ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_7)), (var_0)))));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            arr_22 [i_0] [(unsigned short)10] [i_3] [i_2] [6ULL] [i_6] [(short)4] = ((/* implicit */signed char) arr_4 [i_2]);
                            arr_23 [i_0] [i_1] [i_0] [i_2] [i_3 - 3] [i_3] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_21 [i_6] [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))));
                            var_23 = ((/* implicit */signed char) ((short) arr_9 [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 3] [3] [i_3 + 1]));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_19 [2ULL] [2ULL] [i_1] [i_2]))) ? (arr_1 [i_3 - 2]) : (((/* implicit */unsigned long long int) var_14)))))));
                            var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_14)))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) (_Bool)1))) - (((/* implicit */int) arr_11 [i_3 + 1] [i_3 - 3] [i_3 + 1] [i_3 - 3] [i_3]))));
                            var_27 += ((/* implicit */signed char) var_0);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_31 [i_0] [i_1] [i_1] [i_0] [i_3] [i_8] = ((/* implicit */short) (~(-9223372036854775802LL)));
                            var_28 += ((max((arr_29 [(signed char)3] [i_8] [i_3] [i_2] [i_1] [i_1] [i_0]), (arr_29 [i_0] [i_0] [i_2] [i_3 - 3] [i_8] [i_2] [i_8]))) ? (((unsigned long long int) arr_9 [i_0] [3] [i_2] [i_3] [i_8] [i_1])) : (((/* implicit */unsigned long long int) max((arr_9 [i_0] [i_0] [8ULL] [i_2] [i_3 - 1] [i_8]), (arr_9 [i_0] [i_0] [i_0] [i_3 - 3] [i_3 - 3] [i_8])))));
                        }
                        var_29 = ((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_1] [i_3 - 1] [i_2] [(unsigned char)3]);
                    }
                } 
            } 
        } 
        arr_32 [i_0] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_1)), (((unsigned long long int) max((arr_4 [i_0]), (arr_19 [i_0] [i_0] [i_0] [0U]))))));
    }
}
