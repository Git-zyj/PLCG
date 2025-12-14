/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71809
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_18 *= ((/* implicit */signed char) (_Bool)1);
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((((unsigned long long int) (-(((/* implicit */int) (_Bool)0))))), (min((((/* implicit */unsigned long long int) 1193317447)), (11951161942403904151ULL))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)11)))))) >= (((/* implicit */int) var_13))));
}
