/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74627
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
    var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_3))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_13))))));
    var_15 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned short)59512))))) * (((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) arr_4 [i_0] [i_1]);
                var_17 -= ((/* implicit */unsigned short) var_10);
            }
        } 
    } 
}
