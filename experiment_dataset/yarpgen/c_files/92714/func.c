/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92714
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) arr_3 [i_0]);
        var_17 = ((/* implicit */unsigned long long int) ((arr_2 [i_0]) != (min((((/* implicit */int) arr_3 [i_0])), (arr_1 [i_0] [i_0])))));
    }
    var_18 = (!((!(((/* implicit */_Bool) min((var_2), (var_2)))))));
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_14))));
    var_20 = ((/* implicit */signed char) ((unsigned short) max((max((var_1), (((/* implicit */int) var_5)))), ((+(((/* implicit */int) (short)13962)))))));
}
