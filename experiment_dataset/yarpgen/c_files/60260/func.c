/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60260
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_1] = (!(((/* implicit */_Bool) ((((10000111942992585364ULL) & (((/* implicit */unsigned long long int) var_2)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1320106576876953053LL))))))));
                var_17 = ((((((-32LL) & (((/* implicit */long long int) -946712103)))) + (9223372036854775807LL))) << (((min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) 946712096)) : (var_12))))) - (5330U))));
            }
        } 
    } 
    var_18 &= ((/* implicit */signed char) max((((/* implicit */int) var_5)), (max((((/* implicit */int) max((var_9), (var_13)))), (946712116)))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_13))));
}
