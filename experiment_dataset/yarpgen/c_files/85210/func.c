/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85210
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
    var_12 = ((/* implicit */unsigned int) ((unsigned short) (+(((unsigned int) var_11)))));
    var_13 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? ((+(((/* implicit */int) var_11)))) : (((var_6) ? (var_7) : (((/* implicit */int) var_8))))));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_9))) ? (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((signed char) var_6))))) : (((/* implicit */int) var_11))));
            }
        } 
    } 
}
