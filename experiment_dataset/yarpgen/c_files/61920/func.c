/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61920
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
    var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned int) -2026514057)), (1117103900U)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    var_18 += ((/* implicit */unsigned int) arr_5 [i_2 + 3]);
                    arr_8 [4U] [4U] [i_0] = ((/* implicit */short) arr_1 [i_0]);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) + (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (arr_4 [i_0] [i_0] [i_0 + 4] [i_0])))));
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 3) 
                        {
                            arr_24 [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_21 [i_4] [i_5] [i_5] [i_6] [i_6] [i_7 + 1])) : (((/* implicit */int) arr_21 [12] [i_7] [12] [i_7] [i_7 + 1] [i_7 - 1])))) & (((/* implicit */int) max((arr_11 [i_7 + 1]), (arr_11 [i_7 + 1]))))));
                            arr_25 [i_3] [i_4] [i_3] [i_5] [i_6] [(unsigned char)22] [i_7 - 1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) max(((short)11216), (((/* implicit */short) arr_21 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 1])))))));
                            var_19 = ((/* implicit */unsigned char) ((max((arr_21 [i_7 + 1] [i_7 + 1] [15] [i_7] [i_7 - 1] [i_7]), (arr_21 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7]))) && (((((/* implicit */int) arr_21 [i_7 + 1] [i_7 + 1] [i_7] [i_7] [i_7 - 1] [i_7])) < (((/* implicit */int) arr_21 [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1]))))));
                        }
                        for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_28 [i_6] [i_6] [i_6] [i_6] [i_4] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)28))));
                            arr_29 [i_3] [i_6] [i_6] [(short)16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_3] [i_4] [(_Bool)1] [i_6])) ^ (((/* implicit */int) arr_18 [i_3] [i_4] [i_5] [i_6]))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_22 [i_3] [i_3])) : (((/* implicit */int) arr_22 [i_3] [i_3])))) : (((/* implicit */int) min((arr_22 [i_4] [i_5]), (arr_22 [i_8] [i_5]))))));
                        }
                        var_20 += ((/* implicit */short) (+(((((((/* implicit */int) arr_22 [i_6] [i_3])) + (2147483647))) >> (((((/* implicit */int) arr_22 [i_5] [i_4])) + (30663)))))));
                    }
                } 
            } 
        } 
        var_21 = min((max((arr_13 [i_3] [17LL] [i_3]), (((/* implicit */unsigned int) (unsigned char)41)))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_3] [i_3] [i_3]))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 1) 
    {
        arr_34 [i_9] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) & (arr_30 [i_9] [i_9]))), (((/* implicit */unsigned int) max((arr_21 [i_9] [16U] [i_9] [i_9] [i_9] [i_9]), (arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (!(max(((_Bool)1), (arr_31 [i_9]))))))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((max((3584222115U), (((/* implicit */unsigned int) (unsigned char)83)))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 7405972994729517029ULL)))))))))));
        arr_35 [i_9] [i_9] = ((/* implicit */unsigned char) 0U);
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        arr_39 [i_10] = ((/* implicit */short) arr_19 [i_10]);
        arr_40 [i_10] [(unsigned char)1] = ((/* implicit */long long int) arr_14 [i_10]);
        var_24 = ((/* implicit */unsigned long long int) ((arr_11 [i_10]) ? (((/* implicit */int) arr_11 [i_10])) : (((/* implicit */int) arr_10 [i_10]))));
    }
}
