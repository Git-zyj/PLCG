/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87795
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
    for (short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((short) ((((/* implicit */int) arr_0 [i_0 + 1])) ^ (((/* implicit */int) (short)6013))));
        var_15 = (short)-2722;
    }
    var_16 = var_5;
    var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) min((var_0), (var_12)))))) : (((/* implicit */int) var_10))));
}
