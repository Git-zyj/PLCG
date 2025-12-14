/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60905
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0)) ? (-2282461945469927538LL) : (((/* implicit */long long int) arr_0 [i_0 - 1]))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_5))));
    }
    var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)71)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) -2282461945469927538LL))))) : ((~(23)))))));
}
