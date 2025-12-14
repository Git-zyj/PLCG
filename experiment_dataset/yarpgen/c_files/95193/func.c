/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95193
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
    var_13 = var_12;
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_2 [18]))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [(signed char)4])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_2 [(unsigned char)18])))))));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((signed char) var_8)))));
    }
}
