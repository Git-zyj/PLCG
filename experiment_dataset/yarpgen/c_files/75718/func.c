/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75718
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_19 ^= ((((/* implicit */_Bool) arr_0 [i_2 - 3])) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) arr_1 [i_2 - 2] [i_2 - 3])));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_6 [(_Bool)1] [i_1] [(signed char)23]))));
                                arr_13 [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_0]))));
                            }
                            for (signed char i_5 = 3; i_5 < 23; i_5 += 2) 
                            {
                                var_21 ^= ((/* implicit */unsigned char) (+(3739943535U)));
                                arr_18 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 1127464739U))) ? ((-(((/* implicit */int) arr_11 [i_5 - 1] [i_2] [15U] [i_2 - 1] [i_2 - 3])))) : ((-(((/* implicit */int) min((arr_11 [i_0] [i_1] [i_2] [i_3] [i_5 - 3]), (((/* implicit */unsigned short) arr_8 [i_0])))))))));
                                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (~(arr_10 [i_1] [i_3] [i_1] [i_1] [i_0] [i_1]))))));
                                arr_19 [i_0] [i_1] [(signed char)23] [i_2] [i_1] = ((signed char) arr_8 [i_2 - 2]);
                            }
                            for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                            {
                                arr_22 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((int) arr_8 [i_2 - 1]))) ^ ((+(arr_20 [i_2 + 1] [(unsigned short)16] [i_2] [i_2] [i_6] [i_0])))));
                                var_23 &= ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */int) arr_8 [(signed char)16])) : (arr_4 [i_0] [i_0]))), (((((/* implicit */int) (unsigned short)696)) + (arr_6 [i_6] [(unsigned short)3] [i_0])))))));
                            }
                            var_24 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_14 [i_0] [(short)2] [i_2 - 3] [i_2] [i_2] [i_3])) : (arr_6 [i_0] [i_2 - 3] [i_2])))));
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((signed char) max((arr_0 [i_2 - 2]), ((signed char)-51)))))));
                        }
                    } 
                } 
                arr_23 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_0]))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((_Bool) 555023761U)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_7 = 2; i_7 < 11; i_7 += 3) 
    {
        for (unsigned int i_8 = 1; i_8 < 10; i_8 += 4) 
        {
            {
                var_26 = ((/* implicit */_Bool) ((unsigned long long int) min((555023761U), (((/* implicit */unsigned int) (unsigned short)7590)))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 3; i_9 < 8; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                            {
                                var_27 = ((/* implicit */_Bool) arr_4 [i_7 - 2] [i_7 + 1]);
                                var_28 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)64603)) ? (arr_9 [i_9 + 4] [i_11]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_10] [(_Bool)0])) - (((/* implicit */int) arr_33 [i_9] [i_11])))))))));
                                arr_37 [i_7] [i_11] = ((/* implicit */unsigned short) (~(((((/* implicit */int) min((arr_11 [i_8] [12U] [i_9] [i_10] [i_11]), (((/* implicit */unsigned short) (_Bool)0))))) * (((/* implicit */int) (unsigned short)1344))))));
                                var_29 = ((/* implicit */long long int) arr_3 [(short)8] [i_7]);
                            }
                            var_30 = ((/* implicit */long long int) ((((unsigned long long int) arr_31 [i_7 - 1] [3] [i_9 + 1] [i_7])) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)66)), ((unsigned short)64773)))))));
                        }
                    } 
                } 
                var_31 ^= ((/* implicit */int) arr_28 [i_8 + 1]);
                var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_17 [i_7 - 1])) ? (((/* implicit */int) arr_17 [i_7 - 1])) : (((/* implicit */int) arr_17 [i_7 - 1])))) * (((((/* implicit */int) arr_17 [i_7 + 1])) / (var_16)))));
            }
        } 
    } 
    var_33 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)7590)) || (((/* implicit */_Bool) 555023761U)))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_2))))));
    var_34 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) * ((-(((/* implicit */int) var_9))))))), (var_0)));
}
