/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75730
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
    var_14 = ((/* implicit */int) (~(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (4294967283U)))));
    var_15 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_2 [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)223)) & (((/* implicit */int) (unsigned char)252))))) : (((((/* implicit */_Bool) -8313908933327631741LL)) ? (((var_9) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_0] [i_1])))))))));
                var_17 += ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) - (((((/* implicit */int) ((short) (signed char)-41))) + (((/* implicit */int) arr_0 [i_0]))))));
                var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) var_10)), (((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [10U] [i_1])) : (((/* implicit */int) var_5)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) (-((+(((/* implicit */int) ((unsigned char) 1219076387)))))));
}
