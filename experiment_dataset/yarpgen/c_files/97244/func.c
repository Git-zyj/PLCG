/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97244
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
    var_17 = ((/* implicit */short) var_1);
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_15)))) * (5431490630178503356ULL))) % (((/* implicit */unsigned long long int) 32505856))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [(signed char)22] |= ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) (+(arr_2 [i_2] [i_0])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))) : (((arr_4 [i_0 + 2] [22] [8U]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_15)))))));
                    arr_8 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-110)))) ? (1345003184) : (((/* implicit */int) (signed char)110))));
                    arr_9 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5431490630178503371ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)39924))));
                    arr_10 [i_2] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (~(295680267)));
                    arr_11 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_4 [(unsigned char)5] [i_0 + 4] [i_0]) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 3] [i_0])))))) ? (((((((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) (signed char)-110)) : (((/* implicit */int) arr_4 [(short)23] [i_1] [i_0])))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0 - 1])) >= (var_6)))) - (1))))) : (((/* implicit */int) ((((/* implicit */_Bool) 13015253443531048265ULL)) && ((_Bool)0))))));
                }
            } 
        } 
    } 
}
