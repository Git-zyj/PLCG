/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64443
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (-6359049482462641590LL) : (((/* implicit */long long int) var_2)))) + (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_9)))))))) ? (((unsigned int) ((var_3) < (var_12)))) : (min((max((arr_0 [i_0]), (4U))), (min((var_1), (var_12)))))));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((long long int) max((((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) arr_0 [i_0 + 1])))), (((var_5) / (var_5))))));
    }
    var_14 = (~(var_12));
    var_15 = ((/* implicit */long long int) max((var_15), ((~(((((/* implicit */_Bool) ((var_3) ^ (var_3)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_8)) : (3068754241430272206LL))) : (((-3068754241430272222LL) ^ (3068754241430272189LL)))))))));
    var_16 = ((/* implicit */unsigned int) var_0);
    var_17 = ((/* implicit */short) var_13);
}
