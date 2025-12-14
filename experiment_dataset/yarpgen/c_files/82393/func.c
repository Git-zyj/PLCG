/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82393
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((175063357U) << (((((/* implicit */int) min((var_14), (var_12)))) + (39))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)(-127 - 1))))))));
    var_21 = ((/* implicit */unsigned long long int) max((175063352U), (65535U)));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((short) 0ULL)))));
                var_23 -= ((/* implicit */unsigned int) var_15);
                var_24 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1]))) != (((unsigned long long int) arr_0 [i_0] [i_1 - 2])))))) / (((65535U) << (((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))))), ((-(0ULL))))) / (var_9)));
}
