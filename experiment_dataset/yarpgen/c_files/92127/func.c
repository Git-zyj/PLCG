/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92127
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
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0 + 2] [i_1] = arr_0 [i_0];
                arr_7 [i_1] [i_0 + 3] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (max((max((-5875871075961067871LL), (-5867574480726726585LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 5867574480726726584LL)) || (((/* implicit */_Bool) 5875871075961067870LL))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 3])))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)34680))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (max((((/* implicit */long long int) ((var_3) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))), (5875871075961067870LL)))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) 3723630514U)) ? (-5867574480726726584LL) : (-5875871075961067871LL)));
}
