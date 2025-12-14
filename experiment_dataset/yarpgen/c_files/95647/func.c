/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95647
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
    var_14 = ((/* implicit */signed char) (+(18446744073709551615ULL)));
    var_15 = var_9;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) var_6);
        var_17 = ((/* implicit */unsigned int) (~(min((((/* implicit */unsigned long long int) (short)28372)), (var_4)))));
        var_18 = ((/* implicit */short) (+(max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (((((/* implicit */unsigned int) ((/* implicit */int) (short)6816))) | (var_7)))))));
        var_19 = ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-28358)) ? (var_10) : (((/* implicit */unsigned int) 1010510208))))) && (((/* implicit */_Bool) 1010510208))));
        var_20 = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (arr_1 [i_0] [i_0]))) + (2147483647))) << (((max((((((/* implicit */int) var_8)) >> (((arr_1 [(short)6] [i_0]) - (312571623))))), (1217546406))) - (1217546406)))));
    }
}
