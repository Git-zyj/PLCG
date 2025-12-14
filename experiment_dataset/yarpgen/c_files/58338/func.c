/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58338
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (short)-7726)) ? (3736322276U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7726))))))) ? (var_17) : (((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_20 = min(((+(((/* implicit */int) min((((/* implicit */unsigned short) (short)7725)), (var_10)))))), (min((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_12))))), (((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (short)7725)) : (var_14))))));
                var_21 += ((/* implicit */unsigned short) ((unsigned int) ((int) (signed char)-117)));
            }
        } 
    } 
}
