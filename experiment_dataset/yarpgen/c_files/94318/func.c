/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94318
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */short) var_11);
                var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (signed char)-24)) ? (9146120402336337555ULL) : (((/* implicit */unsigned long long int) -1843522017)))))))));
                arr_5 [i_0] = ((/* implicit */signed char) var_2);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 3; i_2 < 12; i_2 += 1) 
    {
        for (int i_3 = 2; i_3 < 11; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                {
                    var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) (unsigned short)19491)) : (((/* implicit */int) (unsigned short)46045))));
                    arr_16 [i_2 - 2] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) arr_10 [i_2 - 3] [i_2 + 1]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        for (long long int i_6 = 2; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((int) min((((/* implicit */unsigned long long int) (+(var_7)))), (((((/* implicit */_Bool) 10669422131951373336ULL)) ? (((/* implicit */unsigned long long int) var_0)) : (9146120402336337555ULL)))))))));
                                arr_21 [i_2] [i_3] [i_2] [i_2] [i_6 - 2] = ((/* implicit */unsigned char) (((+(-566761520))) == (((/* implicit */int) var_11))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3253072813U)) ? (((/* implicit */int) arr_2 [i_2 - 1])) : (((/* implicit */int) var_10))))) ? ((+(((/* implicit */int) arr_2 [i_2 - 2])))) : ((~(((/* implicit */int) arr_2 [i_2 - 3]))))));
                            }
                        } 
                    } 
                    arr_22 [i_4] [i_3] [i_3 - 1] = ((/* implicit */unsigned int) ((signed char) ((unsigned int) ((((/* implicit */int) (signed char)114)) | (((/* implicit */int) var_10))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        arr_25 [i_3 + 2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13400180442310206266ULL)) ? (var_8) : (((/* implicit */long long int) arr_3 [i_7] [i_2]))))) ? (arr_0 [i_3] [i_7]) : (((/* implicit */int) (signed char)23))));
                        var_17 = ((/* implicit */int) ((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)43)))));
                        arr_26 [i_2 - 2] [4] [4] [(unsigned short)2] |= ((/* implicit */signed char) (-(((((/* implicit */int) (unsigned char)250)) * (((/* implicit */int) var_11))))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483392)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) arr_13 [(unsigned char)8] [(unsigned char)8]))))) ? (((/* implicit */int) (unsigned char)187)) : (((((/* implicit */_Bool) 420760388U)) ? (((/* implicit */int) (unsigned short)32971)) : (var_0)))));
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_3)) == (var_0))) ? (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) arr_7 [9])) : (var_0))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_17 [i_4] [i_4] [i_2] [(short)4]))))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_13 [(unsigned short)11] [i_3])) : (arr_1 [i_8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [(unsigned char)4] [i_2 + 1] [i_2])) == (((/* implicit */int) arr_12 [i_3] [11] [i_3])))))) : (((unsigned long long int) -1887780685))));
                    }
                    for (short i_9 = 3; i_9 < 11; i_9 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned int) ((long long int) ((67108864U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_9 - 3] [i_9 + 2] [i_9 + 2]))))));
                        var_22 |= ((var_7) | (((/* implicit */int) (unsigned char)163)));
                    }
                    /* vectorizable */
                    for (short i_10 = 3; i_10 < 11; i_10 += 3) /* same iter space */
                    {
                        arr_35 [i_3] [(short)3] = ((/* implicit */signed char) ((((/* implicit */int) var_11)) >= (arr_34 [i_2 - 1])));
                        arr_36 [i_3] [(short)10] [i_2 + 1] [i_3] = ((/* implicit */int) var_9);
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1516212561)) ? (661774127U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) arr_11 [i_4])) : (var_7))))));
                    }
                }
            } 
        } 
    } 
    var_24 *= ((/* implicit */int) ((((unsigned int) (!(((/* implicit */_Bool) 5974930435273118407LL))))) ^ (((((/* implicit */_Bool) 939524096U)) ? (1U) : (((/* implicit */unsigned int) var_7))))));
}
