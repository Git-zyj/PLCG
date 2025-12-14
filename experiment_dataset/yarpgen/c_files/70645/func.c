/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70645
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
    var_15 |= ((/* implicit */long long int) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)253)) & (-790379458)));
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))));
        var_17 += ((/* implicit */unsigned int) (signed char)103);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */int) (unsigned char)253)) : (-790379458)));
        var_19 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)57213)) / (((/* implicit */int) arr_0 [i_0 - 2]))));
    }
}
