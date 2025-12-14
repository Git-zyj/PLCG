/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8456
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
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-24613)) && (((/* implicit */_Bool) var_3))))), (7030308797733008875LL))));
                var_14 = ((/* implicit */_Bool) max((var_3), ((-(((/* implicit */int) arr_5 [i_1] [i_0] [i_0]))))));
            }
        } 
    } 
}
