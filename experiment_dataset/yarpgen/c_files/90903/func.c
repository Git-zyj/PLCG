/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90903
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
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) ((unsigned int) var_7));
        var_20 &= ((/* implicit */unsigned char) var_8);
    }
    /* LoopSeq 1 */
    for (unsigned int i_1 = 3; i_1 < 16; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) ((arr_1 [2] [i_1]) ? (((/* implicit */int) arr_0 [i_1])) : (214408223)))))));
        var_22 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 3])) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) (_Bool)0)))))));
        var_23 *= ((/* implicit */unsigned int) (_Bool)0);
    }
    var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (var_3)));
    var_25 ^= ((/* implicit */unsigned long long int) (_Bool)0);
}
