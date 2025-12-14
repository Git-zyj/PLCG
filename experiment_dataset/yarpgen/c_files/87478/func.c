/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87478
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) arr_5 [i_1] [i_1])))) : (((/* implicit */int) (signed char)-23))));
                var_11 += ((/* implicit */unsigned int) ((unsigned short) arr_5 [i_0] [i_0]));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) -1556383119);
    var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((var_5), (var_5))))));
}
