/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67
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
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0 + 2] [i_0] = var_8;
                var_20 = ((/* implicit */int) ((((((/* implicit */unsigned int) arr_1 [i_0 + 1])) <= (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) var_16)) : (3019765929U))))) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [11U]))));
                arr_6 [i_0] [i_0 - 1] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((var_16) >= (arr_1 [3ULL]))))) / (arr_4 [16U] [i_1] [i_1]))) % (((((/* implicit */_Bool) ((arr_3 [i_0] [i_0] [i_1]) ^ (arr_0 [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) <= (var_11))))) : (arr_0 [i_0 + 2] [i_0 + 3])))));
            }
        } 
    } 
    var_21 -= var_4;
    var_22 = ((/* implicit */unsigned int) (~(var_9)));
    var_23 = ((/* implicit */int) max((var_23), (var_19)));
    var_24 -= ((/* implicit */int) var_11);
}
