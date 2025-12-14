/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63317
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_20 |= ((((/* implicit */_Bool) ((((long long int) (_Bool)0)) - (((/* implicit */long long int) (-(var_5))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)108))))) : (arr_1 [i_0]));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((unsigned long long int) arr_2 [(signed char)20])))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((long long int) var_1))), (var_15))))));
}
