/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5625
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
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (var_8)));
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_3))))))) : (((unsigned int) max((((/* implicit */signed char) var_4)), (arr_1 [i_0] [i_1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)0));
}
