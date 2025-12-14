/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8331
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
    var_10 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (unsigned char)13);
        var_11 = ((/* implicit */signed char) arr_0 [3LL] [i_0 + 1]);
    }
    var_12 &= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-86)) ? (1370549938U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3)))));
}
