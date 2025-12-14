/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68562
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
        var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)16)) ? (((/* implicit */int) (short)-19)) : (((/* implicit */int) (_Bool)1))));
    }
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_10))));
    var_17 &= ((/* implicit */int) var_6);
    var_18 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) var_3)), (var_0))) + (((/* implicit */unsigned long long int) 3676058190U))));
}
