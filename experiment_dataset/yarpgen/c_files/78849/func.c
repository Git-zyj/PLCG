/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78849
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) ((((_Bool) (unsigned short)29002)) && (((/* implicit */_Bool) ((unsigned int) arr_0 [i_0])))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_1 [i_0] [20ULL]))) << (((arr_1 [i_0] [i_0]) - (728512425967155560ULL)))));
        var_21 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    var_22 = ((((/* implicit */int) ((unsigned short) (unsigned char)255))) & (((/* implicit */int) (unsigned char)36)));
}
