/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55610
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (min((((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) var_7))))), (((var_8) * (((/* implicit */unsigned long long int) 635130229U)))))) : (var_3)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_14 = var_12;
        arr_3 [i_0] [i_0] |= ((/* implicit */long long int) ((var_1) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [(short)7]) : (arr_1 [18U] [i_0]))))));
    }
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-4)) ? (2875952924U) : (1054221725U)));
}
