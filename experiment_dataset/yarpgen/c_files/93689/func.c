/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93689
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_4))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */short) max((var_1), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (var_3))))));
        var_17 = ((/* implicit */unsigned char) (~(max((524288U), (var_7)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) (+(var_13)));
        arr_6 [(unsigned short)15] = (~(((/* implicit */int) var_9)));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) 3764084104U))));
    }
    var_20 = var_10;
}
