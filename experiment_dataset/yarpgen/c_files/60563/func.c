/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60563
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
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [i_0 - 1]);
                                var_16 = ((/* implicit */unsigned char) (_Bool)0);
                            }
                        } 
                    } 
                    var_17 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_1 - 1] [i_2])) ? (((/* implicit */long long int) var_4)) : (((((/* implicit */_Bool) (signed char)127)) ? (-3846691014145337187LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_6 = 1; i_6 < 22; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_6 + 2] [i_0 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_6 + 2] [i_0 - 1])) + (76)))))) ? (((/* implicit */int) max((arr_9 [i_6 + 2] [i_1 + 1] [i_0] [i_0 - 1]), (((/* implicit */short) var_5))))) : (min((arr_6 [i_0 + 2] [i_0] [i_0]), (((/* implicit */int) ((unsigned short) arr_5 [i_5] [i_2] [i_1] [i_0])))))));
                            var_19 = ((/* implicit */unsigned short) min((max((arr_17 [i_0 + 2] [i_1] [i_1 - 1] [i_1 - 1] [i_2] [i_6] [i_6 - 1]), (arr_17 [i_0 + 2] [i_0] [i_1 - 1] [i_1 - 1] [i_5] [i_5] [i_6 - 1]))), (((/* implicit */long long int) var_14))));
                            var_20 = (((((~(((/* implicit */int) arr_12 [i_1 - 2] [i_0] [i_0] [i_0] [i_0 + 1])))) + (2147483647))) >> (((/* implicit */int) (_Bool)1)));
                        }
                        var_21 = ((/* implicit */unsigned char) (unsigned short)2);
                        var_22 = ((((/* implicit */_Bool) max((((var_13) & (2305825417027649536LL))), (((/* implicit */long long int) (_Bool)0))))) ? (min((((arr_16 [i_5] [i_5] [i_2] [i_1] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_3))))), (min((arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_4)))))) : (((/* implicit */long long int) arr_0 [i_0 + 1] [i_5])));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)21434)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))), ((~(((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0])) >> (((((/* implicit */int) (unsigned short)4293)) - (4283)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_8 [i_0 + 2] [i_1] [i_2] [i_5]))))) : (((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_2)))))));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1] [i_5])))))))) * (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_5] [i_7]))) + (arr_17 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))))));
                            var_25 = ((/* implicit */unsigned short) (short)29343);
                        }
                        for (int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 14343972901377438399ULL))));
                            var_27 *= ((/* implicit */unsigned long long int) arr_0 [i_0] [i_8]);
                            var_28 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1 + 1] [i_1] [i_1] [i_0])) ? (((((/* implicit */int) (unsigned short)1)) >> (((1736676734U) - (1736676710U))))) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_1 - 1]))))), (((((/* implicit */_Bool) arr_19 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0])) ? ((-(var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                            var_29 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0 + 1] [i_0])) ? (arr_23 [i_1 - 1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) -7573290181607541273LL))))));
                        }
                        /* vectorizable */
                        for (short i_9 = 1; i_9 < 20; i_9 += 2) 
                        {
                            var_30 = (unsigned short)1;
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (unsigned short)15))));
                            var_32 = ((long long int) (+(var_2)));
                            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_15 [i_0 - 1] [i_1] [i_2])) : (((/* implicit */int) arr_15 [i_0 + 2] [i_0] [i_2])))))));
                            var_34 *= ((/* implicit */unsigned int) ((short) arr_14 [i_9 - 1] [i_9 + 1] [i_9] [i_9] [i_9]));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            {
                                var_35 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */long long int) (~(((arr_26 [i_0 - 1] [i_1] [i_2] [i_10] [i_10] [i_11]) ^ (((/* implicit */int) arr_14 [i_0 + 2] [i_1] [i_2] [i_10] [i_11]))))))) : (((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 - 2])) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_9 [i_11] [i_2] [i_1 + 1] [i_0])) ? (((/* implicit */long long int) 4294967295U)) : (1915515747349648336LL)))))));
                                var_36 = (unsigned char)12;
                                var_37 = (_Bool)0;
                                var_38 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_39 ^= ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) -1962291413)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14))))), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) var_6))));
}
