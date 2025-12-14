/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71500
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
    var_12 = var_5;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (signed char)3)), (13282149720462781173ULL))), (((/* implicit */unsigned long long int) var_1)))))));
        var_14 = ((/* implicit */signed char) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) arr_0 [i_0]))));
        var_15 = ((/* implicit */short) max((max((((/* implicit */int) ((short) var_10))), ((-(((/* implicit */int) arr_1 [i_0] [i_0])))))), (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
}
