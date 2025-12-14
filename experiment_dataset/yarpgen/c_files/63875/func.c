/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63875
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
    var_14 *= min(((+(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (1343232878U))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) - (((((/* implicit */int) var_8)) * (((/* implicit */int) var_13))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) var_5))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        var_16 = ((/* implicit */unsigned long long int) arr_1 [(short)9] [6U]);
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_1))));
    }
    var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_6)));
}
