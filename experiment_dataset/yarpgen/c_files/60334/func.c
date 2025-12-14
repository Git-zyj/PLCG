/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60334
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-77))));
                arr_7 [i_0] = ((/* implicit */unsigned int) min(((+(var_6))), (((/* implicit */long long int) 4294967294U))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) (!((_Bool)1)));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_3) == (((/* implicit */int) var_9)))))))) ? ((-(((unsigned long long int) 5879512914151140711ULL)))) : (((/* implicit */unsigned long long int) (+(var_2))))));
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5879512914151140711ULL)) ? (2033284587U) : (((/* implicit */unsigned int) -2029366528)))))));
    var_15 = var_3;
}
