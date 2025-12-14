/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59385
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) min((min((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_8))))), ((-(((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5))))));
        arr_2 [(unsigned short)2] [(unsigned short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (var_15))) : (((((/* implicit */_Bool) max((var_14), (var_11)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(unsigned char)11])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) : (var_0)))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_14), (var_11)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) && (((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */signed char) min((((381949840) & (((/* implicit */int) (signed char)112)))), ((~(((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_1]))))));
                        var_19 = ((/* implicit */long long int) ((arr_3 [i_1] [i_2]) >> ((((~(arr_3 [i_1] [i_2]))) - (5949531661599292965ULL)))));
                        arr_14 [i_1] [i_1] [i_1] [4LL] = ((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_7 [i_2] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))))) | (((((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (arr_7 [i_1] [(_Bool)1] [i_3])))) : (((((/* implicit */_Bool) arr_7 [i_4] [(unsigned short)6] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_3))))));
                        arr_15 [i_1] [i_1] [5U] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    }
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((max((arr_5 [i_1]), (((/* implicit */unsigned long long int) arr_7 [i_1] [(short)14] [i_1])))) * (((/* implicit */unsigned long long int) arr_8 [i_3] [i_2] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) arr_4 [(signed char)13]))))) / (arr_6 [i_3] [(short)16] [(short)12]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (arr_16 [i_1] [i_2] [i_3] [i_5] [i_6 + 1] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (min((((((/* implicit */_Bool) 4170872886U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54179))) : (arr_6 [i_1] [i_3] [i_1]))), (((/* implicit */long long int) (unsigned short)11345))))));
                                arr_22 [i_1] [i_2] [i_3] [i_1] [19U] [i_5] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6 - 1] [i_6 + 1])) ? (((/* implicit */int) arr_12 [i_2] [i_6 - 1])) : (((/* implicit */int) arr_19 [i_6 + 1] [i_6 - 1]))))) ? (var_4) : (((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_11 [i_1] [i_1] [(unsigned char)8] [i_6])))), (((/* implicit */int) ((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 *= ((/* implicit */signed char) arr_6 [i_1] [i_1] [i_1]);
    }
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        for (short i_8 = 1; i_8 < 19; i_8 += 4) 
        {
            {
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_8)), (var_3))) | (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))))) ^ (((var_15) | (((/* implicit */long long int) ((/* implicit */int) arr_25 [9LL] [i_7])))))));
                var_24 += ((/* implicit */short) arr_26 [i_7] [i_7]);
                var_25 *= ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)127)), ((unsigned short)54183)))) <= (((/* implicit */int) (!(arr_23 [i_7]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
    {
        for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            {
                var_26 = ((/* implicit */signed char) var_13);
                var_27 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((var_6), (((/* implicit */short) ((var_14) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))) + (2147483647))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
            }
        } 
    } 
    var_28 = ((min((((((/* implicit */_Bool) (unsigned short)11357)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54178))) : (3037354755U))), (((/* implicit */unsigned int) var_6)))) >> (((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((var_10), (var_3))))) - (51841U))));
    var_29 = ((/* implicit */int) var_1);
}
