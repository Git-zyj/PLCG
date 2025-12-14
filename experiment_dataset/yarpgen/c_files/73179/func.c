/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73179
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_1 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        var_13 = ((/* implicit */unsigned short) ((((arr_1 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) == (((/* implicit */long long int) ((973863197U) >> (((((/* implicit */int) (short)6837)) - (6828))))))));
    }
    var_14 = ((/* implicit */_Bool) var_7);
}
