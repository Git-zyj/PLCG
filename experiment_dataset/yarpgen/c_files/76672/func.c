/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76672
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_0]))));
        var_16 = ((/* implicit */short) arr_2 [i_0]);
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_17 = ((/* implicit */short) ((unsigned int) ((((unsigned long long int) 5926972348572614573ULL)) < (var_2))));
        arr_8 [i_1] &= var_9;
    }
}
