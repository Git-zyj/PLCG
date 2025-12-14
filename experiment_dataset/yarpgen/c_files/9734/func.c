/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9734
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */int) (+(min((min((((/* implicit */unsigned int) var_4)), (var_17))), (((/* implicit */unsigned int) arr_3 [(_Bool)1] [(_Bool)1] [i_1]))))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((/* implicit */int) ((unsigned short) -8710738619685566508LL))))))));
                var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0 - 1]))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_15) - (((/* implicit */unsigned long long int) var_17))))) ? ((-(514062357U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
    var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_0)))));
}
