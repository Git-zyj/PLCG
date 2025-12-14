/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59388
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
    var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_7), (var_13)))), (min((((/* implicit */unsigned int) (_Bool)1)), (2355960338U)))))) && (((/* implicit */_Bool) (-((~(var_12))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((min((((2363516088U) & (var_12))), (((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) << ((((~(((/* implicit */int) arr_1 [i_0])))) - (39)))));
                var_17 &= ((/* implicit */_Bool) min((min((min(((short)7), (((/* implicit */short) (signed char)-100)))), (((/* implicit */short) var_15)))), (arr_0 [8U])));
            }
        } 
    } 
}
