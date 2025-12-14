/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94284
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((~((-(9437591731747891975ULL)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((int) var_7));
        var_13 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_14 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3))), (((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) var_9))))));
    }
    var_15 ^= ((/* implicit */long long int) var_4);
}
