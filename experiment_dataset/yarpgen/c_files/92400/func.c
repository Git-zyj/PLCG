/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92400
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [6ULL])) > (((/* implicit */int) arr_0 [10ULL]))));
                arr_6 [i_0] [i_0] = (-(min((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_8))))), (var_9))));
                arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min((((((/* implicit */_Bool) 1130747807U)) || (((/* implicit */_Bool) 780411029U)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) <= (var_4))))))) >= (((max((var_3), (var_10))) / (((/* implicit */long long int) 3164219497U))))));
                arr_8 [i_0] |= ((/* implicit */unsigned char) (+((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) < (var_10))))))));
            }
        } 
    } 
    var_16 += ((/* implicit */short) (!(((/* implicit */_Bool) 0U))));
    var_17 = ((/* implicit */_Bool) 1130747807U);
}
