/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96967
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_15 -= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 864612715)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (signed char)29)))), (((/* implicit */int) var_6))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))))), ((unsigned char)110))))));
                var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) % (10150471519784803085ULL)))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) max(((signed char)8), (((/* implicit */signed char) (_Bool)0))))), (arr_1 [i_0])))) ? (((/* implicit */int) ((_Bool) arr_1 [i_0]))) : (max((((arr_0 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (signed char)0))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (+(((var_0) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))));
    var_19 = ((/* implicit */long long int) max((var_19), (var_7)));
    var_20 |= ((/* implicit */_Bool) var_3);
}
