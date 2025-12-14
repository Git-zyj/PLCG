/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8194
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_0] [i_1] [14] [i_0])) : (((/* implicit */int) (short)-6745)))) > (((/* implicit */int) ((arr_0 [i_2]) >= (((/* implicit */long long int) -1370850327)))))))) < (((/* implicit */int) var_9))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_3] = ((/* implicit */int) max((((/* implicit */long long int) ((signed char) arr_4 [i_0] [i_1] [i_2] [i_3]))), ((+(4214887372043763970LL)))));
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [16] [16])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (short)16383)))))))) : (((((((/* implicit */_Bool) 9563038957783099670ULL)) ? (9563038957783099670ULL) : (8883705115926451945ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                        var_15 = ((int) 8883705115926451929ULL);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (((((/* implicit */_Bool) arr_9 [i_0] [i_4])) ? (9563038957783099684ULL) : (((/* implicit */unsigned long long int) arr_0 [i_4]))))))));
                        var_16 *= ((/* implicit */_Bool) (~((~(((/* implicit */int) var_0))))));
                    }
                    for (unsigned short i_5 = 1; i_5 < 16; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max((9563038957783099685ULL), (((/* implicit */unsigned long long int) (unsigned short)48202)))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned short)48202)) : (((/* implicit */int) (_Bool)0)))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */int) ((unsigned int) min((((/* implicit */long long int) arr_12 [i_5 - 1] [i_5] [i_6 - 1] [i_6 - 1])), (max((((/* implicit */long long int) arr_13 [(unsigned char)15] [(unsigned short)11] [7LL] [i_6])), (arr_3 [7]))))));
                            arr_20 [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_6))))) ? (max((arr_13 [i_0] [i_1] [i_5 - 1] [i_5]), (((/* implicit */int) var_4)))) : ((+(((/* implicit */int) var_6))))));
                            var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((int) arr_4 [i_0] [i_1] [i_2] [i_5 + 1]))) ? (((9563038957783099712ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (9563038957783099704ULL))))), (((/* implicit */unsigned long long int) (+(arr_17 [i_0] [i_1] [i_2] [i_5 + 1] [i_6 - 1]))))));
                            var_20 = ((((((((/* implicit */long long int) 262143)) % ((-9223372036854775807LL - 1LL)))) - (((/* implicit */long long int) ((int) var_4))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_5 [i_1] [i_2] [8])))) ? (1474766318) : (arr_18 [i_6] [i_5 + 2] [i_6 - 1])))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 1; i_7 < 16; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            var_21 = arr_9 [11] [i_1];
                            var_22 = ((/* implicit */signed char) arr_0 [(unsigned short)16]);
                            arr_26 [i_0] [i_7] [1] [i_7] [i_7 - 1] [i_8] [i_8] = ((/* implicit */short) (~(((/* implicit */int) (signed char)74))));
                        }
                        for (signed char i_9 = 1; i_9 < 17; i_9 += 2) 
                        {
                            arr_30 [i_1] [8ULL] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_9 - 1] [i_7 + 1] [i_7 - 1])) && (((/* implicit */_Bool) arr_10 [i_7 - 1] [i_7 - 1] [i_9 - 1] [i_9] [i_9 + 1]))));
                            var_23 = ((/* implicit */unsigned short) ((unsigned long long int) arr_3 [i_9]));
                            var_24 = ((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_7 - 1] [i_7 - 1] [i_2] [i_9 - 1]))));
                            var_25 ^= ((/* implicit */unsigned short) ((1697406593U) | (((/* implicit */unsigned int) ((int) 780320626)))));
                        }
                        arr_31 [i_7] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 9563038957783099668ULL)) ? (((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_2] [17LL] [i_2] [i_7 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_4 [i_0] [i_1] [i_2] [6]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2))))));
                    }
                }
                var_26 = ((/* implicit */short) (_Bool)1);
                var_27 ^= ((/* implicit */unsigned short) 129024);
            }
        } 
    } 
    var_28 += ((/* implicit */int) min((((/* implicit */long long int) var_7)), (max((var_11), (((/* implicit */long long int) var_7))))));
}
