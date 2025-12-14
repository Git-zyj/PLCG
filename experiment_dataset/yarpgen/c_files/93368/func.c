/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93368
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (short)-23282)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))) : ((+(((/* implicit */int) var_7))))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-26555)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))), (((2462351394U) + (var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_11 = ((arr_1 [i_0] [i_1 + 2]) << (((arr_4 [i_2] [i_1 - 2] [i_0]) - (110159736U))));
                    var_12 = max((((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) || (((/* implicit */_Bool) arr_0 [i_1 - 1]))))), (arr_2 [i_0] [i_2]));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_1] [i_1])), (min((arr_1 [(short)11] [i_1]), (((/* implicit */long long int) arr_2 [i_0] [i_1]))))))) ? ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) : (arr_1 [i_0] [i_2]))))) : (((/* implicit */long long int) (+(max((((/* implicit */unsigned int) arr_0 [(signed char)3])), (arr_4 [i_0] [i_0] [i_0]))))))));
                    var_14 = ((/* implicit */signed char) var_4);
                }
            } 
        } 
    } 
}
