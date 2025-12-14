/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59456
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
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)));
    var_18 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) var_8))))), ((-(3356057351U))))) << (((938909948U) / (((/* implicit */unsigned int) 646431861))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_0] = arr_3 [(_Bool)1] [10U];
                var_19 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
            }
        } 
    } 
}
