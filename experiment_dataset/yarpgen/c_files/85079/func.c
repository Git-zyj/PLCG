/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85079
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
    var_14 |= ((/* implicit */long long int) var_11);
    var_15 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_3 [i_0] [2ULL] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_17 -= arr_1 [4ULL] [4ULL];
        var_18 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
}
