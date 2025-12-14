/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82106
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
    var_14 = ((/* implicit */short) (((!(min((var_4), (var_12))))) ? (((((4294967295U) >> (((/* implicit */int) (_Bool)0)))) >> (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11))))) : (3046419453U)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((var_15), (((unsigned int) (~(arr_0 [i_0 - 1]))))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) arr_5 [i_1] [i_1]);
            }
        } 
    } 
}
