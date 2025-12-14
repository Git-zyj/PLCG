/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61507
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
    var_14 = ((/* implicit */short) var_2);
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        var_17 |= ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-117))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    var_18 = var_9;
}
