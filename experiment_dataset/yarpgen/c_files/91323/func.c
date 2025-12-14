/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91323
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (~(1561414193212277250ULL)));
        arr_3 [i_0] = ((/* implicit */long long int) (~(var_8)));
        var_19 -= ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    var_20 = ((/* implicit */unsigned long long int) var_5);
}
