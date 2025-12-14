/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6522
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */unsigned char) 1073741823U);
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [4LL] [4LL]))) | (((591235206U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))))))));
        var_18 |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [(short)0]))))) : (((17ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))))));
    }
    var_19 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)182))));
}
