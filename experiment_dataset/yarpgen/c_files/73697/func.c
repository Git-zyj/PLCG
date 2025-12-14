/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73697
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) var_6))));
    var_11 = ((/* implicit */long long int) var_9);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */short) arr_0 [i_0] [i_1])), (var_7)))), ((-(((/* implicit */int) var_6))))))))))));
                    arr_8 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1329251754552902892LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(short)8] [i_2 + 1]))) == (1609184404U))))) : (((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (65264256U))))) / (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [(short)5] [(short)5] [i_1])) : (((/* implicit */int) arr_7 [i_0] [(unsigned char)5] [i_1] [i_2])))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_15 [i_1] [0ULL] [0ULL] = ((/* implicit */short) ((((/* implicit */_Bool) 65264257U)) ? (((/* implicit */int) (unsigned short)47780)) : ((+(((/* implicit */int) arr_12 [i_0] [i_1] [(unsigned short)11] [i_3 - 1]))))));
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2934)) <= (((/* implicit */int) arr_13 [i_0] [i_1] [i_2 - 1] [i_2] [i_3] [i_2 - 1])))))));
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_8))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        arr_18 [i_5] [(_Bool)1] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5])) + (2147483647))) << (((arr_11 [i_5] [(short)3] [i_5] [i_5]) - (419216781U)))));
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (short i_7 = 1; i_7 < 10; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    {
                        var_15 = arr_17 [1ULL];
                        var_16 *= ((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) arr_17 [i_5])))) - (242)))));
                        var_17 = ((/* implicit */unsigned short) 4229703016U);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_9 = 3; i_9 < 23; i_9 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_27 [i_9 + 1])))) / (((((((arr_27 [i_9]) + (9223372036854775807LL))) << (((65264247U) - (65264247U))))) ^ (arr_27 [i_9 - 2])))));
        arr_28 [i_9] [i_9] = ((/* implicit */long long int) (_Bool)1);
    }
}
