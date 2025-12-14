/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89893
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
    for (signed char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_20 = arr_0 [i_0 - 2];
        var_21 = ((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_0] [i_0 - 2]));
    }
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((unsigned int) ((signed char) var_18))))));
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((2437323024859818840ULL), (((/* implicit */unsigned long long int) var_16)))))))) <= (max(((-(((/* implicit */int) var_11)))), (((((/* implicit */int) var_4)) >> (((/* implicit */int) var_11)))))))))));
}
