/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88596
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_2))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((950320612198717117LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (2215274140U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
        var_15 = ((/* implicit */short) (+((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
}
