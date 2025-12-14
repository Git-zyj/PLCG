/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84139
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
    var_15 |= ((unsigned int) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            {
                var_16 = max((min((((/* implicit */unsigned int) ((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))), (max((var_1), (((/* implicit */unsigned int) (short)-14774)))))), ((+(0U))));
                var_17 = var_2;
                var_18 = arr_2 [i_0 - 3];
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (short)16328)) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) (short)-7183)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) max((((unsigned int) var_14)), (min((((unsigned int) var_3)), (((134217726U) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
}
