/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59020
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (var_9)));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_15))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_19 |= ((((/* implicit */_Bool) (unsigned short)33290)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33272))) : (710848349U));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_1 [i_0 - 1])))))))));
        arr_2 [(_Bool)1] |= ((/* implicit */signed char) max((710848338U), (((/* implicit */unsigned int) (unsigned short)32245))));
    }
    var_21 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)82)), ((unsigned short)51256))))))), ((((!(var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (((((/* implicit */_Bool) (short)4867)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4873))) : (1704960475653259886ULL)))))));
}
