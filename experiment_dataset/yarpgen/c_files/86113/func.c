/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86113
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
    var_19 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)3)))));
    var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_11)) + (((var_14) - (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? ((-(((/* implicit */int) var_6)))) : (var_7)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) arr_0 [i_0 - 1]);
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_0 [i_0 - 1]))));
    }
}
