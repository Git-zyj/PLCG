/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67742
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */long long int) var_3)) <= (var_1))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        var_13 = var_2;
        arr_3 [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (-9223372036854775807LL - 1LL)))) && ((!((!(((/* implicit */_Bool) var_8))))))));
    }
}
