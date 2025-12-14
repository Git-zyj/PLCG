/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93822
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_10 ^= ((/* implicit */short) (-(((arr_0 [i_0]) * (((/* implicit */unsigned long long int) 0U))))));
        var_11 = ((arr_0 [i_0 - 2]) >> ((((+(arr_0 [i_0]))) - (5451668173881657433ULL))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) arr_4 [13]);
        arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (0ULL)));
    }
    var_13 = ((/* implicit */unsigned int) var_8);
}
