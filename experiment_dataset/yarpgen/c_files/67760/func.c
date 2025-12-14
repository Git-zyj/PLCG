/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67760
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
    var_19 = ((((/* implicit */unsigned int) max((1552043490), (1552043503)))) >= (((((/* implicit */_Bool) 30786325577728ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min((((/* implicit */unsigned int) var_1)), (var_15))))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((arr_1 [i_0]) == (arr_0 [i_0 - 1] [i_0])))) : (arr_0 [i_0] [i_0]))) & (((((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) 1552043489)))) ? (((/* implicit */int) ((1552043503) > (var_9)))) : (((((/* implicit */_Bool) 3529293929U)) ? (1552043523) : (((/* implicit */int) (_Bool)1))))))));
        arr_4 [0] = ((/* implicit */short) (_Bool)1);
    }
    var_20 = ((/* implicit */int) var_5);
}
