/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91
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
    var_19 ^= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_21 = ((/* implicit */_Bool) (+((-(((arr_0 [i_0]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))));
    }
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_13))));
    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_6)));
}
