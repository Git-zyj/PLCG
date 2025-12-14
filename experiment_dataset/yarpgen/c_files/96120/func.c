/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96120
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
    var_11 = ((/* implicit */unsigned short) (unsigned char)15);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), ((short)-20114)))) : ((+(((/* implicit */int) var_2))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-97))))) || (((/* implicit */_Bool) var_4))));
            }
        } 
    } 
}
