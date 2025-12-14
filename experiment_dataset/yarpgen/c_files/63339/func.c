/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63339
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
    var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_4)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */_Bool) 12873065097199950979ULL);
                var_17 = ((/* implicit */_Bool) ((unsigned int) (short)27909));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((var_5), (((/* implicit */short) var_6))))), (var_1)))) ? (((/* implicit */long long int) min(((+(((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-21172))) < (524287U))))))) : (((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned long long int) var_12))))) ? (((long long int) 5573678976509600642ULL)) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) < (arr_1 [i_0])))))))));
            }
        } 
    } 
}
