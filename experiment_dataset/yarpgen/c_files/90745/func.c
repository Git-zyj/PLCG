/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90745
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
    var_19 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) -6253607773575188513LL))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0 + 1])))));
    }
    var_22 = ((/* implicit */int) var_4);
}
