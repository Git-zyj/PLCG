/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90334
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
    var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_4)) % (var_12)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))), (((/* implicit */int) ((((/* implicit */int) ((_Bool) (unsigned char)134))) > (((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = (-(var_10));
                arr_8 [i_0 + 2] [i_0 + 2] [i_1] = ((/* implicit */int) min((var_5), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1 - 1] [i_1 + 1])) && (((/* implicit */_Bool) -73777901)))))));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)16)), (237709659U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : ((~(var_9))))), (var_9))))));
                arr_9 [i_1] [i_1] [i_1 + 1] = ((/* implicit */signed char) (~((~(((arr_4 [i_0]) ? (237709675U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))))));
            }
        } 
    } 
}
