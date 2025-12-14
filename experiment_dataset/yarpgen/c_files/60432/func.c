/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60432
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
    for (short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0]);
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) (-(((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 3])))))));
    }
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_7))));
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)127))) & (((((/* implicit */_Bool) var_15)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16396))) ^ (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_11))));
}
