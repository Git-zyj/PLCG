/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85259
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
    var_15 |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= ((-(var_5))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            var_16 += ((/* implicit */unsigned char) arr_10 [i_4]);
                            arr_14 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */int) (signed char)58)) + (-1673401892)))));
                            arr_15 [i_0] [i_1] [i_0] [4ULL] = (((!(((/* implicit */_Bool) -1673401882)))) ? (((/* implicit */int) (short)(-32767 - 1))) : ((~(((/* implicit */int) var_3)))));
                        }
                        arr_16 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 1; i_5 < 15; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            var_17 ^= ((/* implicit */unsigned char) var_12);
                            var_18 = ((/* implicit */int) (-(610654606001253978LL)));
                            var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(-1673401879))))));
                        }
                        arr_23 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) + (((/* implicit */int) ((arr_7 [i_0] [(signed char)1] [i_0] [i_5 + 1]) < (((/* implicit */long long int) var_12)))))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_12)) ? (9223372036854775797LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) (short)10459)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_0 + 3] [(unsigned short)17] [12LL] [i_7] [i_7])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_19 [i_0 + 3] [i_7] [3] [i_7] [i_0 + 3]))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) var_10);
                            arr_32 [i_0 + 3] [i_0] [i_2] [i_8] [i_8] [i_9] [i_9] = ((/* implicit */signed char) (~(-1673401917)));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_37 [i_0] [i_1] [i_0] [i_8] [i_8] [(signed char)13] = (~((+(1673401881))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)17)) < (((/* implicit */int) (unsigned char)85))));
                            var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-24280)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_8] [i_0]))) : (-2710160762679261783LL))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_2] [i_8] [i_10] [i_1]))))))));
                            arr_38 [i_0 + 1] [i_1] [i_0] [4ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))));
                        }
                        for (int i_11 = 1; i_11 < 17; i_11 += 1) 
                        {
                            var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_0])) ? (arr_18 [i_0] [i_0 + 3] [(short)6] [i_8] [i_11 - 1] [i_2]) : (((/* implicit */int) var_11))));
                            var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775778LL) > (((/* implicit */long long int) ((/* implicit */int) (short)21363))))))) | (((arr_31 [i_0 + 2] [i_0] [i_2] [i_8] [i_11 + 1] [12U] [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                            var_27 *= ((/* implicit */short) (-(arr_26 [i_0 - 1] [(signed char)4] [i_8] [i_11])));
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)65))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_6 [i_0] [i_1]) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_12)) ? (9223372036854775796LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)102)))))));
                        }
                        var_29 |= ((/* implicit */unsigned int) (((_Bool)1) ? (16494431774459361133ULL) : (((/* implicit */unsigned long long int) 610654606001253996LL))));
                        arr_42 [i_0] [(_Bool)1] [i_2] [i_8] = 19ULL;
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 1) 
    {
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_40 [i_12] [(signed char)2] [(signed char)2] [i_12])) ? (arr_28 [i_12] [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))) ? ((-(((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 5103858248400981017ULL)))))));
        arr_45 [i_12] = ((/* implicit */long long int) (~((-(((/* implicit */int) (_Bool)1))))));
    }
    var_31 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_3)))) : (((var_13) ? (((/* implicit */int) var_8)) : (1673401882))))) & (((/* implicit */int) ((-9223372036854775797LL) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))))))))));
}
