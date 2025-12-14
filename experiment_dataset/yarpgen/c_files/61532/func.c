/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61532
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
    var_17 = ((/* implicit */_Bool) ((unsigned long long int) var_7));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */signed char) (+(arr_0 [i_1])));
                var_19 = ((/* implicit */unsigned long long int) ((unsigned short) (~(626779608U))));
            }
        } 
    } 
    var_20 |= ((/* implicit */signed char) var_16);
    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) (_Bool)1)), (var_16))) > (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))), (var_2)));
}
