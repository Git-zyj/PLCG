/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6532
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [10] = ((/* implicit */signed char) ((int) ((((/* implicit */int) var_6)) + (((/* implicit */int) (signed char)-95)))));
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
        var_15 += ((/* implicit */short) (signed char)98);
        var_16 = ((/* implicit */long long int) var_5);
    }
    var_17 &= ((/* implicit */unsigned char) var_11);
}
