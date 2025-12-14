/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55161
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
    var_15 |= ((/* implicit */_Bool) var_1);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = arr_1 [i_0];
        arr_3 [i_0] [i_0] = ((/* implicit */short) 18446744073709551615ULL);
    }
    /* vectorizable */
    for (short i_1 = 4; i_1 < 8; i_1 += 1) 
    {
        arr_6 [i_1 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1633)) ? (((/* implicit */int) arr_1 [2ULL])) : (((/* implicit */int) (unsigned short)46264))))) ? (((/* implicit */int) arr_2 [0ULL])) : (((/* implicit */int) arr_0 [i_1 - 2]))));
        arr_7 [i_1] [i_1] = ((/* implicit */int) arr_5 [i_1 - 3]);
        var_17 -= (+(3896760059558406066ULL));
    }
}
