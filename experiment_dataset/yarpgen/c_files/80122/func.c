/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80122
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
    var_15 -= ((/* implicit */unsigned char) 3227349068U);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) (_Bool)1);
        var_17 = ((((/* implicit */_Bool) ((3227349068U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 4] [i_0 - 2])))))) ? (max((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (805306368U))), (((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (var_7)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 3])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    var_18 *= ((/* implicit */unsigned char) var_2);
}
