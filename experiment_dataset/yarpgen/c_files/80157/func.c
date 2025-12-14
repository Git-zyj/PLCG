/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80157
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
    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 607198886)) ? (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_3))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))))) - (min((((((/* implicit */int) var_4)) * (((/* implicit */int) var_3)))), (((((/* implicit */int) var_4)) - (-607198873)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */unsigned int) var_2);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(var_6)));
            }
        } 
    } 
}
