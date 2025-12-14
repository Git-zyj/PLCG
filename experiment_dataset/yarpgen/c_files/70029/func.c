/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70029
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)104)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) + (var_11))) : (((/* implicit */long long int) ((int) arr_1 [i_0])))));
        var_18 *= ((/* implicit */signed char) max((((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 1536U)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50387))))))) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) ((((/* implicit */unsigned int) -381870943)) / (4294965760U)))))))));
        var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1]))) != (((/* implicit */long long int) 536870912U))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    arr_10 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2157)) ? (((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37982))))) : (((/* implicit */unsigned long long int) 16))))) || (((/* implicit */_Bool) 991651071583567301LL))));
                    arr_11 [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_8 [i_3] [i_2] [i_1]), (arr_8 [i_3] [i_2] [i_1])))), (((int) arr_5 [i_3] [i_3] [i_3]))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_9 [i_3] [i_1] [i_1]) << (((((/* implicit */int) var_14)) - (57613)))))) ? (((/* implicit */long long int) ((unsigned int) arr_5 [i_1] [(signed char)1] [i_3]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_2] [i_2]))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) / (2147483647)))) : (((((/* implicit */_Bool) 9223372036854775799LL)) ? (arr_3 [i_1] [i_1]) : (6053715059260197413LL)))))));
                }
            } 
        } 
    }
    for (unsigned short i_4 = 2; i_4 < 23; i_4 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (short)16179))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (+(min((min((1238028282103978599LL), (var_1))), (((/* implicit */long long int) (unsigned char)7)))))))));
        arr_16 [i_4] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) arr_15 [i_4 + 2])), (arr_12 [i_4 - 1] [i_4 + 2]))) / (((((/* implicit */_Bool) (short)-16179)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5692))) : (arr_12 [i_4 + 1] [i_4 + 1])))));
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        for (signed char i_6 = 1; i_6 < 12; i_6 += 4) 
        {
            {
                var_24 ^= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) 2013265920U)) ? (var_0) : (((/* implicit */long long int) (+(arr_19 [i_5] [i_6] [i_6])))))));
                /* LoopNest 3 */
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 3; i_9 < 12; i_9 += 4) 
                        {
                            {
                                var_25 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (short)14336))))) > (((((/* implicit */long long int) (-(((/* implicit */int) var_14))))) | (arr_20 [i_9 + 1] [i_8])))));
                                var_26 ^= ((/* implicit */long long int) (signed char)-120);
                            }
                        } 
                    } 
                } 
                var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((short) arr_22 [i_5] [2]))), (arr_27 [i_6 - 1] [(unsigned char)2] [i_6 - 1] [i_5] [i_6] [i_6])))) || (min(((!(((/* implicit */_Bool) (short)-28620)))), (((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
