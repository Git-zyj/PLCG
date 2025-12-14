/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59602
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_18 = arr_0 [9U];
        arr_3 [i_0] = var_0;
        var_19 = ((unsigned int) arr_0 [i_0]);
        var_20 *= min((((unsigned int) (!(((/* implicit */_Bool) arr_1 [1U] [i_0]))))), (min((max((arr_2 [9U]), (arr_2 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_21 = arr_5 [i_1] [i_1];
        arr_6 [15U] = arr_0 [i_1];
    }
    var_22 = var_0;
    var_23 = var_12;
    var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
    var_25 *= min((max((var_3), (max((var_11), (var_7))))), (var_6));
}
