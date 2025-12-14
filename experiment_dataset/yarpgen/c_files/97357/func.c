/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97357
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) (~(min((((/* implicit */long long int) 256U)), (((((/* implicit */_Bool) 1851656888U)) ? (-6465105569849482365LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1])))))))));
                var_18 += ((arr_1 [(signed char)3]) << (((((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? ((+(arr_1 [i_0]))) : (arr_1 [i_0 - 1]))) - (1496517918U))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6465105569849482365LL)))))) + (((min((arr_0 [i_0 - 2]), (((/* implicit */long long int) arr_3 [18ULL])))) + (((((/* implicit */_Bool) 2086120898)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [16U]))) : (arr_0 [i_1]))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_1 [i_2])))) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (((((/* implicit */_Bool) arr_2 [(unsigned short)8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)7]))) : (arr_5 [i_0 + 1] [i_0 + 1] [i_1] [i_2])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        arr_11 [(_Bool)1] [(signed char)5] [i_2] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34632)) ? (((/* implicit */int) (unsigned short)2632)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_12 [i_0 - 1] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_6 [i_0 - 1] [i_0 - 2]) || (((/* implicit */_Bool) (unsigned short)30912))))) >> (((((/* implicit */int) var_11)) - (191)))));
                        arr_13 [(short)16] [(short)16] [(short)16] [16] [16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (4377174566002752692LL) : (((/* implicit */long long int) arr_10 [i_2]))))) ? (arr_0 [(signed char)10]) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_3))))));
                    }
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_20 *= ((/* implicit */short) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) -866547607)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) (short)11169)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_1])), ((unsigned short)54138))))))) >= (((((((/* implicit */_Bool) arr_15 [i_1] [1ULL])) || (var_5))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) (short)2047)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))))));
                    arr_16 [i_1] [i_1] [i_1] [(signed char)19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((+(5522077495910226808ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1] [i_0 - 2] [i_1])) ? (var_1) : (((/* implicit */int) (unsigned short)62910)))))))) ? (((arr_6 [i_0 + 1] [i_0 - 1]) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_4])) : (((/* implicit */int) arr_6 [i_1] [i_4])))) : (((/* implicit */int) min((arr_2 [i_0 + 1]), (arr_2 [i_0 - 2]))))));
                    arr_17 [i_0 - 2] [i_1] [i_1] [(signed char)15] = ((/* implicit */int) ((((2510590420U) >> (((/* implicit */int) arr_6 [i_4] [i_0 - 2])))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [i_0 + 1])))));
                }
                arr_18 [i_0] [i_1] [i_1] &= ((/* implicit */unsigned int) arr_9 [(short)8] [(short)8] [12] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            {
                arr_24 [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_5] [i_6])) ? (((/* implicit */int) arr_21 [0] [i_6] [i_5])) : (((/* implicit */int) var_12))))) * ((+(4021965001U)))))) ? ((+(var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) -1))) * (((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */int) arr_23 [i_5])) : (((/* implicit */int) var_5)))))))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(short)13] [i_5])) ? (var_6) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((arr_19 [i_5] [i_5]), (((/* implicit */unsigned int) var_5))))) : (((unsigned long long int) -1))))) ? (((((/* implicit */_Bool) -219735599)) ? (((/* implicit */int) (_Bool)0)) : (-219735599))) : (((/* implicit */int) arr_21 [i_5] [(_Bool)1] [i_6])))))));
            }
        } 
    } 
}
