/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75757
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) min(((!(((/* implicit */_Bool) var_5)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (1168941429U)))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_1) : (var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) ((1168941438U) == (3126025834U))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = (+(822688932));
                var_13 = ((/* implicit */int) ((max((((/* implicit */unsigned int) ((1506477998) - (716159906)))), (((4294967277U) + (((/* implicit */unsigned int) var_5)))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(1729455925))))))))));
            }
        } 
    } 
    var_14 += ((2427101170U) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
}
