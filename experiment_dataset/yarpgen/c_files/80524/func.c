/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80524
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
    var_19 *= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_3) : (var_16)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5180253639181237279ULL)) ? (((/* implicit */int) var_15)) : (var_0)))) : (max((5180253639181237293ULL), (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) var_7)));
    var_20 = ((((/* implicit */_Bool) (+(var_1)))) ? (max((max((var_5), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) (+(2U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))));
    var_21 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((unsigned char) arr_4 [i_0 - 1] [i_0]));
                var_23 = ((/* implicit */unsigned short) arr_1 [i_1]);
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_0);
}
