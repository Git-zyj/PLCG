/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75412
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
    var_17 = ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_3 [i_0] = arr_1 [i_0] [i_0];
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)127)) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)14149)))) : ((~(var_14))));
    }
}
