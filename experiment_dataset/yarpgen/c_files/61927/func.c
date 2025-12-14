/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61927
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
    var_10 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) var_5))))) || (((/* implicit */_Bool) var_5))))), (min((((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), ((((_Bool)1) ? (1814762359U) : (1183485448U)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                arr_6 [8] [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) 1814762359U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)896))) : (3005186229U));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) max((min((((/* implicit */unsigned int) arr_0 [i_1 + 3])), (((1183485448U) / (1814762359U))))), (((/* implicit */unsigned int) arr_1 [i_0]))));
            }
        } 
    } 
}
