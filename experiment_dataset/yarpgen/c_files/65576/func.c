/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65576
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
    var_17 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_14)) : (var_8))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 13697768656390080802ULL)) || (((/* implicit */_Bool) 13697768656390080802ULL)))))) + (var_13))) - (3786997694U)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) arr_0 [i_0 - 1]);
                var_19 = ((/* implicit */long long int) var_0);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_1)) ? (max((4748975417319470814ULL), (((/* implicit */unsigned long long int) (signed char)127)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((var_16) % (((/* implicit */unsigned long long int) -1830035653124321591LL))))));
}
