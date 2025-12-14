/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72075
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_18 -= ((/* implicit */short) ((signed char) (~(((/* implicit */int) arr_2 [i_0] [i_1])))));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (short)32767))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) min((((short) (signed char)59)), (((/* implicit */short) (signed char)37))));
            }
        } 
    } 
    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_17))));
}
