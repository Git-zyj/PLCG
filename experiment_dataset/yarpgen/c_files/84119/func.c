/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84119
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
    for (signed char i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_1))));
                    arr_8 [i_1] [i_1] [i_1] [2ULL] &= ((/* implicit */unsigned char) ((unsigned short) var_16));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0 - 1]) / (arr_7 [i_0] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_7 [i_0] [i_0 + 1])))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0 - 1])) : (var_15)))));
                    var_19 ^= ((/* implicit */unsigned long long int) var_4);
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [2LL])) ? (((/* implicit */int) arr_1 [(short)2])) : (((/* implicit */int) var_5))))) ? (min((15286929849333492948ULL), (((/* implicit */unsigned long long int) (signed char)121)))) : (((/* implicit */unsigned long long int) (~(var_4)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7)))))));
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_22 *= ((/* implicit */_Bool) var_3);
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28672))) : (((((/* implicit */_Bool) (signed char)-127)) ? (1221614445485659362LL) : (((/* implicit */long long int) var_4))))))) : (((((arr_10 [i_3]) >= (arr_10 [i_3]))) ? (arr_10 [i_3]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57344))) * (var_8)))))));
    }
    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        var_24 = ((/* implicit */int) (+(((arr_10 [i_4]) - (((/* implicit */unsigned long long int) arr_12 [i_4]))))));
        var_25 ^= ((/* implicit */signed char) (short)-14031);
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) ? ((-(13187387284028224872ULL))) : (max((arr_10 [i_4]), (((/* implicit */unsigned long long int) var_16))))))) ? (((((/* implicit */_Bool) arr_10 [i_4])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (68169720922112ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2)))))))));
    }
}
