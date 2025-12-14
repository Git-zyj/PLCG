/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73918
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
    var_15 = ((/* implicit */long long int) (_Bool)1);
    var_16 = var_7;
    var_17 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [21ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_1 [i_0] [13])) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) min((4294967283U), (((/* implicit */unsigned int) arr_1 [i_0] [(short)22]))))) : ((~(9223372036854775807LL)))))));
        var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)14))));
    }
}
