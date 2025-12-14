/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70540
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) var_14))) | ((-(var_0)))));
    var_21 = var_14;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_2)), (arr_0 [i_0])));
        var_22 = ((/* implicit */signed char) 2591055960U);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
}
