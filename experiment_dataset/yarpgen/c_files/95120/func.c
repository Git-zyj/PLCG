/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95120
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
    var_15 = var_8;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */short) var_14))))) - (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (arr_1 [i_0] [i_0])))))) ? (min((min((((/* implicit */unsigned long long int) var_1)), (1852443077982335045ULL))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_0)) : (8229457352767895955ULL))))) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))));
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
}
