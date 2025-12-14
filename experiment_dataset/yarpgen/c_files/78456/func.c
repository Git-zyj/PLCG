/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78456
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (max((((/* implicit */unsigned int) var_5)), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 |= ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) min(((unsigned char)37), ((unsigned char)27)))), (var_4))) - (((/* implicit */unsigned int) 833004054))));
                var_20 = ((/* implicit */long long int) var_9);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
    var_22 = ((/* implicit */short) ((_Bool) min((var_17), (((/* implicit */int) min((var_8), (var_13)))))));
}
