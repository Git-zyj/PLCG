/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84374
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
    var_20 = ((/* implicit */signed char) var_15);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_12)) & (((/* implicit */int) (_Bool)1)))), (((-96693484) / (((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned long long int) arr_2 [i_0 - 4])) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) / (16213301592308663784ULL)))))));
                arr_6 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_0] [i_1])), (max((var_15), (((/* implicit */unsigned short) var_11))))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) ((short) 11891827401330908209ULL)))))));
            }
        } 
    } 
}
