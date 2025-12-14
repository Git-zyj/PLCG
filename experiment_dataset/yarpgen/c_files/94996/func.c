/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94996
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_20 = ((var_3) + ((~(var_12))));
        var_21 &= ((/* implicit */unsigned int) 11818823418316532592ULL);
        var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1 - 1]);
            var_24 += ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (11818823418316532586ULL))));
        }
    }
    var_25 = ((/* implicit */signed char) min((11818823418316532592ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11818823418316532586ULL)) ? (3235679698U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
    var_26 = ((/* implicit */signed char) var_6);
}
