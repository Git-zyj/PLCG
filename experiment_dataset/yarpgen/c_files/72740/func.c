/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72740
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_20 -= ((/* implicit */int) var_15);
    }
    var_21 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_16)))), (((/* implicit */int) max((var_17), ((signed char)31))))));
}
