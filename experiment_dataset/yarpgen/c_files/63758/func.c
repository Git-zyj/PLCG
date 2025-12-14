/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63758
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
    var_12 = ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_4)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) 9160874028277604483LL)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])) : (var_11))) : (max((var_11), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) arr_3 [i_1] [i_0]))))));
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]))))), (max((0LL), (((/* implicit */long long int) arr_0 [i_1 - 1] [i_1 - 1]))))));
                var_14 = ((/* implicit */signed char) -421726549);
                var_15 = ((/* implicit */int) max((7LL), (((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_0] [i_0])), (arr_3 [i_1 - 1] [i_1 - 1]))))));
            }
        } 
    } 
}
