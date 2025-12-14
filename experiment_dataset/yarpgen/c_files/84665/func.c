/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84665
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)24)), ((unsigned short)55807)))) ? ((~(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */int) (unsigned short)52774)) - (var_1)))))));
        var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)6] [i_0])) || (((/* implicit */_Bool) var_0))))), (max((((/* implicit */unsigned long long int) 10LL)), (15646334043239158590ULL)))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~((~(((/* implicit */int) var_9))))))) ^ (((long long int) 8173375057492591335ULL))));
    }
    var_19 ^= ((/* implicit */unsigned char) (((+(9223372036854775780LL))) > (max((((/* implicit */long long int) var_4)), (max((((/* implicit */long long int) var_11)), (19LL)))))));
}
