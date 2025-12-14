/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75053
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((_Bool) var_11)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((_Bool) arr_0 [i_0] [i_0]));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((short) arr_0 [i_0] [i_0])))));
    }
    var_19 = ((/* implicit */signed char) var_10);
}
