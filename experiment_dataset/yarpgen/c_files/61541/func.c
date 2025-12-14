/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61541
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
    var_11 = ((/* implicit */_Bool) ((signed char) 1085664982U));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned int) var_5);
                var_13 ^= min(((~(234898652))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (-475303144) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (613368676) : (((((/* implicit */int) var_3)) + (((/* implicit */int) var_7)))))));
                arr_5 [i_1 + 3] = ((/* implicit */int) ((_Bool) 234898652));
            }
        } 
    } 
}
