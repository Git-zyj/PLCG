/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7091
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((unsigned long long int) arr_2 [i_0]));
        var_21 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~(arr_1 [21U] [i_0]))))));
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_19)))))) >> (((var_11) - (1106692585018174638LL)))));
}
