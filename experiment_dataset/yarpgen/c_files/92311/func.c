/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92311
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
    var_11 ^= ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))));
        arr_2 [10ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) -6961393677341553858LL))));
    }
    var_13 = max((max((((/* implicit */unsigned short) ((signed char) var_3))), ((unsigned short)20989))), (((/* implicit */unsigned short) var_2)));
}
