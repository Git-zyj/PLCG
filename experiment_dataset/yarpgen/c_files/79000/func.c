/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79000
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
    var_14 = ((/* implicit */int) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [(unsigned short)3] [(unsigned short)3])));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */_Bool) 109769879U)) ? (6U) : (var_10)))));
    }
    var_16 = ((/* implicit */unsigned int) max((var_16), (var_0)));
    var_17 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) var_2)) + (var_1))), (((/* implicit */unsigned long long int) (~(((34359705600LL) | (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))))));
}
