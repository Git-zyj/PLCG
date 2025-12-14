/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72700
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
    var_15 -= ((/* implicit */int) (~(0ULL)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((_Bool) arr_0 [i_0])) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_11))))))) : (((/* implicit */int) var_9))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((1661063684) >> (((var_4) - (4156254112U))))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_12), (var_12)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7741)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (13905484665576334655ULL)))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) (short)27060))))) : ((~(((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
    }
}
