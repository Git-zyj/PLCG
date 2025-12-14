/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71345
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (4899068814141795298LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-8)))))) ? (((/* implicit */unsigned long long int) ((-4899068814141795308LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((unsigned long long int) arr_1 [i_0] [i_0]))));
        var_19 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
}
