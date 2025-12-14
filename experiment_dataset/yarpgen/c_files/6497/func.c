/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6497
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */_Bool) (+((-(((arr_0 [13U]) - (arr_0 [i_0])))))));
        arr_2 [(signed char)15] [i_0] = ((/* implicit */signed char) var_18);
        var_21 = ((/* implicit */unsigned short) 15803055063137397401ULL);
    }
    var_22 = ((/* implicit */short) var_12);
    var_23 = ((/* implicit */_Bool) var_8);
}
