/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89943
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */int) ((((((var_7) || (((/* implicit */_Bool) var_0)))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (14768431830282440170ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))))) >= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((4294967295U) & (1U)))), (max((arr_3 [i_0] [i_1] [i_1 + 2]), (((/* implicit */long long int) -1443440018)))))))));
                var_11 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)0))));
            }
        } 
    } 
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_6)))) ? (((15U) << (((/* implicit */int) var_3)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((17511786404307941204ULL) + (((/* implicit */unsigned long long int) 23U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) && (((/* implicit */_Bool) var_0)))))) : ((~(var_4)))))));
}
