/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95000
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
    var_13 = ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_5))))))) : ((~(((/* implicit */int) ((var_11) || (((/* implicit */_Bool) var_9))))))));
    var_14 = ((/* implicit */short) min((var_3), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)178))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-28))) : (var_9)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 -= arr_3 [i_0];
                arr_5 [i_1] [(short)19] [(signed char)0] = ((/* implicit */unsigned int) (short)-24320);
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_3);
}
