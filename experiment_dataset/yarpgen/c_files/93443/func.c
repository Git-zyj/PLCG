/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93443
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) var_3);
                arr_7 [i_0] = ((/* implicit */short) var_9);
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_11);
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (var_7)));
}
