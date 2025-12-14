/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82159
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
    var_18 = ((/* implicit */unsigned int) min(((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_8)) : (var_7))))), (((/* implicit */long long int) ((unsigned int) var_5)))));
    var_19 = ((/* implicit */int) 2838165606U);
    var_20 = ((/* implicit */long long int) var_8);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (+((-(((long long int) 4294967295U))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) max((973699918), (973699918)));
                    arr_10 [i_2 - 1] [i_1] [i_0] = 0U;
                }
            } 
        } 
    } 
}
