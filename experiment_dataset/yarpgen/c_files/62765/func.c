/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62765
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
    var_17 -= ((/* implicit */unsigned int) max((((max((((/* implicit */unsigned long long int) (short)8603)), (var_15))) + (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((unsigned short) ((unsigned int) var_11))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_18 *= (+(arr_3 [i_0 + 1]));
        var_19 = ((/* implicit */unsigned long long int) ((short) arr_0 [i_0]));
    }
}
