/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60270
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) var_16);
        var_18 &= ((/* implicit */short) (((~(arr_1 [i_0]))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)61417)) ? (((/* implicit */int) (unsigned short)4119)) : (((/* implicit */int) (unsigned short)31963)))))));
    }
    var_19 -= ((/* implicit */long long int) (unsigned char)95);
}
