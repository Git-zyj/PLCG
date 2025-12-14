/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92113
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
    var_15 = ((long long int) ((unsigned int) max((((/* implicit */unsigned int) var_8)), (1795039607U))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
                arr_5 [i_0] [i_1 + 2] = (~(((((/* implicit */_Bool) min((3151581687717017089LL), (((/* implicit */long long int) var_4))))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 536870911U))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((long long int) ((signed char) 2LL)))), (1090790372718409851ULL)));
}
