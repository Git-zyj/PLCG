/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82471
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) ((signed char) max((((var_1) % (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) var_8)))));
                var_11 -= ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (((((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 3])) + (((/* implicit */int) arr_3 [i_1 - 2] [i_1 + 1])))) : (((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 2])))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((11119418295003870191ULL), (((/* implicit */unsigned long long int) var_8))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (var_0) : (min((((/* implicit */unsigned long long int) var_8)), (max((7327325778705681425ULL), (((/* implicit */unsigned long long int) var_5)))))))))));
}
