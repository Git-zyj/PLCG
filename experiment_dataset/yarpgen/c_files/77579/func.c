/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77579
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_17);
                arr_7 [i_0] = (-((~(max((var_4), (var_9))))));
                var_19 = ((/* implicit */signed char) (((_Bool)1) ? (-3028119737825294844LL) : (((((/* implicit */_Bool) 0)) ? (0LL) : (((/* implicit */long long int) 1596153656))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
}
