/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58164
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_3 [i_0 + 3] [i_0 + 3]), (arr_3 [i_0] [i_0 - 1])))) ? (min((arr_0 [i_0 - 1]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0 + 1])))) : (((arr_0 [i_0 + 3]) | (((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0 - 1]))))));
                var_16 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((signed char) 2935232993U))) ? (min((((/* implicit */long long int) 1359734282U)), (arr_6 [i_0]))) : (((/* implicit */long long int) arr_3 [i_0] [i_0 + 2])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_14);
    var_18 = ((/* implicit */int) var_10);
}
