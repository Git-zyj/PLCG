/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81339
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-61))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) arr_10 [i_4] [i_1] [(unsigned char)4] [i_3]))));
                            var_16 *= ((/* implicit */_Bool) (~(arr_3 [(_Bool)1] [i_3] [(_Bool)1])));
                            arr_15 [i_0] [(unsigned short)10] [i_2 + 1] [i_1] |= (unsigned char)99;
                        }
                        for (int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_0] [i_2 - 1] [i_3] [i_5] [i_3 - 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [i_2 + 2] [i_0] [i_0] [1ULL])) ^ (min((((/* implicit */unsigned long long int) arr_10 [i_2 + 2] [i_0] [i_0] [i_2])), (arr_14 [i_3] [i_3 + 1] [i_2 + 2] [(short)0] [i_1] [i_1])))));
                            arr_20 [i_0] [i_5] [i_0] [i_1] [i_5] = ((/* implicit */short) arr_3 [i_0] [i_0] [i_0]);
                            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (arr_13 [i_0] [i_0] [i_3 - 1]) : (arr_13 [i_0] [i_0] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]))) : (((((/* implicit */_Bool) (signed char)-49)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10652))) : (4290772992U))))))));
                        }
                        arr_21 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_2 + 1] [i_2]))))) << (((((/* implicit */int) arr_5 [i_3 + 1] [i_0] [i_0] [i_2 - 1])) + (123)))));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_11 [11ULL] [i_1] [i_2] [i_3]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]);
                        var_20 = ((/* implicit */unsigned long long int) ((arr_18 [i_2 + 2] [i_2 - 1] [(unsigned char)15] [i_2 - 1]) ? (((/* implicit */int) arr_18 [i_2 + 2] [i_2 - 1] [i_2] [i_2])) : (((/* implicit */int) arr_18 [i_2 + 2] [i_2 - 1] [i_2 - 1] [(signed char)14]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 1; i_7 < 16; i_7 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2752775075U)) ? (((/* implicit */int) (short)17297)) : (((/* implicit */int) (short)17297))));
                            var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_7] [i_2 - 1] [i_2] [i_2] [(signed char)0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_9 [i_0] [i_2 + 2] [i_2 + 2] [i_6] [i_7])));
                        }
                    }
                    for (unsigned int i_8 = 2; i_8 < 13; i_8 += 1) 
                    {
                        var_23 = ((((/* implicit */_Bool) max((arr_2 [i_0] [i_8 + 3] [i_2 - 1]), (arr_2 [i_1] [i_8 + 3] [i_2 - 1])))) ? (((((((/* implicit */_Bool) 1165562700)) ? (arr_2 [i_1] [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [(unsigned char)9] [i_2] [i_8] [i_0]))))) & (((/* implicit */unsigned long long int) (~(arr_9 [i_8] [(signed char)0] [i_2] [i_8] [10ULL])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)17265)) ? (-630988014) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_2 + 2] [i_2 + 2]))))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [4] [(_Bool)1] [(_Bool)1] [i_0]))))), (-409955204))))));
                        arr_29 [i_0] [i_8] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_8] [i_0] [(signed char)14] [i_8]))));
                        arr_30 [i_0] [i_0] = ((/* implicit */int) arr_12 [i_8] [i_2 + 2] [(_Bool)1] [i_0]);
                    }
                    arr_31 [i_0] = ((/* implicit */signed char) (-((+(469762048)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_9 = 0; i_9 < 16; i_9 += 1) 
    {
        arr_35 [i_9] = ((/* implicit */unsigned char) (-((-(var_4)))));
        arr_36 [i_9] [i_9] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [i_9]))))), (var_12))), (((/* implicit */long long int) max(((-(arr_7 [i_9] [i_9] [i_9]))), ((~(((/* implicit */int) var_0)))))))));
        arr_37 [i_9] = ((/* implicit */short) ((arr_10 [i_9] [i_9] [i_9] [i_9]) - (((/* implicit */int) (unsigned short)65535))));
    }
}
