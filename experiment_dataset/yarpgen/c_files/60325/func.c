/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60325
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
    var_15 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_10))));
        var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_13)))))) && (((/* implicit */_Bool) var_6))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) arr_1 [i_0])))))), (((16238612721918861560ULL) / (((/* implicit */unsigned long long int) arr_1 [i_0])))))))));
    }
    var_19 = ((/* implicit */long long int) var_12);
    var_20 = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) ((2130706432U) % (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
}
