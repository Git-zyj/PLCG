/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91986
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
    var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) (+(((/* implicit */int) ((max((((/* implicit */unsigned int) var_12)), (arr_0 [i_0]))) >= (var_9))))));
        arr_3 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1])))));
    }
    var_17 = ((/* implicit */unsigned int) var_0);
    var_18 = ((/* implicit */long long int) (short)15);
}
