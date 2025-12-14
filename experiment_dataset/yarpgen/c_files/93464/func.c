/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93464
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
    var_12 = ((/* implicit */unsigned short) min((min(((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (531925115U))), (((/* implicit */unsigned int) ((signed char) 10592732931648341581ULL))))), (((/* implicit */unsigned int) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */unsigned short) ((7854011142061210054ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))));
                var_14 += ((((((/* implicit */_Bool) 10592732931648341581ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [i_1])))) * (((/* implicit */int) (((~(9082490813280617927LL))) > (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))));
            }
        } 
    } 
}
