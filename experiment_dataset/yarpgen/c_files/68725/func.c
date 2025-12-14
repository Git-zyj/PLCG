/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68725
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
    var_16 = (_Bool)1;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        var_17 = arr_1 [i_0];
        var_18 ^= ((/* implicit */_Bool) (short)-32747);
    }
    for (short i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [(short)2])) ? (arr_5 [i_1 + 2]) : (6U))))));
        var_20 = ((/* implicit */signed char) arr_4 [(signed char)6]);
        arr_6 [i_1] = ((/* implicit */_Bool) arr_3 [i_1]);
    }
    var_21 = var_11;
}
