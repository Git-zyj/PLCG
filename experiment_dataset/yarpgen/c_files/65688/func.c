/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65688
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
    var_16 = ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned short) var_1)), ((unsigned short)21965))));
    var_17 = ((/* implicit */unsigned int) min((var_17), (((unsigned int) var_7))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (_Bool)0)))));
                var_18 ^= ((/* implicit */signed char) ((unsigned int) ((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21954))))));
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned short) var_7);
}
