/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92423
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (var_17)));
        var_20 = ((/* implicit */int) ((2662638934U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106)))));
    }
    var_21 = ((/* implicit */signed char) ((((_Bool) ((unsigned int) 1632328388U))) ? ((((_Bool)0) ? (-2078966555) : (((/* implicit */int) (signed char)-123)))) : (((/* implicit */int) var_4))));
}
