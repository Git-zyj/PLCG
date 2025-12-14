/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6787
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_14 ^= ((/* implicit */_Bool) max((9223372036854775808ULL), (9223372036854775813ULL)));
                        var_15 *= ((/* implicit */signed char) max(((~(arr_0 [i_3 - 1]))), (((/* implicit */unsigned int) (_Bool)1))));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_13 [i_0] [i_1 + 1] [i_2] [i_4 - 1] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)123)) / (((/* implicit */int) (signed char)-120))))) ? (max((((((arr_3 [i_0]) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) 2499538269422628413LL)) ? (arr_3 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2])))))));
                        var_16 = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) (_Bool)0)), (((2499538269422628413LL) >> (((((/* implicit */int) arr_6 [i_0] [i_4 - 1])) + (125)))))))));
                    }
                    /* LoopSeq 4 */
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 1] = ((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) ((unsigned short) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 2; i_6 < 21; i_6 += 4) 
                        {
                            arr_21 [i_6] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */_Bool) arr_3 [i_6]);
                            var_17 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-122))))), (((unsigned int) (signed char)32))));
                            arr_22 [i_0] [i_6] [i_2] [i_5 + 1] [i_6] = ((/* implicit */long long int) max((max((9223372036854775790ULL), (min((9223372036854775805ULL), (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]))))), (((((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_6])) & (arr_5 [i_2] [i_6]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111)))))));
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 4) 
                        {
                            arr_25 [i_0] [i_1 + 1] [i_2] [i_5] [i_7] = ((((/* implicit */_Bool) max((14690404319191323410ULL), (((/* implicit */unsigned long long int) (unsigned short)42693))))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 524287LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_15 [i_2] [i_7 - 1]))))));
                            var_18 ^= ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) ((unsigned short) var_3))))), (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                            arr_26 [i_0] = ((/* implicit */long long int) max((((((/* implicit */int) ((unsigned char) (_Bool)1))) * (((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_5 + 1] [i_7]))))))), (((/* implicit */int) arr_6 [i_0] [i_1]))));
                            arr_27 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_7 [i_7] [i_7] [i_7 + 1])), (((((/* implicit */_Bool) 2182121940U)) ? (arr_23 [i_1 - 1] [i_2] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (max((-4LL), (((/* implicit */long long int) arr_12 [i_0] [i_1 + 1] [i_2] [i_7 + 2]))))));
                        }
                        var_19 &= var_3;
                        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_11 [i_0] [i_1] [i_1 + 1] [i_1])))) - (((((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_5] [i_5 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))) << (((3244767776943195643LL) - (3244767776943195605LL)))))));
                        arr_28 [i_0] [i_0] [i_0] [i_1] [i_2] [i_5 - 1] = ((/* implicit */short) var_7);
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 4) 
                    {
                        arr_32 [i_0] [i_1] [i_2] [i_2] [i_2] [i_8] = ((/* implicit */unsigned long long int) ((((((long long int) (unsigned char)16)) + (((/* implicit */long long int) ((/* implicit */int) var_5))))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                        arr_33 [i_1] [i_2] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) max(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1))))) * (((/* implicit */int) min((((/* implicit */short) (signed char)-120)), ((short)1))))));
                        var_21 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) ((_Bool) 524282LL))) > (((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_6 [i_0] [i_1 - 1])))))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
                    {
                        arr_37 [i_0] [i_1] [i_2] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) (_Bool)1)), (4U)))))) && (((/* implicit */_Bool) ((((/* implicit */int) max((var_13), (((/* implicit */unsigned char) arr_4 [i_0]))))) ^ ((~(((/* implicit */int) (_Bool)1)))))))));
                        var_22 &= ((/* implicit */_Bool) var_7);
                    }
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
                    {
                        arr_40 [i_0] [i_1 - 1] [i_2] [i_10] = ((/* implicit */unsigned char) (((((_Bool)1) ? (arr_12 [i_0] [i_0] [i_1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1 + 1] [i_2] [i_10]))))) : (((/* implicit */int) ((short) (_Bool)1))))))));
                        var_23 += ((/* implicit */unsigned long long int) (signed char)24);
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) ((((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
}
