/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88006
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
    var_16 = ((/* implicit */_Bool) (~((+(((/* implicit */int) max((var_8), (var_3))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [(short)9])) ? (((/* implicit */int) max((var_3), (var_0)))) : (((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) (short)-31137)) : (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]))))));
                    arr_9 [i_0] [i_0] [i_2] [i_1] = var_11;
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) (_Bool)1);
}
