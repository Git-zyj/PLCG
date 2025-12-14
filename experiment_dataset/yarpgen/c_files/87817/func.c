/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87817
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
    var_10 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) min(((signed char)104), ((signed char)102)))), (var_8))), (((/* implicit */unsigned long long int) var_0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = (~(var_3));
        var_12 = ((/* implicit */short) (signed char)114);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (signed char)104);
    }
}
