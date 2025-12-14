/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80747
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [(short)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(short)6])) && (((/* implicit */_Bool) (short)10694))));
        var_10 = ((((/* implicit */_Bool) 5169975107484780106ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [(short)10] [8])));
    }
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) var_5))));
}
