/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60463
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
    var_15 += ((/* implicit */unsigned char) var_9);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_16 = ((/* implicit */long long int) var_5);
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (unsigned short)65535))));
        var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_0)) : (((var_13) ? (((/* implicit */int) (unsigned short)27957)) : (var_4)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 4; i_1 < 12; i_1 += 4) 
    {
        var_19 ^= ((/* implicit */unsigned int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_4 [i_1 + 3])) - (1)))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_8))));
    }
}
