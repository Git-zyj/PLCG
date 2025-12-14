/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64130
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
    for (signed char i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 &= var_13;
                var_20 += ((/* implicit */signed char) var_7);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_11))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) (signed char)81)) + (((/* implicit */int) (unsigned short)45081)))), (((/* implicit */int) var_3))))) ? (min((((/* implicit */long long int) (+(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_9))))) : (((/* implicit */long long int) 617102777))));
    var_23 = ((/* implicit */short) min((var_23), (max((var_7), (((/* implicit */short) ((signed char) var_13)))))));
    var_24 ^= ((/* implicit */short) var_0);
}
