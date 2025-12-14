/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85409
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
    var_12 = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) - (var_2))), (((/* implicit */unsigned int) ((short) (signed char)127)))));
    var_13 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((((/* implicit */short) ((unsigned char) var_0))), (var_6)))) : (((/* implicit */int) var_3))));
    var_14 = ((/* implicit */_Bool) ((short) var_7));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_0 [i_0]))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((unsigned char) (signed char)-122)))));
    }
}
