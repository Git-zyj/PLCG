/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96814
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_13 = ((long long int) -7473053252709950200LL);
                var_14 = arr_0 [i_1] [i_0];
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_1]), (arr_2 [i_0])))) || (((/* implicit */_Bool) max((-3106674628016200679LL), (arr_0 [i_0] [i_1]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((long long int) 9223372036854775807LL))) ? (((long long int) 9223372036854775789LL)) : (var_5))) == (2127557242656502769LL)));
}
