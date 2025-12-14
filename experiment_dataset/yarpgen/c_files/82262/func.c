/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82262
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
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 -= ((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (max((var_9), (((/* implicit */long long int) 24U))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((4236124788U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)109)))))) | (((var_3) + (((/* implicit */unsigned long long int) 965588710970012085LL))))));
                var_13 |= ((/* implicit */long long int) min((((var_1) % (((/* implicit */unsigned long long int) 4294967288U)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (min((((/* implicit */int) var_8)), (1139056380))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) var_9);
}
