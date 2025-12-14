/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87309
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (1297240192U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 1297240192U))))))))) ? (((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (1073741823) : (((/* implicit */int) var_9)))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_3)), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (4067403683248354278ULL)))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */signed char) (-(var_3)));
}
