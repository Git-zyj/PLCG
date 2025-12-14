/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82338
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_4 [i_0] = (+(((/* implicit */int) var_3)));
        var_17 ^= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_11))));
    }
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((short)-26234), ((short)-26234)))) ? ((~(((var_8) / (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) (+(((var_0) & (((/* implicit */int) var_7))))))))))));
}
