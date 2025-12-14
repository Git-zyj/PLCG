/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60346
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) : (((((/* implicit */unsigned long long int) ((var_10) ? (var_6) : (((/* implicit */int) var_8))))) | (var_3)))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_16 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14)))), (((/* implicit */int) min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned short) var_1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_0 - 2] [i_0 - 2]), (((/* implicit */unsigned short) var_13)))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (var_4))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_5)))))))));
                    var_17 = ((/* implicit */int) min((var_17), ((+(((((/* implicit */int) var_9)) * (((/* implicit */int) var_8))))))));
                }
            } 
        } 
    } 
}
