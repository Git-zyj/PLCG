/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86281
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) arr_0 [i_0]);
        var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) arr_1 [i_0]))))) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_1 [i_0]))))))))));
    }
    var_15 ^= var_1;
}
