/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83025
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */long long int) max((arr_3 [i_0 + 1] [i_1]), (((((/* implicit */_Bool) arr_3 [i_2] [i_0])) ? (arr_3 [i_0 - 2] [i_2]) : (arr_3 [i_0 + 1] [i_1])))));
                    var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2)))) : (((((/* implicit */_Bool) 699269105685556509ULL)) ? (arr_2 [i_0 + 1]) : (arr_2 [i_2])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) min((max((max((23U), (((/* implicit */unsigned int) (short)-23638)))), (((/* implicit */unsigned int) var_6)))), (((((((/* implicit */_Bool) 699269105685556511ULL)) ? (23U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >> (((min((17747474968023995107ULL), (((/* implicit */unsigned long long int) var_1)))) - (2879657787ULL)))))));
    var_18 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(var_8)))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), (((var_6) ? (var_10) : (((/* implicit */unsigned long long int) var_11))))))));
}
