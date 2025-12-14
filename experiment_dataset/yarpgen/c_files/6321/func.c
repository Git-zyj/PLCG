/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6321
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_4 [i_1]), (arr_4 [i_1])))) ? (((/* implicit */int) (!(var_9)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_4 [i_1]))))));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((4294967295U), (((((/* implicit */unsigned int) ((((/* implicit */int) (short)20973)) >> (((((/* implicit */int) (short)-21252)) + (21266)))))) * (((4294967295U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31))))))))))));
                    var_19 = 2622259205U;
                }
            } 
        } 
    } 
    var_20 = var_14;
}
