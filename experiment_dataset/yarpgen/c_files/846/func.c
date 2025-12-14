/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/846
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((arr_4 [i_0 + 2]), (arr_1 [i_0] [i_1]))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_15))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_16);
    var_22 = ((/* implicit */int) 10U);
}
