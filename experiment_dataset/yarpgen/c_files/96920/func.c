/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96920
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
    var_11 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
        arr_2 [i_0] = ((var_1) ? (var_10) : (var_4));
        var_13 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_0)))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_9)) : (var_10))) : (var_4)));
    }
}
