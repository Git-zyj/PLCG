/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85665
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
    var_12 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 332229736)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (var_6) : (min((var_6), (var_3))))) >> (((((/* implicit */int) var_10)) + (152)))));
    var_13 ^= ((/* implicit */int) ((min((((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) var_5))))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (var_7))))) + (((/* implicit */long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))))))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) var_5))))) || (((var_9) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (min((4ULL), (var_9))) : (((/* implicit */unsigned long long int) ((long long int) var_2)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
                {
                    var_15 = ((-1086960163) & (((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 2])) ? (1086960169) : (((/* implicit */int) arr_5 [i_1 - 2] [i_1 + 3] [i_1 + 3])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [i_2])) ^ (var_4)))) ? ((-(((/* implicit */int) var_1)))) : (var_5)))) ? (min((((/* implicit */unsigned long long int) arr_5 [16] [i_1] [i_1 + 3])), ((+(arr_12 [1LL]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_1 + 1] [i_1 + 1] [i_4 + 2]))))));
                                var_17 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 2ULL)) ? (1ULL) : (((/* implicit */unsigned long long int) -2350977060343415352LL)))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_7 [i_4] [0ULL] [0ULL])) >> (((2780802914U) - (2780802895U))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) arr_11 [(unsigned char)1] [(unsigned char)1] [(signed char)2])) : (((/* implicit */int) arr_5 [i_0] [(_Bool)1] [(signed char)21])))))))));
                                var_18 = ((/* implicit */int) ((((unsigned long long int) arr_0 [i_1 + 2] [i_1])) >> (((((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (_Bool)1)))) - (202)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) 4187694205U);
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1 - 1] [(short)1]))) : (((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_12 [(unsigned short)7])))))) ? (((4ULL) >> (((2780802918U) - (2780802897U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_2])))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                {
                    var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1 + 3] [i_1])) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 2]))));
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_7 = 2; i_7 < 23; i_7 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_7] [8ULL] [(unsigned short)1] [(_Bool)0]))) : (arr_4 [(signed char)6] [14LL]))) >> (((2002996796) - (2002996756)))));
                            var_23 = ((/* implicit */signed char) var_2);
                            var_24 ^= ((/* implicit */_Bool) (~(arr_13 [i_1 - 1] [i_1 - 2] [i_1 + 2])));
                        }
                        for (long long int i_8 = 2; i_8 < 23; i_8 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned int) var_9);
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (3882473468U) : (2780802918U)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 629900865)) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (long long int i_9 = 2; i_9 < 23; i_9 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */long long int) (_Bool)1);
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_9 - 1] [i_1] [(signed char)21] [i_1 + 1] [21U])) ? (arr_0 [10LL] [i_6 - 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2780802934U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1514164391U))))));
                        }
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)5280))) : (61499561865388577LL)))) ? (((((/* implicit */_Bool) -489173029460027277LL)) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (unsigned short)3304)))) : (((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 3] [i_6 - 1]))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_14 [i_0] [i_0] [i_0]) + (2147483647))) << (((arr_6 [i_0] [i_6]) - (604467922U)))))) ? (((/* implicit */int) arr_24 [i_0] [i_1] [(unsigned short)16])) : (((/* implicit */int) ((arr_4 [i_1] [(_Bool)1]) >= (((/* implicit */long long int) ((/* implicit */int) arr_20 [(signed char)19] [i_1]))))))));
                    }
                    for (long long int i_10 = 1; i_10 < 22; i_10 += 1) 
                    {
                        var_31 = ((/* implicit */long long int) arr_25 [i_0]);
                        var_32 = ((/* implicit */unsigned short) (+(((arr_26 [i_10] [4U] [i_10]) ? (((/* implicit */unsigned int) arr_25 [i_0])) : (arr_19 [(short)10] [(short)10] [(unsigned short)23] [(unsigned short)23] [i_10 - 1] [i_0] [i_0])))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (signed char i_12 = 1; i_12 < 23; i_12 += 4) 
                        {
                            {
                                var_33 *= ((/* implicit */unsigned int) arr_27 [i_0] [(unsigned short)8] [i_5] [(unsigned char)1] [(signed char)16] [23LL]);
                                var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_12 - 1] [i_12 - 1] [i_11] [i_11])) ? (((/* implicit */int) var_1)) : (arr_14 [i_0] [i_12 - 1] [i_11])));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */int) (~(var_9)));
                    var_36 = ((/* implicit */signed char) min((((/* implicit */long long int) (signed char)51)), (-61499561865388584LL)));
                    var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)27)), (var_0)))) ? (((/* implicit */int) ((unsigned char) arr_13 [i_13] [i_0] [i_0]))) : (max((((((/* implicit */_Bool) arr_20 [i_0] [(unsigned short)7])) ? (((/* implicit */int) arr_15 [i_13] [i_1] [i_1 + 1] [17])) : (((/* implicit */int) arr_29 [i_1] [i_1 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [(signed char)5] [i_0] [4ULL] [(signed char)5] [i_1 + 3] [i_13])))))))));
                    arr_38 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned int) ((short) arr_11 [i_1] [i_1] [(short)23]))), (arr_6 [i_1 - 1] [i_1 - 1]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)3294)))))));
                }
                var_38 -= ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1 + 2] [i_1]);
            }
        } 
    } 
}
