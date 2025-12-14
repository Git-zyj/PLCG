/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99687
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
    var_13 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) var_9);
                var_15 += ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-89))));
                var_16 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)47226))));
                arr_5 [i_1 + 2] = max((((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? ((-(2230029765U))) : (var_0))), (((/* implicit */unsigned int) ((_Bool) (unsigned short)7783))));
            }
        } 
    } 
}
