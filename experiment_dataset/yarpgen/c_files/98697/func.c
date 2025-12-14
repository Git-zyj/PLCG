/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98697
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
    var_14 = ((/* implicit */short) max((var_8), (((/* implicit */int) var_3))));
    var_15 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))))) ? (var_7) : (var_1)));
        var_17 *= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))));
    }
    var_18 = ((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((_Bool) ((unsigned char) var_5))))));
}
