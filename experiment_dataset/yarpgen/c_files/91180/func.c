/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91180
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                var_15 = var_6;
                arr_4 [i_1] = min((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (((arr_2 [i_0 + 1]) + (((/* implicit */long long int) 2628900688U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (var_7) : (2628900680U)))))), (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) 893134125)), (2628900693U)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_8);
    var_17 = ((/* implicit */unsigned char) var_13);
}
