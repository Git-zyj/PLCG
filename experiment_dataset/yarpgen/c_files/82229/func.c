/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82229
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
    var_18 = ((0U) << (((635101235U) - (635101221U))));
    var_19 = ((((((/* implicit */_Bool) var_9)) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) >= (635101258U))))))) << (((var_16) - (3124228104U))));
    var_20 = var_9;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (arr_2 [i_0])));
        arr_4 [i_0] = max((max((627382823U), (arr_3 [i_0 - 1]))), (((3817254224U) << (((4266445325U) - (4266445318U))))));
        var_22 &= ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_12)))))) ? (((unsigned int) arr_1 [i_0 - 1])) : (arr_2 [i_0 + 1]));
    }
}
