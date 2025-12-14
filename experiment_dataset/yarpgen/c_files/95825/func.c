/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95825
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
    var_15 = ((/* implicit */unsigned int) ((signed char) var_13));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_16 -= ((/* implicit */signed char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)67))))), (max((((/* implicit */unsigned short) arr_5 [i_0 + 4] [i_0 + 4] [i_0 - 1])), (var_1)))));
                var_17 += ((/* implicit */int) (signed char)112);
            }
        } 
    } 
}
