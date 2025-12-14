/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71481
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
    for (signed char i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 2; i_3 < 24; i_3 += 4) 
                    {
                        arr_10 [19LL] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((arr_1 [15]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2] [i_1])))))))) >= (min((((9223372036854775807LL) % (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2] [i_3]))))), (((/* implicit */long long int) arr_9 [i_0] [i_0 - 1] [i_0] [i_1] [i_1] [i_3 - 1]))))));
                        arr_11 [i_0] [i_0] [(unsigned short)12] [21ULL] = min((((min((3422159783U), (((/* implicit */unsigned int) var_0)))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_2]))))), (((((((/* implicit */_Bool) 282836298U)) ? (arr_1 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)192)) : (((/* implicit */int) var_7))))))));
                        arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) (_Bool)0);
                        var_15 = ((((/* implicit */_Bool) arr_3 [i_1] [i_3])) && (((/* implicit */_Bool) (-((-(((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [(_Bool)1]))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) (-(arr_5 [i_0 + 1])));
                        var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [8] [i_1] [(unsigned short)18] [i_0 - 1] [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_9 [(unsigned short)17] [(unsigned short)0] [i_2] [i_0 - 1] [(unsigned short)0] [i_0])) : (((/* implicit */int) arr_9 [13ULL] [i_1] [i_2] [i_0 + 2] [i_4] [(unsigned short)12]))));
                        /* LoopSeq 4 */
                        for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((arr_1 [i_2]) * (4294967295U))) * (arr_1 [i_0])));
                            var_19 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 2]))) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 + 1])));
                            var_20 = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0 - 1] [i_1]))));
                        }
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            arr_22 [(unsigned char)24] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))));
                            arr_23 [i_0] [(unsigned char)20] [16] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((short) (-(var_3))));
                            arr_24 [i_0] [i_1] [i_1] [20LL] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) arr_3 [i_0] [i_0 - 1]));
                            arr_25 [i_0] [i_1] [3LL] [i_4] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0 + 1]))));
                            var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_6)) % (((/* implicit */int) (_Bool)1))))));
                        }
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 + 2] [i_0] [i_0])) ? (arr_16 [5U] [5U] [i_0] [i_4] [i_0 + 1] [(_Bool)1]) : (arr_16 [12U] [i_1] [i_0] [i_4] [i_0 - 1] [i_7])));
                            var_23 = ((/* implicit */_Bool) var_10);
                            var_24 = (-(1U));
                        }
                        for (signed char i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
                        {
                            arr_31 [24U] [i_0] [20U] [24U] [(unsigned short)10] [i_4] [(short)1] = arr_18 [(unsigned short)7] [(unsigned short)7] [i_1] [i_2] [23U] [i_8];
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_0] [i_0 - 1] [i_0] [14U] [i_0 - 1] [i_0 + 2]))));
                        }
                        var_25 = ((/* implicit */_Bool) (-(arr_1 [i_0 + 1])));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 1; i_9 < 24; i_9 += 2) 
                    {
                        arr_36 [i_0] = ((/* implicit */unsigned int) (-(arr_16 [i_9 - 1] [i_9 - 1] [i_0] [20U] [i_9 - 1] [i_2])));
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 25; i_10 += 1) 
                        {
                            arr_39 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_12)) | (((/* implicit */int) var_12))))));
                            arr_40 [i_0] [i_1] [i_1] [(_Bool)1] [i_1] = ((((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0]))));
                        }
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? ((+(var_2))) : (((/* implicit */long long int) arr_20 [i_0] [i_1] [i_1] [i_1] [i_9]))));
                        arr_41 [i_0] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_37 [i_0] [i_0] [i_2] [i_9 + 1] [i_0 + 1])) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_0])))));
                    }
                    var_27 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) ((arr_4 [i_2] [i_0] [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))) - (((/* implicit */int) ((((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [(_Bool)1] [i_0] [5U] [i_0] [5U]))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [4U]))))))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 562949953421311ULL))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)1)), (0U))))))), (var_6)));
    var_29 &= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (min((((/* implicit */unsigned int) var_13)), (((unsigned int) var_1))))));
    var_30 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max(((~(((/* implicit */int) var_0)))), ((-(((/* implicit */int) var_12))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (var_3))) - (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_0)), (var_12)))))))));
}
