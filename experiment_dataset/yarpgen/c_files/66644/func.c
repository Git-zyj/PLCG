/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66644
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
    var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) (unsigned char)7))))) : (((((/* implicit */_Bool) var_17)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((arr_2 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)46))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_11)))))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_1 [i_0])))))) ^ (min((((/* implicit */long long int) (+(((/* implicit */int) var_13))))), (arr_2 [i_0])))));
    }
}
