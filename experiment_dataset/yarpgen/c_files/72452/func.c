/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72452
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
    var_11 = ((/* implicit */int) ((((/* implicit */long long int) var_7)) > ((((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_5)))));
    var_12 *= ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) || (((/* implicit */_Bool) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) var_0)))))))));
                            arr_11 [i_0] [i_0] [i_0] [i_3] [i_2] = ((/* implicit */unsigned char) ((unsigned short) var_2));
                            var_14 = ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
                            arr_12 [i_4] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */int) arr_8 [i_0] [i_0]);
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) % (((/* implicit */int) (unsigned char)6))));
                            var_15 -= ((/* implicit */short) arr_8 [i_0] [i_3]);
                            var_16 -= ((/* implicit */signed char) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) % (min((520192LL), (((/* implicit */long long int) var_1))))))));
                            arr_16 [i_0] [12] [i_2] [i_2] [i_1 + 3] [i_1 - 1] [i_0] = ((/* implicit */_Bool) (((((((~(((/* implicit */int) var_6)))) + (2147483647))) >> (((((/* implicit */int) ((unsigned short) (signed char)-93))) - (65439))))) & ((~(((/* implicit */int) max((var_2), (arr_14 [(signed char)3] [i_1] [i_0] [i_0] [i_5 - 1]))))))));
                        }
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */long long int) var_0);
                            arr_19 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_6]))) : (var_4))))), (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)48))))) - (((240U) / (((/* implicit */unsigned int) arr_10 [i_0] [i_3] [(signed char)1] [(signed char)1] [i_1] [i_0])))))))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_2] |= ((((/* implicit */_Bool) ((signed char) ((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_2]))))))) && (((/* implicit */_Bool) (+(((((/* implicit */int) arr_5 [(unsigned char)7] [i_0])) ^ (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_2] [i_3] [(signed char)8] [i_3]))))))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_7 = 1; i_7 < 12; i_7 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) 238U))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (max((((((/* implicit */int) arr_5 [(signed char)0] [i_1 + 1])) & (arr_18 [i_0] [i_0] [i_1] [i_0] [i_3] [(short)6]))), (((/* implicit */int) ((_Bool) var_9))))) : (((/* implicit */int) var_0))));
                            var_20 += ((/* implicit */short) min((((/* implicit */unsigned int) var_10)), (((((/* implicit */_Bool) ((389362748U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3] [i_0] [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 240U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))) : (max((((/* implicit */unsigned int) arr_14 [i_2] [7U] [i_2] [i_0] [i_0])), (arr_0 [i_2])))))));
                        }
                        for (signed char i_8 = 1; i_8 < 12; i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [(signed char)12] [(short)5] [i_0] [i_8] [6U] [i_0] = ((/* implicit */signed char) ((min((((/* implicit */long long int) ((((/* implicit */int) var_2)) < (((/* implicit */int) (_Bool)1))))), (((var_4) ^ (((/* implicit */long long int) ((/* implicit */int) var_6))))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_8 + 1] [i_1] [2LL] [i_1 + 2] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_1] [i_1 + 1] [(unsigned char)2])))))));
                            var_21 += (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_8] [i_0] [i_0])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((0LL) >> (((((/* implicit */int) arr_14 [i_8 - 1] [i_3] [i_2] [i_1] [i_0])) + (25806))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-26LL))))));
                        }
                        arr_27 [(_Bool)1] [i_0] [i_0] [(short)0] [i_0] = ((/* implicit */short) arr_10 [i_0] [i_0] [i_2] [i_3] [i_0] [i_3]);
                        var_22 = ((/* implicit */unsigned char) min(((short)-21), (((/* implicit */short) var_0))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 2; i_9 < 11; i_9 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            arr_32 [i_0] = ((/* implicit */_Bool) ((var_4) / (((/* implicit */long long int) arr_18 [i_0] [i_1] [i_9] [i_1] [i_1] [i_0]))));
                            arr_33 [i_0] [i_1] [i_0] [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43314))) - (arr_0 [i_0])));
                        }
                        var_23 += ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_14 [(unsigned char)6] [i_2] [i_0] [i_0] [i_0]))))), (max((((/* implicit */long long int) 240U)), (var_4)))));
                        var_24 -= ((/* implicit */signed char) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned int) 18446744073709551615ULL);
                        var_26 = ((/* implicit */unsigned int) arr_34 [i_11] [(signed char)5] [i_0] [i_11]);
                        var_27 -= ((max((((/* implicit */long long int) var_6)), (((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_11] [i_11] [(_Bool)1] [(short)6] [i_2] [i_1] [i_0]))) / (var_4))))) << (max((var_4), (((/* implicit */long long int) arr_9 [i_1 + 3] [i_1] [i_2] [i_11] [i_2] [i_2] [i_2])))));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_4 [i_1 + 1] [i_2]) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 - 1] [i_2])))))) ? ((~(var_4))) : (((/* implicit */long long int) (-(240U)))))))));
                    }
                }
            } 
        } 
    } 
}
