/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93965
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
    var_18 = var_0;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * (var_14))), (arr_3 [i_1 + 1] [i_0 + 1]))))));
                var_20 ^= min((((/* implicit */unsigned int) max((var_8), (var_2)))), (((((/* implicit */_Bool) ((arr_3 [i_0] [i_0 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1 - 3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (var_9) : (arr_2 [i_1]))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) && (((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_1 [i_0]))))));
            }
        } 
    } 
}
