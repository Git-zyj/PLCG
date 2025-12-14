/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81109
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
    var_12 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_4 [i_0] [i_0])))) ? (min((arr_4 [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned long long int) var_3)))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1] [20LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_4 [0ULL] [(_Bool)1]))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */int) (signed char)113);
                var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((long long int) arr_4 [i_0 - 1] [i_0 - 1])) : (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_1 + 1])) << (((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((arr_8 [i_0] [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1]))) : (arr_1 [i_0] [i_1]))), (((/* implicit */long long int) var_6))))) ? (((((/* implicit */_Bool) (~(4611686018427387904ULL)))) ? (((/* implicit */unsigned int) var_2)) : (arr_7 [i_0] [(short)9] [i_1 + 1] [i_1 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        var_14 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)1364)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_0 - 1] [15U] [15U] [i_0 - 1] [15U] [i_0 - 1]))))) ? (max((((/* implicit */unsigned long long int) arr_11 [(short)2] [i_2] [i_1 - 1] [(short)2])), (127ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 0U))))))));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_2 - 2])) <= (((/* implicit */int) arr_0 [i_2 - 2]))))) >> (((((/* implicit */int) min((arr_0 [i_2 - 1]), (arr_0 [i_2 - 1])))) - (13197)))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) 1U);
                        var_17 = ((/* implicit */unsigned long long int) (unsigned char)88);
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 3; i_6 < 23; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_1] [i_1] [i_2] [i_6 - 2] [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) << (((((/* implicit */int) var_8)) - (28268))))) >= (((/* implicit */int) ((short) 2882442571U)))))), (((unsigned long long int) 835498870U))));
                            var_18 ^= arr_12 [i_0];
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_21 [i_2] [i_2 - 1] [i_2 - 2]))));
                            arr_23 [i_1] [i_1] [(unsigned char)7] [i_5 - 1] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)1)), (arr_18 [i_0] [(unsigned short)20] [i_1 - 1])));
                            arr_24 [i_1] [i_1] [i_5 + 2] [i_6 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((18446744073709551508ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1343)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5 + 3] [i_6 - 2] [i_6 - 1] [i_1] [i_1]))))) : (((/* implicit */int) ((unsigned char) arr_13 [i_0 - 1] [i_2] [i_6 - 3] [6ULL] [i_6 - 3])))));
                        }
                        arr_25 [6ULL] [6ULL] &= ((short) (!(((/* implicit */_Bool) (-(arr_12 [i_1]))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 3; i_8 < 21; i_8 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (+(2882442571U)))) ? (min((min((((/* implicit */unsigned long long int) arr_21 [22ULL] [i_1] [i_8])), (arr_13 [i_0] [i_1 + 1] [i_1 + 1] [i_0] [i_8]))), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_8])) ? (18446744073709551510ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2]))))))))));
                            var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_28 [i_0 + 1] [i_0] [i_0 + 1]))));
                            arr_32 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (-(771678873)));
                        }
                        for (unsigned short i_9 = 3; i_9 < 21; i_9 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) (short)32760)) >> (((-5955554170867128329LL) + (5955554170867128337LL))))), ((~(-1)))))) ? (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) 105ULL))))), (var_8)))) : ((~((~(((/* implicit */int) arr_17 [i_0]))))))));
                            arr_36 [i_1] [(short)5] [(_Bool)1] = ((/* implicit */unsigned char) (-(((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [(_Bool)1] [i_0]))) : (var_4))))));
                        }
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 24; i_10 += 1) 
                        {
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_5)))))))) << ((((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 + 1]))) : (arr_21 [i_0 + 1] [i_10] [i_2]))))) + (12LL))))))));
                            var_24 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (arr_19 [i_0 + 1] [i_1] [i_2] [i_7] [i_1])))) ? ((~(((/* implicit */int) (signed char)22)))) : (((var_2) / (((/* implicit */int) (unsigned char)236))))))), (((((/* implicit */_Bool) 1U)) ? (arr_21 [i_1 - 2] [i_2 + 1] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_39 [i_0] [i_1] [i_2 + 1] [i_7] [i_10] [i_2] [i_1] = ((/* implicit */unsigned char) arr_14 [i_1 + 1]);
                            var_25 -= ((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-106)));
                        }
                        for (int i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            var_26 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)67))))), (((((/* implicit */_Bool) arr_12 [i_0 + 1])) ? (arr_12 [i_0 + 1]) : (arr_12 [i_0 - 1])))));
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [11LL] [11LL] [11LL] [11LL])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_1] [i_1 + 1] [i_1] [i_7] [i_1])))))) ? (((/* implicit */int) arr_29 [i_0] [i_1 - 2] [i_2] [i_7] [19LL] [i_11] [i_11])) : (((((/* implicit */int) var_7)) & (((/* implicit */int) arr_28 [i_0 - 1] [i_2] [(unsigned char)11]))))))) && (((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_31 [i_0] [11] [i_0 - 1] [i_0] [i_0 - 1] [i_0])), (arr_19 [i_0] [i_0] [i_2 + 1] [i_1] [i_11]))) / (((/* implicit */unsigned long long int) (((_Bool)0) ? (-3694971584102973693LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-30681)))))))))));
                            arr_43 [i_11] [i_1] [i_2 - 2] [i_1] [i_0] = ((/* implicit */unsigned short) (((+(((/* implicit */int) var_7)))) - (((/* implicit */int) var_10))));
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_35 [i_1] [i_2]) % (18446744073709551488ULL)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_19 [i_0 - 1] [i_1] [i_11] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_0] [i_1] [i_1] [(_Bool)1] [i_0]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)22)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) var_3)))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_2]))))))))) : (arr_35 [i_7] [i_7])));
                        }
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_12 = 2; i_12 < 22; i_12 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_13 = 1; i_13 < 20; i_13 += 4) 
                        {
                            var_29 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (arr_48 [i_0] [i_1] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                            arr_49 [i_0] [i_0] [i_2] [i_1] [i_12] [i_13 - 1] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (-1463239187385341246LL) : (((/* implicit */long long int) arr_38 [i_0]))))) ? (((/* implicit */unsigned long long int) -1463239187385341246LL)) : (arr_27 [i_13 - 1] [i_1 + 1] [i_1] [0ULL])));
                        }
                        var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [11LL] [11LL] [i_2 - 2] [i_12] [(short)8])) ? (((/* implicit */unsigned long long int) arr_31 [i_0] [i_0] [i_0 - 1] [i_1] [i_0] [i_12 - 1])) : (arr_35 [i_0] [17U])))) ? (1463239187385341248LL) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [i_0] [i_1] [i_2] [(_Bool)1] [i_12 - 1]))) : (var_11)))));
                    }
                }
            }
        } 
    } 
    var_31 *= ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))) > (((((/* implicit */_Bool) (unsigned short)48105)) ? (((/* implicit */int) (short)11006)) : (((/* implicit */int) (unsigned char)62)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_6))))) : (((long long int) var_10)))));
}
