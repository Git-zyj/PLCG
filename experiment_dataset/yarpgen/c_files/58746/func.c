/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58746
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) 4319384936544718222ULL)) ? (14127359137164833394ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((((/* implicit */_Bool) 1046922854)) ? (4319384936544718222ULL) : (((/* implicit */unsigned long long int) 2787919669U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_0)), (var_7)))) ? (((((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1])) + (((/* implicit */int) (unsigned short)51730)))) : (((/* implicit */int) var_5))))))))));
                    arr_10 [(unsigned short)1] [i_1 + 1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_7 [i_2] [i_1 + 1] [i_2 - 1]), (arr_7 [(short)17] [i_1 + 1] [i_2 - 1])))) ? (((/* implicit */int) var_9)) : (arr_8 [i_2] [i_2] [i_2])));
                }
            } 
        } 
    } 
}
