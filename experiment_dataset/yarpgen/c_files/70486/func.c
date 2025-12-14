/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70486
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)255)) ? (9334991144567196371ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)59)) && (((/* implicit */_Bool) 2451775229U))))))));
                                arr_13 [i_3] [i_1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1 + 1] [i_4 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)248)), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))))));
                        arr_17 [i_2] [i_2] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */signed char) arr_3 [i_1] [i_2] [i_5]);
                        arr_18 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) -1537058082)) && (((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1])))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_14 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((var_1) & (((/* implicit */unsigned long long int) 4294967284U))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) / (((/* implicit */int) (unsigned char)255))))) : ((((_Bool)0) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73)))))));
                        var_15 = ((/* implicit */signed char) var_1);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_16 = ((/* implicit */_Bool) ((unsigned short) var_2));
                            var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                            var_18 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7]))) - (3194641692U)))));
                        }
                    }
                    for (short i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((signed char) (signed char)-110)))) ? (max(((~(3552338321U))), (((/* implicit */unsigned int) (signed char)-110)))) : (((/* implicit */unsigned int) max((((((/* implicit */int) arr_22 [i_1] [i_1 - 1] [i_2] [(unsigned char)19] [i_2])) << (((/* implicit */int) (signed char)1)))), (((/* implicit */int) arr_23 [i_0 - 1] [10U] [i_1])))))));
                        var_20 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)52)))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1 + 1])) ? (((/* implicit */int) (signed char)1)) : (((var_6) ? (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_0])) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (short)32767)) > (((/* implicit */int) var_2))))), (arr_11 [i_0] [i_1 + 1] [i_1] [i_1 - 1] [i_1] [i_0]))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        var_21 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((short) -167394928)))));
                        var_22 = ((/* implicit */_Bool) (-((-(max((((/* implicit */unsigned long long int) arr_19 [i_9] [i_0] [i_1] [i_1] [i_0] [i_0])), (var_1)))))));
                        arr_32 [10LL] [i_1] [10LL] [i_9] = ((/* implicit */short) (-((~(((/* implicit */int) arr_0 [i_1 - 1] [i_0 - 1]))))));
                        arr_33 [i_1] [i_1] [i_1] [i_9] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)110))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned char)56))))) ? (max((15286528559517366059ULL), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-126)))))))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_10 = 1; i_10 < 18; i_10 += 2) 
                    {
                        var_23 = ((/* implicit */signed char) (short)24157);
                        arr_37 [i_10] [i_0] [i_0] &= ((/* implicit */signed char) ((((((/* implicit */int) arr_21 [i_0 - 1])) != (((/* implicit */int) (signed char)-88)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_4)))))) >= (((var_8) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) : ((+(((((/* implicit */_Bool) 3236743050301323045ULL)) ? (var_0) : (((/* implicit */unsigned long long int) 4207263328U))))))));
                    }
                    for (int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            var_24 = ((/* implicit */short) (+(max((((/* implicit */long long int) var_5)), (((long long int) var_6))))));
                            arr_43 [i_1] [i_1 - 1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_25 [i_1] [i_1])) + (max((var_1), (var_1)))));
                            arr_44 [i_1] [16ULL] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (short)24174);
                            arr_45 [i_0] [i_0] [i_2] [i_1] [i_12] = ((/* implicit */unsigned short) (!((_Bool)1)));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 20; i_13 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                            var_26 = ((/* implicit */_Bool) min((var_26), ((!(((/* implicit */_Bool) arr_29 [i_0] [i_13] [i_0 - 2] [i_1 - 1]))))));
                            var_27 = ((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (signed char)-75))))) + ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1775034397U))));
                            var_28 = ((/* implicit */_Bool) ((arr_46 [i_0 - 2] [i_1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 2]) | (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0 - 2] [i_1 + 1] [i_1])))));
                        }
                        for (signed char i_14 = 0; i_14 < 20; i_14 += 1) 
                        {
                            arr_53 [i_0 + 1] [i_1] [i_2] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1023)) ? (arr_39 [i_14] [i_1] [i_1] [(short)0] [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_11 [i_14] [i_14] [i_1] [i_1] [i_0] [i_0]), (((/* implicit */signed char) arr_52 [i_0 - 2] [(short)3] [(short)3] [i_0 + 1] [(_Bool)1] [(_Bool)1] [i_0 - 2]))))))))) ? (((long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_1))) ? (((unsigned int) (signed char)-2)) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_0] [i_0 - 2] [i_0] [i_0])) * (((/* implicit */int) (_Bool)1)))))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (arr_15 [i_0] [i_0] [8ULL] [i_11] [16LL])));
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24157))) : (4LL)));
                        }
                        /* vectorizable */
                        for (unsigned char i_15 = 4; i_15 < 18; i_15 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned int) var_10);
                            var_32 |= ((/* implicit */unsigned long long int) ((arr_42 [i_0] [i_1] [i_1]) == (arr_42 [i_15 - 4] [i_1] [i_1])));
                        }
                        var_33 ^= ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) (-(10676878075778262898ULL)))) ? (10676878075778262896ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        var_34 = ((/* implicit */unsigned int) arr_38 [i_0] [i_1 + 1] [i_2] [i_11]);
                    }
                    for (long long int i_16 = 4; i_16 < 18; i_16 += 3) 
                    {
                        arr_58 [i_1] [i_1] = min(((+(arr_25 [i_2] [i_1]))), (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0 - 2] [(short)13] [i_0] [i_0 - 2] [9ULL] [i_0 - 2])) ^ (((/* implicit */int) arr_14 [i_0 - 1] [i_0 + 1] [i_0] [0ULL] [i_0] [i_0 + 1]))))));
                        arr_59 [i_0 + 1] [i_0 - 2] [(signed char)0] [i_0 + 1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)29608)) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (unsigned char)72)))) >= (((/* implicit */int) (signed char)19))));
                        var_35 = ((/* implicit */unsigned char) (signed char)-20);
                    }
                    arr_60 [i_0] [i_1] [i_1] = (-(min((arr_28 [i_0] [i_1] [i_1] [i_0 - 1] [10LL] [i_1 + 1]), (((/* implicit */long long int) var_7)))));
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65532)) - (((/* implicit */int) (unsigned short)35945))))) ? (((/* implicit */int) (unsigned short)35915)) : (((/* implicit */int) (signed char)-11))));
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (var_0))))));
    var_38 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_5)))), (((var_11) == (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))) >= (var_7)));
}
