/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75290
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
    var_12 &= ((/* implicit */long long int) var_0);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 - 1])) << ((((+(arr_2 [i_0 + 1]))) - (8605125237540925087ULL)))));
        var_14 = ((/* implicit */long long int) ((arr_0 [i_0 + 1] [i_0 + 1]) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) || (((/* implicit */_Bool) arr_1 [i_0 + 1]))))))));
    }
}
